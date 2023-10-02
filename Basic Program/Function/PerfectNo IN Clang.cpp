#include<stdio.h>
int i=1,sum=0;
int checkperfect(int no)
{
	if(i<no)
	{
		if(no%i==0)
		{
			sum=sum+i;
		}
		i++;
		checkperfect(no);
		if(no==sum)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
int main()
{
	int no;
	printf("Enter a no");
	scanf("%d",&no);
	int r=checkperfect(no);
	if(r==1)
	{
		printf("No is Perfect");
	}
	else
	{
		printf("No is not perfect");
	}
}