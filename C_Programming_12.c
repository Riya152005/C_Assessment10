#include <stdio.h>
int main()
{
    int a[50], n, i;
    char str[51];
    printf("Enter number of digits: ");
    scanf("%d", &n);
    printf("Enter digits:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < n; i++)
        str[i] = a[i] + '0';
    str[i] = '\0';
    printf("%s", str);
}
