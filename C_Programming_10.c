#include <stdio.h>
int main()
{
    char num[51];
    int i;
    printf("Enter a number: ");
    scanf("%s", num);
    for(i = 0; num[i] != '\0'; i++);
    for(i = i - 1; i >= 0; i--)
    {
        printf("%c", num[i]);
    }
}
