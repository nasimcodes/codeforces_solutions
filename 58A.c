#include <stdio.h>
#include<string.h>
int main() {
    char s[100],t[]="hello";
    int j=0;
    scanf("%s",s);
    int len=strlen(s);
    for(int i=0;i<len;i++){
        if(s[i]==t[j]){
            j++;
        }
        if(j==5){
            break;
        }
    }
    printf("%s",(j==5)?"YES":"NO");
    return 0;
}
