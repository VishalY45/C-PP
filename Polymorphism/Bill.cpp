#include<iostream>
using namespace std;
void bill(int qty,int rate)
{
	cout<<"The Bill"<<qty*rate;
}
void bill(int qty,int rate,int tax)
{
	int gstamout=(qty*rate)*tax/100;
	int total=(qty*rate)+gstamout;
	cout<<"\nThe Bill With Tax"<<total;
}
int main()
{
	int qty,rate;
	cout<<"Enter a qty and rate\n";
	cin>>qty>>rate;
	bill(qty,rate);
	bill(qty,rate,18);
}