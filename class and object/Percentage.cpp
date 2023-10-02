#include<iostream>
using namespace std;
class per
{
	int s1,s2,s3,s4,s5,s6;
	public:
		void setvalue(int m1,int m2,int m3,int m4,int m5,int m6)
		{
			s1=m1;
			s2=m2;
			s3=m3;
			s4=m4;
			s5=m5;
			s6=m6;
		}
		int getper()
		{
			int agg=s1+s2+s3+s4+s5+s6;
			int p=agg/6;
			return p;
		}
};
int main()
{
	int s1,s2,s3,s4,s5,s6;
	cout<<"Entr a no\n";
	cin>>s1>>s2>>s3>>s4>>s5>>s6;
	per p1;
	p1.setvalue(s1,s2,s3,s4,s5,s6);
	int result=p1.getper();
	cout<<"Per is"<<result;
}