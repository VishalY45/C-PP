#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class Product
{
	private:
		int id,purPrice,salePrice;
		char name[90],cName[90],dName[90];
		FILE *fptr;
		
	public:
		void validateLogin(char username[])
		{
			fptr=fopen("D:\\Cpp Code\\class and object\\Encapsulation\\product.txt","r");
			if(strcmp(username,"owner")==0 )
			{  cout<<"\ni am in if\n";
				while(fscanf(fptr,"%d%s%s%s%d%d",&id,&name,&cName,&dName,&purPrice,&salePrice) !=EOF)
				{
					printf("%d\t%s\t%s\t%s\t%d\t%d\n",id,name,cName,dName,purPrice,salePrice);	
				}	
			}	
			else if(strcmp(username,"employee")==0)
			{
				
				while(fscanf(fptr,"%d %s %s %s %d %d",&id,&name,&cName,&dName,&purPrice,&salePrice)!=-1)
				{
					printf("%d\t%s\t%d",id,name,salePrice);
				}
			}
			else
			{
				cout<<"\nInvalid Username Or Password\n";
			}
		}	
};

int main()
{
	Product p;
	char username[90];
	cout<<"\nEnter Login Type\n";
	cin>>username;
	p.validateLogin(username);
	return 0;
	
}