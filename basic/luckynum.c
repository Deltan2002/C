#include <stdio.h>

int main()
{

    int n, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    rem = n % 9 ;
    if (rem == 0)
    {
        printf("9");
    }
    else printf("%d", rem);
}