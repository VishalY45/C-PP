/*WAP to perform function overloading for Area

void area(int len,int width): this function can accept two parameter and calculate area of rectangle
void area(float radius): this function can accept single parameter and calculate area of circle.*/
#include<iostream>
using namespace std;
void area(float len,float width)
{
	float reactangle=len*width;
	cout<<"The Area of Ratngle:-"<<reactangle;
}
void area(float r)
{
	float circkle=3.14*r*r;
	cout<<"\nThe Area of circkle"<<circkle;
}
int main()
{
	float len,width,r;
	cout<<"Enter a len & width\n";
	cin>>len>>width;
	area(len,width);
	cout<<"\nEnter a radious";
	cin>>r;
	area(r);
	
}
