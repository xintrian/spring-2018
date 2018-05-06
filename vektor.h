#include <iostream>

class vektor {
	private:
		float* member;
		int count;
		int		id;
		bool	err;
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
				
};

vektor::vektor(){
	count = 1;
	member = new float [count];
	member[0] = 0;
	err = 0;
}

vektor::vektor(int num){
	count = num;
	member = new float [count];
	for(int i = 0; i<count; i++){
		member[i] = i;
	}
	err = 0;
}

vektor::vektor(int num,float mem){
	count = num;
	member = new float [count];
	for (int i = 0;i<count;i++) member[i] = mem;
	err = 0;
}

vektor::~vektor(){
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
	if (num<count) member[num-1]=mem;
	else{
		err=1;
		}
}
