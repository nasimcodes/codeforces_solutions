#include <stdio.h>
 
int main() {
 
    int n,k,count=0;
    scanf("%d %d",&n,&k);
    int part[n];
    for(int i=0;i<n;i++){
    scanf("%d",&part[i]);
    }
    int tar=part[k-1];
    for(int i=0;i<n;i++){
        if(part[i]>=tar && part[i]>0){
            count++;
        }
    }
  printf("%d\n",count);
    return 0;
}