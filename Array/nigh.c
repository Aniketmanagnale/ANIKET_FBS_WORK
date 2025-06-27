int main()
{
	int ar[5];
	for(int i=0;i<5;i++)
	{
		printf("\n Enter element ");
		scanf("%d",&ar[i]);
	}
	int s;
	printf("Enter element to search");
	scanf("%d",s);
     
     int i;
     for( i=0;i<5-1;i++)
     {
     	if(ar[i]==s)
     	{   
     
     		printf("%d",ar[s]);
		 }
	 }
	 
	
	 
}