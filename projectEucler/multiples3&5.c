#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    unsigned long long n,T;
    scanf("%lld",&T);
    for(unsigned long long a0 = 0; a0 < T; a0++){ 
        scanf("%ldd",&n);
        n=n-1;
        int x=n/3;
        int y=n/5;
        int z=n/15;
        int h=(3*(x*(x+1)/2))+(5*(y*(y+1)/2))-(15*(z*(z+1)/2));
        printf("%lld\n",h);
    }
    return 0;
}


