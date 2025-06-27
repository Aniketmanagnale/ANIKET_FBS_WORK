void main()
{
	int no=53218;
	int sum=0,r1;
	int tmp=no;
	
	
	
	while(no>0)
	{
		r1=no%10;
	sum=sum+r1;	
	no=no/10;

	}
	printf(" The %d is %d digits number and addition is :- %d",tmp,r1,sum);
//	printf("%d",sum);
//	r1=no%10;
//	sum=sum+r1;
//	no=no/10;
////printf("%d",r1);
//	
//	r1=no%10;
//	sum=sum+r1;//9
//	no=no/10;
////printf("%d",r1);
//	r1=no%10;
//	sum=sum+r1;
//	no=no/10;
////printf("%d",r1);
//	r1=no%10;
//	sum=sum+r1;
//	no=no/10;
//    
//    r1=no%10;
//    sum=sum+r1;
//    no=no/10;
//	
// printf("\n %d",sum);
}