void main()
{
	int start=2,end=10,sum=0;
	for(int i=start;i<=end;i++)
	{
		printf("\n");
		int n=i;
		for(int j=1;j<=10; j++)
		{
		    sum=n*j;
		    printf("\n %d x %d = %d",n,j,sum);
		}
//		printf("\n  %d",sum);
	}
	
}