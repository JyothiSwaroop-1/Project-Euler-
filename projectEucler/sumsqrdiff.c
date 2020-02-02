#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long n; 
        scanf("%ld",&n);
        long x=n*(n+1)/2;
        long y=(n+1)*((2*(n*n))+n)/6;
        printf("%ld\n",(x*x)-y);
    }
    return 0;
}


