void main()
{
	primeRange(1,1000);
}

void primeRange(int start,int end)
{
	for(int i=start;i<=end;i++)
	{
		int no=i;
		int flag=0;
		for(int j=2;j<no;j++)
		{
			if(no%j==0)
			{
				flag=1;
				break;
			}
		
	}
	if(flag==0)
			printf("%d ",i);

}}