///Write a C program to recognize string under 'a*b+'.
///a* denotes language L = {? , a, aa, aaa, ….}
///b+ represents language L = {b, bb, bbb, ….}.
#include<stdio.h>
#include<string.h>
/*
    Md. Alamgir Hossain
    Lecturer, Prime University
*/
int main()
{
    char ch[100];
    int ln, ck=1, i, b_ck = 0;
    gets(ch);
    ln = strlen(ch);
    for(i = 0; i<ln; i++)
    {
        if(ch[i] == 'a')
        {
            b_ck++;
        }
    }

    for(i = 0; i<ln-1; i++)
    {
        if(ch[i] == 'b' && ch[i+1] != 'b')
        {
            ck = 0;
            break;
        }
        if(ch[i] != 'a' && ch[i] != 'b')
        {
            ck = 0;
            break;
        }

    }
    if(b_ck == ln)
    {
        ck = 0;
    }
    if(ck == 1)
    {
        printf("Accepted under a*b+\n");
    }
    else
    {
        printf("Not Accepted under a*b+\n");
    }
    return 0;
}

/*
Input: aaaaaaaabbbbbbbbbbb
Output: Accepted under a*b+
Input: aaaabbbbbbbbbbaaaaaaa
Output:Not Accepted under a*b+

*/
