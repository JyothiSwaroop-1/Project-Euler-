#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
bool primeno(long n){
    long i,v=0;
    for(i=2;i<n/2;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long n; 
        scanf("%ld",&n);
        long m=n;
        long i,j,k,l;
        if(primeno(n)){
           printf("%ld\n",n); 
        }
        else if(!primeno(n)){
            for(i=2;i<n/2;i++){
                if(n%i==0){
                    bool x=primeno(n/i);
                    if(x){
                        n=n/i;
                        printf("%ld\n",n);
                        break;
                    }
                }
            }
        }
         
    }
    return 0;
}


