/*WAP to create class name as Circle with function void setRadius(float radius)
and Rectangle with function void setLenWid(int len,int wid) and one more class name as 
Area and you have to inherit Circle and Rectangle in Area class and Area contain two methods
float getCircleArea() : this method can return area of circle
float getRectArea(): this method can return area of rectangle.
*/
#include<iostream>
using namespace std;
class circkle
{
	protected:
		float r,len,wid;
		public:
		void setradious(float r)
			{
				this->r=r;
			}
			void setlenwid(float len,float wid)
			{
				this->len=len;
				this->wid=wid;
			}
};
class circklearea:public circkle
{
	public:
		float getCircleArea()
		{
			return 3.14*r*r;
		}
};
class getRectarea:public circkle
{
	public:
		float getRectArea()
		{
			return len*wid;
		}
};
int main()
{
   float r,len,wid;
   cout<<"Enter a radious";
   cin>>r;
   circklearea c1;
   c1.setradious(r);
   float result=c1.getCircleArea();
   cout<<"\n"<<" area of circle"<<result;
   cout<<"\n"<<"ENter a len And wid";
   cin>>wid>>len;
   getRectarea g1;
   g1.setlenwid(len,wid);
   result=g1.getRectArea();
   cout<<"\n"<<"area of rectangle"<<result;
}