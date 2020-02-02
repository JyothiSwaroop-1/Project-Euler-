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
        long sum=2;
        long k=1,l=2,m=k+l;
        while(m<=n)
        {
            if(m%2==0){
                sum+=m;
            }
            k=l;
            l=m;
            m=k+l;

        }
        printf("%ld\n",sum);
    }
    return 0;
}


