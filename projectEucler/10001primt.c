#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int a[100000];
int m=0;
void findno(int n){
    int i,c,count=1,j=2;
    if(n>m){
        j=a[m];
    }
    for(int k=j;k<=10001;k++){
        c=0;
        for(i=2;i<=10001;i++){
            if(k%i==0){
                c++;
            }
            if(c>=2){
                break;
            }
        }
        if(c<=1){
                a[m]=k;
                m++;
            }
        j++;
        count++;
        
    }
}
int main(){
    int t,l,x=0; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        if(a0==0){
            findno(n);
            x=n;
            printf("%d\n",a[n]);
        }else{
            if(n<m){
                printf("%d\n",a[n]);
            }
            else{
                findno(n);
                x=n;
                printf("%d\n",a[n-1]);
            }
        }
    }
    return 0;
}


