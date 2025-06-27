void main()
{
	int a=121;
	int sum=0;
	int b=a;
	while(a>0)
	{
		int r1=a%10;
		sum=sum*10+r1;
		a=a/10;
	}
	printf("%d",sum);
}