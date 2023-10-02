/*WAP to create class name as Circle with method 
void setRadius(float radius) and we have two child classes name as Area and Cirm
and Area class contain method name as float getArea() and Cirm class contain method name as float getCirm() and getArea() return area of circle and getCirm() return cirm of circle
*/
#include<iostream>
using namespace std;
class circkle{
	protected:
		float radious;
		public:
			void setdata(float radious)
			{
				this->radious=radious;
			}
};
class area:public circkle
{
	public:
		float getarea()
		{
			return radious*radious;
		}
};
class cirm:public circkle
{
	public:
		float getcirm()
		{
			return 2*3.14*radious;
		}
};
int main()
{
	float radious;
	cout<<"Enter a radious";
	cin>>radious;
	area a1;
	a1.setdata(radious);
	float result=a1.getarea();
	cout<<"Area is "<<result;
	cout<<"\n";
	cirm c1;
	c1.setdata(radious);
     result=c1.getcirm();
	cout<<"Cirm is "<<result;
}