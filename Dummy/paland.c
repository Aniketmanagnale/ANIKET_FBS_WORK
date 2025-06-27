void main()
{ int n=121;
int j=prime(n);
printf(" %d",j);
return 0;
}

  void  prime(int num2) 
  { 
  int q1,r1,res,no=num2;
	while(num2>0)
	 {
		
			r1=num2%10;
			res=res*10+r1;
			num2=num2/10;
			
	}
	return res;
	
}
	