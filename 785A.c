#include<stdio.h>

int main(){
    int n,count=0;
    scanf("%d",&n);
    while(n--){
        char s[15];
        scanf("%s",s);
        if(s[0]=='T')count+=4;
        if(s[0]=='C')count+=6;
        if(s[0]=='O')count+=8;
        if(s[0]=='D')count+=12;
        if(s[0]=='I')count+=20;   
    }
    printf("%d\n",count);
}
