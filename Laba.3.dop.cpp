#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// Enter two numbers, calculate the NOD of their factorials.
int factorial(int f) {
	return ((f < 2) ? 1 : f * factorial(f - 1));
}
int main() {
	int a = 0;
	int b = 0;

	printf("Enter a:");
	int j = scanf("%d", &a);
	char f = getchar();
	if (j != 1 || f != '\n') {
		return 9;
	}
	printf("Enter b:");
	int i = scanf("%d", &b);
	char s = getchar();
	if (i != 1 || s != '\n') {
		return 9;
	}
	if ((a < 0) || (b < 0)) {
		printf("error:");
		return 9;
	}
	if (a > b) {
		printf("nod = %d", factorial(b));
	}
	if (b > a) {
		printf("nod = %d", factorial(a));
	}
	if (a == b) {
		printf("nod = %d", factorial(a));
	}
	return(('a' <= a && a <= 'z') || ('A' <= a && a <= 'Z'));
	return(('b' <= b && b <= 'z') || ('A' <= b && b <= 'Z'));
	return 0;
}

