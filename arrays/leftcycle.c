#include<stdio.h>



void leftCycle(int arr[],int n){
    int i,x=arr[n-1];
    
    for (i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }arr[0]=x;
}



int main(){
    int i;
    int arr[]={9, 8, 7, 6, 4,5,7,8,10};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    leftCycle(arr,n);
    
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
    
    
}