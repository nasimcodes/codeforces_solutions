#include <stdio.h>
int main() {
   long long int k,n,w;
   scanf("%lld %lld %lld",&k,&n,&w);
   long long int total=k*((w*(w+1))/2);
   printf("%lld\n",total>n?total-n:0);
    return 0;
}