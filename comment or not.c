#include<stdio.h>
#include<string.h>
int main()
{
    char com[100];

    int i, ck = 0, ln;
    printf("Enter comment: ");
    gets(com);

    ln =strlen(com);

    if(com[0] == '/')
    {
        if(com[1] == '/')
        {
            printf("It is a comment.\n");
        }
        else if(com[1] == '*')
        {
            for(i = 2; i <= ln; i++)
            {
                if(com[i] == '*' && com[i+1] == '/')
                {
                    printf("It is a comment.\n");
                    ck = 1;
                    break;
                }
                else continue;
            }
            if(ck == 0) printf("It is not a comment.\n");
        }
        else printf("It is not a comment.\n");
    }
    else printf("It is not a comment.\n");

    return 0;

}

