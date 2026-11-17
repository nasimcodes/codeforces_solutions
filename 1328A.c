#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        int r=a%b;
        printf("%d\n",(r==0)?0:(b-r));
    }
}
