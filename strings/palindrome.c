#include<stdio.h>
#include<string.h>

int len;
void palin(char *s){
   len = strlen(s);
   
    for(int j=0;j<len/2;j++){
        if(s[j]!=s[len-1-j])
           {
            printf("not palindrome");
            return;
               
           }
        
    }
        printf("palindrome");
}




int main(){
    char s[] ="maaam";
    palin(s);
    return 0;
}