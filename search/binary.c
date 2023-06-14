
#include <stdio.h>

void binary(int *array,int key,int start,int end){
    
    int mid = (start+end)/2;
    
    if(key==array[mid]){
        printf("%d is at %d",array[mid],mid+1);
        return;
    }
    else if(key>array[mid]){
        return binary(array,key,mid+1,end);
    }
    else if(key<array[mid]){
        return binary(array,key,start,mid-1);
    }
}


int main()
{
    
    int array[] = {3,5,6,4,2,1};
    int key=3;
    int n = sizeof(array)/sizeof(array[0]);
    int start=0;
    int end=n-1;
    binary(array,key,start,end);

    return 0;
}
