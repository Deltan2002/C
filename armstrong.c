#include<stdio.h>
#include<math.h>

int main(){
    int num,temp,count=0,rem,arm;
    printf("Enter a number\n");
    scanf("%d",&num);

    temp =num;
    while(num>0){

        num/=10;
        count++;
    }
    while(temp>0){
        rem =  temp%10;
        temp/=10;
        arm += pow(rem,count);
    }
    printf("%d is an armstrong number",arm);
}