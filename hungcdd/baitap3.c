#include<stdio.h>

int main() {
	const double g = 9.8;
	int x;
	printf("Enter value of x");
	scanf("%d",&x);
	double y = -1.0/2 * g * (x * x) + x;
	printf("%.2f\n", y);
	if(y > 50 || y < 30 ) {
		printf("The bullet got out");
	}
	if (y <= 50 && y >= 30) {
		printf("The bullet got a goal");
	}
}