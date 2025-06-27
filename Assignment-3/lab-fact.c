void main()
{
 int i;
	for( int j=1;j<20;j++)
	{
	
	int num=j;
	int fact=1;
	
	for(i=1;i<=j;i++)
	{
			
		fact=fact*i;
		
	}
	printf(" The factorial of :%d: is %d: \n",i,fact);
}

}