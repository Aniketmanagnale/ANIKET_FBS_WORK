#include<stdio.h>
int demo(int, int);
int main() {
	int num=12345;
	int d=4,res;

	res=demo(num,d);
	if(res==0)
		printf(" The digit found");
}


int res(int num,int d) {
	while(num>0) {
		int rem=num%10;
		if(rem==d)
			return 1;
		num=num/10;
	}
}

