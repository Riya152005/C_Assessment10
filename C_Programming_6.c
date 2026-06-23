#include <stdio.h>
int main()
{
    char s[20];
    int i;
    printf("Enter an integer: ");
    scanf("%s", s);
    for(i = 0; s[i] != '\0'; i++)
    {
        printf("%c\n", s[i]);
    }
}
