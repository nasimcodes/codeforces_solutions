 
#include <stdio.h>
int main() {
   
    int n,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x,y,z,sum;
        scanf("%d %d %d",&x,&y,&z);
        sum=x+y+z;
        if(sum>=2){
            count++;
        }
    }
    printf("%d\n",count);
 
    return 0;
}