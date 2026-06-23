#include <stdio.h>
int main()
{
    char s[51];
    int i, valid = 1;
    printf("Enter a number: ");
    scanf("%s", s);
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] < '0' || s[i] > '9')
        {
            valid = 0;
        }
    }
    if(valid == 1 && i <= 50)
    {
        printf("Valid number");
    }
    else
    {
        printf("Invalid number");
    }
}
