void main()
{
	int a,b;
	printf("Enter two numbers :");
	scanf(" %d  %d",&a,&b);
	
	
	swap(&a,&b);
	printf(" After swap  %d %d ",a,b);
}

void swap( int* a,int* b)
{
 int temp=*a;
	    *a=*b;
	    *b=temp;	     
}
