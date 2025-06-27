int main() {
	int arr[5];
	//printf(" Enter number  :- ");
	get(arr,5);
	even(&arr,5);
	prime(&arr,5);
}
int i;
void get(int* array,int size) {
	for( i=0; i<size; i++) {
		scanf("%d",&array[i]);
	}
}
void even(int* arr,int size) {
	for(int i=0; i<size; i++) {
		if(arr[i]%2==0) {
			printf("\n Even numbers from array :-%d",arr[i]);
		}
	}

}

