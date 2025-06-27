void main()
{
	int num=12345;
	int arr[5];
   while(num>0)
   {
   	int r1=num%10;
   	 	
   	 for(int i=0;i<r1;i++)
   	 {
   	 	arr[i]=r1;
		}
num=num/10;	
   }
	for(int i=0;i<5;i++)
   	 {
   	 	printf("%d",arr[i]);
		}
	
}