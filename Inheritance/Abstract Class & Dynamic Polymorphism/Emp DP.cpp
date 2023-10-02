#include<iostream>
using namespace std;
class Employee{
	public:
    virtual void skill()=0;
    void qualification()
	{  cout<<"Minimum Degree Should be completed";
	}
};
class Developer:public Employee{
	public:
		void skill(){
			cout<<"Candidate should have good coding skill\n";
		}
	 
	};
int main(){
   Employee *emp;//
   Developer d;
   emp=&d; //store child class object 
   emp->skill();
    
	return 0;
}
