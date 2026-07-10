#include <stdio.h>
#include <ctype.h>

int main() {
   char s[105];
   int lower=0,upper=0;
   scanf("%s",s);
   for(int i=0;s[i]!='\0';i++){
      (s[i]>='A' && s[i]<='Z')?upper++:lower++;
   }
   
   for(int i=0;s[i]!='\0';i++){
       printf("%c",lower>=upper?tolower(s[i]):toupper(s[i]));
   }
   
    return 0;
}