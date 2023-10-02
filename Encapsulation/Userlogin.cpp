#include<stdio.h>
#include<iostream>
#include<string.h>
#include<unistd.h>
using namespace std;
class loginn
{
  int password;
  char username[90];
  FILE *fptr;	
  public:
  	void setdata(char username1[],int pass)
  	{
  		strcpy(username,username1);
  		password=pass;
	  }
	  void storedata()
	  {
	  	fptr=fopen("Username.txt","a");
	  	fprintf(fptr,"%s\t%d\n",username,password);
	  	cout<<"\n"<<"Data save succesfully......";
	  	fclose(fptr);
	  }
	  int validateuser(char username1[],int pass1)
	  {9
	  	int f=0;
	  	fptr=fopen("Username.txt","r");
	  	while((fscanf(fptr,"%s %d",&username,&password))!=-1)
	  	{
	  		if((strcmp(username,username1)==0)&&(password==pass1))
	  		{
	  			f=1;
	  			sleep(1);
	  			return 1;
	  			break;
			  }
			  else
			  f=0;
		}
    	
		  if(f==1)
		  return 1;
		  else
		  return -1;
		  	

	}
	  
};
int main()
{
	loginn l1;//
	int choice;
    do
    {
    	cout<<"\n"<<"1:For Storing Data";
    	cout<<"\n"<<"2:For Searching Data";
        cout<<"\n"<<"Enter a choice";
        cin>>choice;
        switch(choice)
        {
        	case 1:
        		char username1[90];
        		int pass;
	            cout<<"\n"<<"Enter a username";
	           cin>>username1;
	            cout<<"\n"<<"Enter a password";
	            cin>>pass;
	            l1.setdata(username1,pass);
	            l1.storedata();
	            break;
	            case 2:
	            {
	            	int pass1;
	            	char username1[90];
	            	cout<<"\n"<<"Enter a username And password"<<"\n";
	            	cin>>username1>>pass1;
	                 int result=l1.validateuser(username1,pass1);
	                 if(result==1)
	                 {
	                 	cout<<"User Authentication Succesfully Completed";
					 }
					 else
					 {
					    sleep(1);
					 	cout<<"User Authentication Failed";
					 }
			     }
	            	break;
	            	default:
	            		cout<<"Wrong input";
		}
    	
	}while(choice!=3);
}
	
