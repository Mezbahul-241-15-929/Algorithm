#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0; i<n; i++)
    {
        sum+=a[i];
    }
    if(sum==0) printf("EASY");
    else printf("HARD");
    return 0;
}

