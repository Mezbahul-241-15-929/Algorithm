#include<stdio.h>
int main()
{
    int n,key;
    printf("Enter array size:");
    scanf("%d",&n);
    int a[n],count=0;
    for(int i=0;i<n;i++)
    {
        printf("Enter index number a[%d]:",i+1);
        scanf("%d",&a[i]);
    }

    printf("Enter a number to find:");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("Found\n");
            printf("Index: %d\n",i);
            printf("Position: %d",i+1);
            count++;
        }
    }

    if(count==0)
    {
        printf("Not Found");
    }

}
