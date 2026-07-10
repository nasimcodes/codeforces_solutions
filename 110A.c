#include <stdio.h>

int main() {
   char n[100],count=0;
   scanf("%s",n);
   for(int i=0;n[i]!='\0';i++){
       n[i]=='4' || n[i]=='7' ? count++:0;
    }
    printf("%s\n",(count==7 || count==4)?"YES":"NO");
   
    return 0;
}