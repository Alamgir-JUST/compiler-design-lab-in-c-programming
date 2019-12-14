#include<stdio.h>
/*
    Md. Alamgir Hossain
    Lecturer, Prime University
*/
int main()
{
    int n, i, j, cnt, v;
    int arr[100];

    printf("Enter how many number: ");
    scanf("%d", &n);

    printf("Enter array numbers: ");
    for(i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        v = arr[i];
        if(v == 0)
        {
            continue;
        }

        cnt = 0;
        for(j=0; j<n; j++)
        {
            if(v == arr[j])
            {
                cnt++;
                arr[j] = 0;
            }
        }
        printf("%d is %d times\n", v, cnt);
    }

    return 0;
}

