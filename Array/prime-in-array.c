int main()
{
	int arr[5]={3,5,7,2,13};
	int count=0,num;
	for(int i=0;i<5;i++)
	{ 
	   num=arr[i];
	  
	   int flag=0;
		for(int j=2;j<num;j++)
	{  
		if(num%j==0)
		{
		flag=1;
			
		}
	}
		if(flag==0)
		{   count++;
			printf(" \n prime %d",num);
			
			
		}
	
	}
	printf(" \n Prime numbers in array %d",count);
	
	
}