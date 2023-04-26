#include<stdio.h>

int main(){
    int num,rem,rev=0,temp;
    printf("Enter a number\n");
    scanf("%d",&num);
temp =num;
    while(num>0){
        
        rem = num%10;
        num/=10;
        rev = rev * 10+ rem;
        
    }
    if (temp==rev)
    
        printf("%d is palindrome\n",temp);
    
    else
        printf("%d is not a palindrome",temp);
    
}