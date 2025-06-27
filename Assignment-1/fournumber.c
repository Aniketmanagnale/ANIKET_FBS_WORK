void main()
{
	// al the comments are for understanding
	int no=2345;
	
	int r1,r2,r3,r4,q1,q2,q3;
	
	r1=no%10; // unit 5
	q1=no/10; // 234
	r2=q1%10; // 4 unit
	q2=q1/10; //23 
	r3=q2%10; //3 unit 
	q3=q2/10;//2 
	int res=r1+r2+r3+q3;
	printf(" ADD of this number %d",res);
	
}