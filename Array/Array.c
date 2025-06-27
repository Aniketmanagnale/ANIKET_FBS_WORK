void main()
{
	int a[5],sum=0;
	
	printf(" Enter elements :");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j=0;j<5;j++)
	{
		printf(" \n The elements are %d ",a[j]);
		sum=sum+a[j];
		
	}
	printf("\n The sum is %d",sum);
	
}