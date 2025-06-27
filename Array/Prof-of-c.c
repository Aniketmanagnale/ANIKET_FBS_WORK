#include<stdio.h>
int main()
{
	int arr[5];
	int brr[10];
	
	for(int i=0;i<5;i++)
	  {printf(" Enter Elements  %d:",i+1);
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<5;j++)
	{
		printf(" Element is :%d  \n",arr[j]);
	}

 printf(" Enter elements of Array Two \n");

for(int p=0;p<10;p++)
  {
  	printf("Enter Element %d :",p+1);
  	scanf("%d",&brr[p]);
  }

for(int x=0;x<10;x++)
{
	printf(" Element is : %d \n",brr[x]);
}


printf(" Enter elements of Third Array  \n");
int crr[3];
	
	for(int i=0;i<3;i++)
	  {printf(" Enter Elements  %d:",i+1);
		scanf("%d",&crr[i]);
	}
	for(int j=0;j<3;j++)
	{
		printf(" Element is %d : \n",crr[j]);
	}

 
}