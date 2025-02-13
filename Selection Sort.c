#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[50];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }



    for(i=0;i<n-1;i++)
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
                int temp;

                temp=a[i];
                a[i]=a[min];
                a[min]=temp;
            }
        }
    }



    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }


    return 0;
}



