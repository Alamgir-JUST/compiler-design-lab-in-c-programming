#include<stdio.h>
int main()
{
    char s[5];
    printf("Enter any operator: ");
    gets(s);
    switch(s[0])
    {
    case'>':
        if(s[1]=='=')
            printf("Greater than or equal\n");
            else
                printf("Greater than\n");
                break;
    case'<':
        if(s[1]=='=')
            printf("Less than or equal\n");
            else
                printf("Less than\n");
                break;
    case'=':
        if(s[1]=='=')
            printf("Equal to\n");
            else
                printf("Assignment\n");
                break;
    case'!':
        if(s[1]=='=')
            printf("Not Equal\n");
            else
                printf("Bit Not\n");
                break;
    case'&':
        if(s[1]=='&')
            printf("Logical AND\n");
            else
                printf("Bitwise AND\n");
                break;
    case'|':
        if(s[1]=='|')
            printf("Logical OR\n");
            else
                printf("Bitwise OR\n");
                break;
    case'+':
        printf("Addition\n");
        break;
    case'-':
        printf("Subtraction\n");
        break;
    case'*':
        printf("Multiplication\n");
        break;
    case'/':
        printf("Division\n");
        break;
    case'%':
        printf("Modulus\n");
        break;
    default:
        printf("Not a operator\n");
    }

    return 0;
}
