#include<stdio.h>
#include<algorithm>
using namespace std;

int binarysearch(int arr[],int size,int target){
    int left=0,right=size-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]<target){
            left=mid+1;
        }
        if(arr[mid]>target){
            right=mid-1;
        }
        
    }
    return -1;
}

int main(){
    int arr[]={2,4,5,7,9,13,45,68,34,23,68,13,67,34};
    int size=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+size);
    int target=23;
    int result=binarysearch(arr,size,target);
    printf("Your array is: ");
    for(int i=0;i<size;i++){
        printf("%d, ",arr[i]);
    }
    if(result!=-1){
    printf("\nThe position of %d is %d\n",target,result);
    }
    else{
        printf("\nThe element %d is not in this array\n",target);
    }
}
