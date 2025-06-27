void main()
{
	int a=10,b=20;
	printf(" Before Swap %d , %d \n",a,b);
	
	swap(&a,&b);
	printf(" After swap  %d %d ",a,b);
}

void swap( int* a,int* b)
{
 int temp=*a;
	    *a=*b;
	    *b=temp;	     
}
