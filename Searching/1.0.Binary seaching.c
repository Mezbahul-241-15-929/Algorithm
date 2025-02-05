#include<stdio.h>
int main()
{
    int n,key;
    printf("Enter array size:");
    scanf("%d",&n);
    int a[n],count=0;
    int left=0;
    int right=n-1;
    for(int i=0;i<n;i++)
    {
        printf("Enter index number a[%d]:",i);
        scanf("%d",&a[i]);
    }

    printf("Enter a number to find:");
    scanf("%d",&key);
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(a[mid]==key)
        {
            printf("Found\n");
            printf("Index: %d\n",mid);
            printf("Position: %d",mid+1);
            count++;
            break;

        }
        else if(a[mid]<key)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }

    if(count==0)
    {
        printf("Not Found");
    }

}
