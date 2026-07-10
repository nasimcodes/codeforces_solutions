#include <stdio.h>
#include <string.h>

int main() {
    char s[105];
    scanf("%s",s);
    
    int len=strlen(s);
    int arr[105];
    int n=0;
    
    for(int i=0;i<len;i+=2){
        arr[n]=s[i]-'0';
        n++;
    }
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

for(int i=0;i<n;i++){
    printf("%d",arr[i]);
    if(i<n-1){
        printf("+");
    }
}

    return 0;
}