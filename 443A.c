#include <stdio.h>
#include <string.h>

int main() {

    char s[1005];
    fgets(s,sizeof(s),stdin);
    int freq[26]={0};
    for(int i=0;s[i]!='\0';i++){
        if (s[i] >= 'a' && s[i] <= 'z'){
        int index=s[i]-'a';
        freq[index]=1;
        }
    }
    int count=0;
    for(int i=0;i<26;i++){
        if(freq[i]>0){
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}