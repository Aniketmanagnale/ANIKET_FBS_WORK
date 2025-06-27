#include<stdio.h>
int  main() {
	int s,e;
	int sum=0;

	printf(" Enter the Starting number :");
	scanf("%d",&s);
	printf(" Enter the Ending number :");

	scanf("%d",&e);

	if(s<e) {

		while(s<=e) {

			sum=sum+s;
			s++;
		}
		printf(" The Sum is %d",sum);
	}

	else {
		printf(" Add not performed");
	}}