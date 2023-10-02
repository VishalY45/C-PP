#include<iostream>
using namespace std;
int i=1,sum=0;
class perfect{
	int no;
	public:
		void setdata(int no)
		{
			this->no=no;
		}
		void checkperfect()
		{
			if(i<=no/2)
			{
				if(no%i==0)
				{
					sum=sum+i;
				}
				i++;
				return checkperfect();
			}
			if(no==sum)
			{
				cout<<"No is Perfect";
			}
			else
			{
				cout<<"No is Not Perfect";
			}
		}
};
int main()
{
	int no;
	cout<<"Entert a no";
	cin>>no;
	perfect p1;
	p1.setdata(no);
	p1.checkperfect();
}