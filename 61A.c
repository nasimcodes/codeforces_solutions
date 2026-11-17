#include<stdio.h>

int main(){
    char a[1000],b[1000];
    scanf("%s %s",a,b);
    for(int i=0;a[i]!='\0';i++){
        a[i]=(a[i]==b[i])?'0':'1';
    }
    printf("%s",a);
}
