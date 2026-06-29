 
#include <stdio.h>
 
int main() {
    long long int n,m,a;
    scanf("%lld %lld %lld",&n,&m,&a);
    
    long long int length=(n+a-1)/a;
    long long int width=(m+a-1)/a;
    long long int total=length * width;
    printf("%lld\n",total);
 
    return 0;
}