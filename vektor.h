#include <iostream>

class vektor {
	private:
		float* member;
		int count;
		int		id;
		bool	err;
		static int ObjNum;
//	static:
//		int count;
	public:
		vektor();
		vektor(int num);
		vektor(int num,float mem);
		~vektor();
		void setMember(int num,float mem);
		float getMember(int num);
		void display();
		vektor& operator= (const vektor &b);
		int getSize();
		void setSize(int size);
		static int getObjNum();
};

vektor::vektor(){
	ObjNum++;
	count = 1;
	member = new float [count];
	member[0] = 0;
	err = 0;
}

vektor::vektor(int num){
	ObjNum++;
	count = num;
	member = new float [count];
	for(int i = 0; i<count; i++){
		member[i] = i;
	}
	err = 0;
}

vektor::vektor(int num,float mem){
	ObjNum++;
	count = num;
	member = new float [count];
	for (int i = 0;i<count;i++) member[i] = mem;
	err = 0;
}

vektor::~vektor(){
	ObjNum--;
	delete [] member;
}

float vektor::getMember(int num){
	if (num<count)	return member[num];
	else{
		err = 1;
		return 1;
	}
	
}

void vektor::display(){
	for(int i = 0;i<count;i++){
		std::cout << member[i] << "\t";
	}
}

void vektor::setMember(int num, float mem){
	if (num<count) member[num]=mem;
	else{
		err=1;
		}
}


int vektor::getSize(){
	return count;
}

vektor& vektor::operator=(const vektor &right){
	if (this==&right) return *this;
	delete [] member;
	count = right.count;
	member = new float[count];
	for(int i =0;i<count;i++){
		member[i] = right.member[i];
	}
}

void vektor::setSize(int size){
	delete [] member;
	count = size;
	member = new float [count];
	for(int i = 0;i<count;i++) member[i] = 0;
}

/*vektor& operator +(vektor &a,vektor &b){
	int sizeA = a.getSize();
	int sizeB = b.getSize();
	if ((sizeA > sizeB)|(sizeA<sizeB)) return a;
	vektor res(sizeA);
	for(int i = 0;i<a.getSize();i++){
		float mem = a.getMember(i)+b.getMember(i);
		res.setMember(i,mem);
	}
	return res;
}*/

int vektorSum(vektor& arg1, vektor& arg2,vektor& sum){
	int size1 = arg1.getSize(), size2 = arg2.getSize();
	if (size1!=size2) return 1;
	sum.setSize(size1);
	for(int i = 0;i<size1;i++){
		int s = arg1.getMember(i)+arg2.getMember(i);
		sum.setMember(i,s);
	}
	return 0;
}

int vektorDif(vektor& arg1, vektor& arg2,vektor& sum){
	int size1 = arg1.getSize(), size2 = arg2.getSize();
	if (size1!=size2) return 1;
	sum.setSize(size1);
	for(int i = 0;i<size1;i++){
		int s = arg1.getMember(i)-arg2.getMember(i);
		sum.setMember(i,s);
	}
	return 0;
}

int vektorMult(vektor& arg1, vektor& arg2,vektor& sum){
	int size1 = arg1.getSize(), size2 = arg2.getSize();
	if (size1!=size2) return 1;
	sum.setSize(size1);
	for(int i = 0;i<size1;i++){
		int s = arg1.getMember(i)*arg2.getMember(i);
		sum.setMember(i,s);
	}
	return 0;
}

bool operator == (vektor& a, vektor& b){
	bool mark = 1;
	if(a.getSize()!=b.getSize()) mark = 0;
	else{
		for(int i = 0;i<a.getSize();i++){
		if(a.getMember(i)!=b.getMember(i)) mark = 0;
		}
	}
	return mark;
}

bool operator > (vektor& a, vektor& b){
	bool mark = 1;
	if(a.getSize()<b.getSize()) mark = 0;
	else{
		for(int i = 0;i<a.getSize();i++){
		if(a.getMember(i)<b.getMember(i)) mark = 0;
		}
	}
	return mark;
}

bool operator < (vektor& a, vektor& b){
	bool mark = 1;
	if(a.getSize()>b.getSize()) mark = 0;
	else{
		for(int i = 0;i<a.getSize();i++){
		if(a.getMember(i)>b.getMember(i)) mark = 0;
		}
	}
	return mark;
}

int vektor::getObjNum(){
	return vektor::ObjNum;
}

int vektor::ObjNum = 0;
