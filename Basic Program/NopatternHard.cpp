#include<iostream>
using namespace std;
int main()
{
	int i,j,k=5,p=0,n=4;
    
	for(i=k;i>=1;i--)
	{  // p=n+1;
    //n--;
	    for(int s=1;s<i;s++)
	    {
	    	cout<<"-";
		}
		for(j=5;j>=i;j--)
		{
			if(j>=i)
			{
				//p=p+(i+1)+1;
				//p=j;
				p=p+j;
				cout<<p;
				p=p-j;
				//p=p+(i+1)+1;
			}
			
		}
		cout<<"\n";
	}
}