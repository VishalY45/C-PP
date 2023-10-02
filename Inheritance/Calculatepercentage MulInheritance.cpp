#include<iostream>
using namespace std;
class Ten{
	protected:
		int smarks;
		public:
			void setdataa(int m)
			{
			smarks=m;
			}
};
class Twelth{
	protected:
		int tmarks;
		public:
			void setdata(int m)
			{
			tmarks=m;
			}
};
class per:public Ten,public Twelth{
	public:
		int perce()
		{
			return smarks+tmarks;
		}
};
int main()
{
   per p1;
   p1.setdataa(22);
   p1.setdata(44);
   int r=p1.perce();
   cout<<r;
}