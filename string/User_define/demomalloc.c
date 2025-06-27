#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int* reverseArray(int* ,int );
void main()
{
	int arr[]={1,2,3,4,5,6,7,5,345,5,4,5,3,343,2,234,3,2,3,1,23,3,23,442,32,3,35,23,3,324,4,5,38,9,10};
	int size=sizeof(arr)/4;
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
		
	printf("\n");
	int* ptr=reverseArray(arr,size);
	
	for(int i=0;i<size;i++)
		printf("%d ",ptr[i]);
}
int* reverseArray(int* arr,int size)
{
	//int x[size];
	int* x=malloc(sizeof(int)*size);
	for(int i=0;i<size;i++)
		{
			x[i]=arr[size-1-i];
		}
	return x;
}