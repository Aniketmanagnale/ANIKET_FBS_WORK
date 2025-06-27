int main()
{
	int arr[5];
	int brr[5];
	
	for(int i=0;i<5;i++)
	{
		printf(" \n Enter number %d:",i+1);
		scanf("%d",&arr[i]);
		
	}
		for(int i=0;i<5;i++)
	{
		printf(" \n Enter number :");
		printf("%d",arr[i]);
		
	}
	
	printf(" \n Reverse");
	
		
		int res;
	for(int i=0;i<5;i++)
	{   int num=arr[i];
	
		 res=0;
		while(num>0)
		{   	
			int r1=num%10;
			res=res*10+r1;
			num=num/10;	
			brr[i]=res;		
	}

}	


 for(int j=0;j<5;j++)
		 {
		 	printf("\n %d ",brr[j]);
		 }
		
	
}

