#include <stdio.h>

// This function gives back a number, doesn't take input
int giveNumber() {
	int a=10;
    return a; // returns 10
}

int main() {
    int x;           // make a variable to store the result
    x = giveNumber(); // call the function and store what it returns
    printf("Value is: %d\n", x);  // print the value
    return 0;
}