void main() {
	 int start=2,end=100,n;
	 for(int i=start;i<end;i++)
	 {
	 	n=i;
	 		int flag=0;
		for(int j=2; j<n;j++) {
			if(n%j==0) 
			{
				//	printf(" Not prime%d \n",j);
				flag=1;
				//break;
			//	printf(" Not prime%d \n",flag);
			}
		}
		if(flag==0) 
		{
			printf("  Prime number %d \n",i);
		}
	}

	 }
		
	

