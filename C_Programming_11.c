#include <stdio.h>
int main()
{
    char str[51];
    int a[50], i;
    printf("Enter a number: ");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++)
        a[i] = str[i] - 48;
    for(i = 0; str[i] != '\0'; i++)
        printf("%d ", a[i]);
}
