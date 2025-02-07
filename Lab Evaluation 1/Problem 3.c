#include<stdio.h>
int main()
{
    int n,even=0,odd=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else odd++;
    }
    if(even>odd)
    {
        for(int i=0; i<n; i++)
        {
            if(a[i]%2!=0)
            {
                printf("%d",i+1);
            }
        }
    }

    if(even<odd)
    {
        for(int i=0; i<n; i++)
        {
            if(a[i]%2==0)
            {
                printf("%d",i+1);
            }
        }
    }

    return 0;

}
