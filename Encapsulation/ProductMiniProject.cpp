#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class product{
	int id,price;
    int Mono;
	char Pname[90],Dname[90];
	FILE *fptr;
	public:
		void setdata(char name[],char dname[],int id,int price, int Mono)
		{
			strcpy(Pname,name);
			strcpy(Dname,dname);
			this->id=id;
			this->price=price;
			this->Mono=Mono;
		}
		void storedata()
		{
			fptr=fopen("Product.txt","a");
			fprintf(fptr,"%s\t%s\t%d\t%d\t%ld\n",Pname,Dname,id,price,Mono);
		    cout<<"Data save succesfully";
		    fclose(fptr);
		}
		void view()
		{
			fptr=fopen("Product.txt","r");
			while(fscanf(fptr,"%[^0-9\t] %[^0-9\t]%d%d%d",Pname,Dname,&id,&price,&Mono)!=EOF)
			{
				cout<<Pname<<"\t"<<Dname<<"\t"<<id<<"\t"<<price<<"\t"<<Mono<<"\n";
			}
			fclose(fptr);
		}
};
int main()
{
	int choice;
	do
	{
	
		cout<<"\n"<<"1:Insert Data";
		cout<<"\n"<<"2:Viwe Product Data";
		cout<<"\n"<<"Enter a choice";
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					int id1,price1;
	                int Mono1;
	                char Pname1[90],Dname1[90];
					int size;
					cout<<"Enter a size";
					cin>>size;
					product *p1=(product*)malloc(sizeof(product)*size);
					//product p1;
					for(int i=0;i<size;i++)
					{_flushall();
					  cout<<"Enter a Product name";
					  gets(Pname1);	
					  _flushall();
					  cout<<"Enter a Deller name";
					  gets(Dname1);	
					  _flushall();
					  cout<<"Enter Product Id";
					  cin>>id1;
					  cout<<"Enter a Product price";
					  cin>>price1;
					  cout<<"\t\t"<<"Enter a Mobile No";
					  cin>>Mono1;
					  p1[i].setdata(Pname1,Dname1,id1,price1,Mono1);
					  p1[i].storedata();
					}	
				}
					break;
				
				case 2:
					product p1;
					p1.view();
					break;
		}
	}while(choice!=3);
	
}