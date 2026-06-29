
 
#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int mat[5][5];
    int r,c;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
           scanf("%d",&mat[i-1][j-1]);
            if(mat[i-1][j-1]==1){
                r=i;
                c=j;
            }
        }
    }
    int ans=abs(r-3)+abs(c-3);
    printf("%d\n",ans);
 
    return 0;
}