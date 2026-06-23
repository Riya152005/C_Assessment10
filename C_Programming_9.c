#include <stdio.h>
int main()
{
    char str[51];
    int i;
    printf("Enter a number: ");
    scanf("%s", str);
    for(i = 0; str[i] == '0'; i++);
    printf("%s", &str[i]);
}
