#include <stdio.h>
#include <string.h>

int main() {

    char s[105];
    scanf("%s",s);
    int freq[26]={0};
    for(int i=0;s[i]!='\0';i++){
        int index=s[i]-'a';
        freq[index]=1;
    }
    int count=0;
    for(int i=0;i<26;i++){
        if(freq[i]>0){
            count++;
        }
    }
    if(count%2!=0){
        printf("IGNORE HIM!\n");
    }
    else{
        printf("CHAT WITH HER!\n");
    }

    return 0;
}