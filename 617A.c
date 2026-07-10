#include <stdio.h>

int main() {
   int x,n;
   scanf("%d",&x);
   printf("%d\n",(x%5==0)?(x/5):((x/5)+1));
    return 0;
}