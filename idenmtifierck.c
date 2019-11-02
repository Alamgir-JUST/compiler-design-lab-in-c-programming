#include<stdio.h>
/// C program to check an identifier is valid or not
int main()
{
    char a[100];
    int flag, i = 1;
    printf("Enter an identifier: ");
    gets(a);
    if(isalpha(a[0]) || a[0] == '_')
    {
        flag=1;
    }
    else
    {
        printf("Not a valid identifier\n");
    }

    while(a[i]!='\0')
    {
        if(!isdigit(a[i]) && !isalpha(a[i]) && a[i] != '_')
        {
            flag=0;
            break;
        }
        i++;
    }
    if(flag==1)
    {
        printf("Valid identifier\n");
    }
    return 0;
}
