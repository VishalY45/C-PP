#include<iostream>
using namespace std;
#include<string.h>
#include<string>


class login
{
	int id;
	int mobile;
	char name[90];
	FILE *fptr;
	public:
     void storedata(int id1,int mobile1,char name1[])
     {
     	id=id1;
     	mobile=mobile1;
     	strcpy(name,name1);
     	fptr=fopen("login.txt","a+");
     	fprintf(fptr,"%d\t%d\t%s\n",id,mobile,name);
     	printf("data save succesfully");
     	fclose(fptr);
	 }
	 int search(int id2,int mobile2,char name2[])
	 {
	 	int f=0;
	 	fptr=fopen("login.txt","r+");
	 	while(fscanf(fptr,"%d%d%s",&id,&mobile,&name)!=EOF)
	 	{printf("\nhello");
	 	printf("%s",name);
	 		if((id==id2)&&(mobile==mobile2)&&(strcmp(name2,name)==0))
	 		{printf("----hell---");
	 			f=1;
	 			break;
	 			
			 }
			
		 }
		 if(f==1)
		 {
		 	printf("\nflag=1\n");
		 	return 1;
		 }
		 else
		 {
		 	return-1;
		 }
		 
	 }
};
int main()
{
	login l1;
	int id1;
	int mobile1;
	char name1[90];
	cout<<"\nenter id and mobile\n";
	cin>>id1>>mobile1>>name1;
   l1.storedata(id1,mobile1,name1);
   	int id2;
	int mobile2;
	char name2[90];
		cout<<"enter id and mobile\n";
	cin>>id2>>mobile2>>name2;
	//l1.search(id2,mobile2);
	int result=l1.search(id2,mobile2,name2);
	if(result)
	{
		cout<<"data is found";
	}
	else
	{
		cout<<"data is not found";
	}
}