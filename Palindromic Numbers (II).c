#include<stdio.h>
int main()
{
    int n,rev,c;
    printf("Enter total case number:");
    scanf("%d",&c);
    int a[c];
    for(int i=0; i<c; i++)
    {
        printf("Enter index %d : ",i);
        scanf("%d",&a[i]);
    }

    for(int i=0; i<c; i++)
    {
        int org=a[i];
        rev=0;
        while (a[i] != 0)
        {
            rev = rev * 10 + a[i] % 10;
            a[i] /= 10;
        }

        if(org==rev)
        {
            printf("Case %d: Yes\n",i+1);
        }
        else
            printf("Case %d: No\n",i+1);
    }
}
