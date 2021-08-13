#include<stdio.h>
int main() {
	int a, b, c;
	printf("Enter first number : ");
	scanf_s("%d", &a);
	printf("Enter second number : ");
	scanf_s("%d", &b);
	printf("Enter third number : ");
	scanf_s("%d", &c);
	printf("The largest number is : ");
	if ((a-b)>=1 && (a-c)>=1) {
		printf("%d", a);
	}
	else if ((b - a) >= 1 && (b - c) >= 1) {
		printf("%d", b);
	}
	else if ((c - a) >= 1 && (c - b) >= 1) {
		printf("%d", c);
	}
	else if (a==b && a>c ){ 
		printf("%d",a ); 
	}
	else if (a==b && a<c ){
		printf("%d", c);
	}
	else if (a==c && a>b ){
		printf("%d", a);
	}
	else if (a == c && a<b) {
		printf("%d", b);
	}
	else if (b == c && b > a) {
		printf("%d", b);
	}
	else if (b == c && b < a) {
		printf("%d", a);
	}
	else { printf("%d",a); }
	return 0;
}