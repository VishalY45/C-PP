#include<iostream>
using namespace std;
class Sport
{  protected:
	   int smarks;
   public :
   void setSportMarks(int marks){
   	  smarks=marks;
   }	
};
class Acadamic
{   protected:
	   int amark;
	 public:
	void setAcadamicMarks(int amarks){
		amark=amarks;
	}
};
class Result:public Sport,public Acadamic{
	public:
		int getResult(){
			return amark+smarks;
		}
};
int main(){
	
	Result r;
	r.setSportMarks(15);
	r.setAcadamicMarks(70);
	int result = r.getResult();
	cout<<"\nTotal Marks is "<<result<<"\n";
	return 0;
}
