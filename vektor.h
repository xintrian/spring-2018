#include <iostream>

class vektor {
	private:
		float* member;
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
		void getMember(int num);
		void display();
		
		
		
};
