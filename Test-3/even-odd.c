void main()
{
	//int start=10,end=25;
	int x=demo(10,25);
	
		//printf(" \n Even %d",x);
	for(int i=0;i<25;i++)
	{
		printf("%d",x);
	}

}


int demo(int start,int end)
{

	for(int i=start;i<end;i++)
	{
		int num=i;
		if(i%2==0)
		{
			//printf(" \nEven numbers are %d",i);
			return i;
		}

	}
	printf("\n");
	for(int i=start;i<end;i++)
	{
		int num=i;
		if(i%2!=0)
		{
		//	printf(" \n  odd numbers are %d",i);
		return i;
		}

	}
}