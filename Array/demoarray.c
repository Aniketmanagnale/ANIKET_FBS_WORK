void main() {
	int arr[20];
	int choice;
	int currindex=0;
	int exit;
	do {
		
		printf("1.To insert element\n2.To update element\n3.Search\n4.Delete\n5.Display");
		scanf("%d",&choice);

		if(choice==1) {
			printf("\nEnter the element you want to insert");
			int ele;
			scanf("%d",&ele);
			insertInArray(arr,&currindex,ele);
		
		} else if(choice==2) {
			printf("update code is executed");
		} else if(choice==3) {
			printf("Enter element you want to search");
			int ele;
			scanf("%d",&ele);
			int index=search(arr,currindex,ele);
			if(index==-1)
				printf("not found");
			else
				printf("Found at %d index",index);
		} else if(choice==4) {
			printf("Enter element you want to delete");
			int ele;
			scanf("%d",&ele);
			deleteelement(arr,&currindex,ele);
		} else if(choice==5) {
			display(arr,currindex);
		} else {
			printf("invalid choice");
		}
		printf("\nDo you want to continue 0 or 1");
		scanf("%d",&exit);
		
	} while(exit==1);

}

void insertInArray(int* arr,int* cindex,int ele)
{
	arr[*cindex]=ele;
	(*cindex)++;
}

void display(int* arr,int currindex)
{
	printf("[");
	for(int i=0;i<currindex;i++)
		printf("%d ,",arr[i]);
	printf("\b]");
}

int search(int* arr, int currindex,int ele)
{
	for(int i=0;i<currindex;i++)
	{
		if(arr[i]==ele)
			return i;
	}
	
	return -1;
}

void deleteelement(int* arr,int* ci, int ele)
{
	int index=search(arr,*ci,ele);
	if(index==-1)
		printf("element not found");
	else
		for(int i=index;i<*ci;i++)
		{
			arr[i]=arr[i+1];
		}
	   (*ci)--;
}