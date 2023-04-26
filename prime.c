#include <stdio.h>

int main()
{

    int prime, n;

    printf("Enter the range to print prime numbers\n");
    scanf("%d", &n);
    if (n == 0 || n == 1)
        return n;
    else
    {

        for (int i = 2; i <= n; i++)
        
        {
            if(i%2 != 0)
            printf("%d",i);
        }
    }
}