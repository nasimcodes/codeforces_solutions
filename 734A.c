#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    int n,anton=0,danik=0;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    for(int i=0;s[i]!=0;i++){
        if(s[i]=='A'){
            anton++;
        }
        else if(s[i]=='D'){
            danik++;
        }
    }
    if(anton>danik){
        printf("Anton\n");
    }
    else if(anton<danik){
        printf("Danik\n");
    }
    else if(anton==danik){
        printf("Friendship\n");
    }

    return 0;
}