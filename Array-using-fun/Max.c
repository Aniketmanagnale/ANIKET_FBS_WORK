int main()
{
	 
	 	int arr[5];
	
	max(arr,5);
}

void max(int* arr,int range)
{
	for(int i=0;i<range;i++)
	{
		printf(" \n Enter number %d :",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<range;i++)
	{
		printf(" \n Array %d ",arr[i]);
		
	}
	int max=arr[0];
	for(int i=0;i<range;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf(" The max in Array %d",max);
}