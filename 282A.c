 
#include <stdio.h>
int main() {
   
    int n,x=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char var[4];
        scanf("%s",var);
        if(var[1]=='+'){
            x++;
        }
        else if(var[1]=='-'){
            x--;
        }
    }
    printf("%d\n",x);
 
    return 0;
}