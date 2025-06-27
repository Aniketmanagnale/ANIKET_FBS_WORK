void main()
{
	
	int s1=6,s2=10;
	int arr[s1];
	int brr[s2];
	
	int s3=s1>s2?s1:s2;
	int min=s1<s2?s1:s2;
	int crr[s3];
	
	printf("Enter arr");
	for(int i=0;i<s1;i++)
		scanf("%d",&arr[i]);
		
	printf("Enter brr");
	for(int i=0;i<s2;i++)
		scanf("%d",&brr[i]);
		
			
	for(int i=0;i<min;i++)
		crr[i]=arr[i]+brr[i];
	
//	for(int i=min;i<s3;i++)
//	{
//		if(s1>s2)
//			crr[i]=arr[i];
//		else
//			crr[i]=brr[i];
//	}
//
//	
	
	
	
	
	
	printf("\nArr=");
		for(int i=0;i<s1;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nBrr=");
		for(int i=0;i<s2;i++)
	{
		printf("%d ",brr[i]);
	}
	printf("\nCrr=");
	for(int i=0;i<s3;i++)
	{
		printf("%d ",crr[i]);
	}
}