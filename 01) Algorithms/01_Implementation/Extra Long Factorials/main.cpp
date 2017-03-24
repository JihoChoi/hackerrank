
/*
	Extra Long Factorials
	https://www.hackerrank.com/challenges/extra-long-factorials
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d", &n);

    long long int fact = 1;

    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }

    printf("%lld\n", fact);

    return 0;
}

