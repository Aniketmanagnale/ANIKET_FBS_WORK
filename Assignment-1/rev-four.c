void main()
{
	int no=1331;
	int r1,r2,r3,r4,q1,q2,q3,q4;
	
	r1=no%10;
	q1=no/10;
	r2=q1%10;
	q2=q1/10;
	r3=q2%10;
	q3=q2/10;
	printf(" %d %d %d %d ",r1,r2,r3,q3);
	
	int rev=r1*1000+r2*100+r3*10+q3;
	printf("%d",rev);
}