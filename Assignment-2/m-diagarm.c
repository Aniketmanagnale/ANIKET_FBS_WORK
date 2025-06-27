void main()
{
	int a=10,b=20;
	
	int c=a+b++;
	int x;
	while(c<=50)
	{
		
		x=b+c++;
		a=x-1;
		x--;
		c=c+10;
	}
	printf(" %d %d %d %d",a,b,c,x);
}