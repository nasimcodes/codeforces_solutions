    #include <stdio.h>
     
    int main() {
        int n,a,b,current=0,max_cap=0;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d %d",&a,&b);
            current=current-a+b;
            if(current>max_cap){
                max_cap=current;
            }
        }
        
        printf("%d",max_cap);
        
        return 0;
    }
