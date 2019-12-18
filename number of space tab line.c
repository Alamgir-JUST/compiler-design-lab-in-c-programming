#include<stdio.h>
#include<string.h>
/*
    Write a c program to calculate the number of spaces, tabs and line.
*/
int main()
{
    char str[100], ch;
    int i=0, s=0, l = 0, t=0;
    printf("Enter the string and press ESC for stop entering: \n");
    ch = getche();
    while(ch != 27)
    {
        str[i] = ch;
        if(str[i] == ' ')
        {
            s++;
        }
        /*The ASCII character code 13 is called a Carriage Return
        or CR. On windows based computers files are typically
        delimited with a Carriage Return Line Feed or CRLF. So that
        is a Chr(13) followed by a Chr(10) that compose a proper CRLF.*/

        if(str[i] == 13)
        {
            l++;
            printf("\n");
        }
        if(str[i] == 9) ///ASCII value of tab is 9
        {
            t++;
        }
        i++;
        ch = getche();
    }
    printf("\nSpace is: %d\n", s);
    printf("Line is: %d\n", l);
    printf("Tab is: %d\n", t);

    return 0;
}

/*
Enter the string and press ESC for stop entering:
Md. Alamgir Hossain
Lecturer        Prime University

Space is: 3
Line is: 2
Tab is: 1

*/
