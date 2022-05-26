#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int pali(int x){
    int n=x;
    int p = 1;
    while(n!=0){n/=10;p*=10;} 
    int r = 1;
    p /= 10;
    while(p > r){
       if((x/p)%10 != (x/r)%10){
           return false;
       }
        p/=10;r*=10;
    }
    return true;
}
int main() {
    int T; scanf("%d",&T);
    while(T--){
        int n;scanf("%d",&n);
        int m =0;
        for(int i=1;i<1000;i++){
            for(int j=1;j<1000;j++){
                if(i*j < n && pali(i*j)){
                    m = fmax(m, i*j);
                }
            }
            }
        printf("%d\n",m);
    }
    return 0;
}
