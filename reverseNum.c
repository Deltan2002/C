#include<stdio.h>

int main(){
    int num,rem,rev=0;
    printf("Enter a number\n");
    scanf("%d",&num);

    while(num>0){
        
        rem = num%10;
        num/=10;
        rev = rev * 10+ rem;
        
    }
    
    printf("Reversed number is: %d",rev);
}