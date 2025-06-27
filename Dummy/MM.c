#include<stdio.h>
void demo(int, int);
int main() {
	int num=12345;
	int d=1,res;

	demo(num,d);
	//if(res==1)

}


void demo(int num,int d) {
	while(num>0) {
		int rem=num%10;
		if(rem==d) {

			printf(" The digit found");
			num=num/10;
		}

	}
}
	//printf("not");






