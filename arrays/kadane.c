#include<stdio.h>


int kadane(int arr[],int n){
    int maxsum=0,currentsum=0;
    for(int i=0;i<n;i++){
        currentsum += arr[i] ;
        if(currentsum>maxsum){
            maxsum=currentsum;
        }
        if(currentsum<0){
            currentsum=0;
        }
    }
        return maxsum;
}




int main(){
    int arr[] ={1,-2,-4,2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d",kadane(arr,n));
}