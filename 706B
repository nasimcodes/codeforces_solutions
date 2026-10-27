#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    sort(x,x+n);
    int q,m;
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        scanf("%d",&m);
        int count=upper_bound(x,x+n,m)-x;
        printf("%d\n",count);
    }
return 0;    
}
