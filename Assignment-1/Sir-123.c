void main()
{
	
	int no=123;
	int r1,r2,r3,q;
	
	r1=no%10;
	q=no/10;
	r2=q%10;
	r3=q/10;
	
	int res=r1+r2+r3;
	printf(" %d",res);
}