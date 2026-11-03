#include<stdio.h>

int main(){
    int n,h,a,count=0;
    scanf("%d %d",&n,&h);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        count+=(a<h)?1:2;
    }
    printf("%d\n",count);
return 0;
}
