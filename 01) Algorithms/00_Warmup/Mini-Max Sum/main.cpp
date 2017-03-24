
/*
	Mini-Max Sum
	https://www.hackerrank.com/challenges/mini-max-sum
*/

#include <stdio.h>


long int minimum(long int a, long int b) {
	return a <= b ? a : b;
}

long int maximum(long int a, long int b) {
	return a > b ? a : b;
}

int main() {

	long int a; 
	long int b; 
	long int c; 
	long int d;
	long int e;
	scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);

	long int sum = a + b + c + d + e;
	long int min = a;
	long int max = a;

	min = minimum(min, b);
	min = minimum(min, c);
	min = minimum(min, d);
	min = minimum(min, e);

	max = maximum(max, b);
	max = maximum(max, c);
	max = maximum(max, d);
	max = maximum(max, e);

	printf("%ld %ld\n", sum - max, sum - min);

	return 0;
}


