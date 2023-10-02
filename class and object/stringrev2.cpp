#include<iostream>
#include<cstring>
using namespace std;
class stre{
	char str[90];
	public:
		void setdata()
		{
			cout<<"Enter string";
			gets(str);
		}
		void show()
		{
			int len=strlen(str);
			int s=0;
			for(int i=0;i<=len;i++)
			{
				if(str[i]==' '||str[i]=='\0')
				{
					int k=i-1;
					for(int j=s;j<k;j++)
					{
						char temp=str[j];
						str[j]=str[k];
						str[k--]=temp;
					}
					s=i+1;
				}
			}
			cout<<str;
		}
};
int main()
{
	stre r;
	r.setdata();
	r.show();
}