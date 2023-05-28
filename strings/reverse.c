#include<stdio.h>

void rev(char *s) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", s[j]);
    }
}

int main() {
    char s[] = "Hello";
    rev(s);
    return 0;
}
