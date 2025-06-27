int finddigit(int,int);
#include<stdio.h>
int main()
{
	int no=123456;
	int dig=3;
	 int res=finddigit(no,dig);
	if(res==1)
	printf(" Digit found %d",dig);
	else
	printf(" NOt found");
}
int finddigit( int no,int dig)
{    
	if(1)
	{   
		while(no>0)
		{
			int rem=no%10;
			if(rem==dig)
			return 1;
			no=no/10;
		}
	}
	else
      return 0;
	
}