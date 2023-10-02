/*total_amount=(number_of_years*loan_amount)+(number_of_years*loan_amount*(interest_rate/100.00));
	monthly_amount=total_amount/(number_of_years*12);
*/
/*Write a program to create class name as Bank with two methods 
void setLoanAmount(int loanAmount,int intRate,int duration)
int getEmi() and you have to create following child classes name as 
HomeLoan, CarLoan and you have to override getEmi() method in HomeLoan and CarLoan class 
and return the monthly EMI and in Bank class you can define getEmi () without  logic just return 0
*/
#include<iostream>
#include<math.h>
using namespace std;
class bank
{
	protected:
		int loanamount,dur;
		float rate;
		public:
			void setamount(int a,float rate,int dur)
			{
				loanamount=a;
				this->rate=rate;
				this->dur=dur;
			}
			virtual int getemi()=0;			
};
class carloan:public bank
{
	public:
		int getemi()
		{
	     rate=(rate)/12/100;
		int emi = (loanamount * rate) / (1 - pow(1 + rate, -dur));
		return emi;
		}
		
		
};
class homeloan:public bank
{
	public:
		int getemi()
		{   
		 rate=(rate)/12/100;
		int emi = (loanamount * rate) / (1 - pow(1 + rate, -dur));
			return emi;
		}	
};
int main()
{
	int loanamount,dur;
	float rate;
	cout<<"Enter a loanamount rate and duration"<<endl;
	cin>>loanamount>>rate>>dur;
	homeloan h1;
	h1.setamount(loanamount,rate,dur);
	float result=h1.getemi();
	cout<<"\n"<<"Mothly Paid Amount Of Home loan:="<<result;
	carloan c1;
	c1.setamount(loanamount,rate,dur);
	result=c1.getemi();
	cout<<"\n"<<"Mothly Paid Amount of Car Loan:="<<result;
	
}