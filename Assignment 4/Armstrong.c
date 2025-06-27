void main(){
	int start=1,end=153;
	
	for(int i=start;i<=end;i++){
		int num=i,arm=0;
	
		int add=0;
		int r1,count=0;
		while(num>0){
			count++;
			num=num/10;
		}
		int demo=i;
		
		while(demo>0){
			r1=demo%10;
			
			int sum=1;
			for(int j=1;j<=count;j++)
			{  
			   sum=sum*r1;	
			}
			add=add+sum;
			demo=demo/10;
		}
	if(add==i)
	printf("%d\n",add);	
		
	}
}