int main()
{
	int arr[5];
		insert(arr,5);
		printf(" \n2 Array");
	int brr[5];
	insert(brr,5);
	int crr[5];
	
//	display(arr,5);
	sum(crr ,brr,arr,5);
	
}

	void insert(int* arr,int ele) 
	{
		for(int i=0;i<ele;i++)
		{ 
		   printf(" \n Enter ele %d :  ",i+1);
		   scanf("%d",&arr[i]);
			
		}
	
}


void display( int* arr,int ele) {
	for(int i=0; i<ele; i++) {
		printf("\n The array %d",arr[i]);
	}
	
}

void sum(int* crr ,int* brr,int* arr,int ele) 
	{
		for(int i=0;i<ele;i++)
		{ 
		   crr[i]=brr[i]+arr[i];
		   
		   printf(" \n After Addition :%d",crr[i]);
			
		}
	
}
