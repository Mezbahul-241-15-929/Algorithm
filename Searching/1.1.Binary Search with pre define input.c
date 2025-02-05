#include<stdio.h>
int main()
{
    int count=0;
    int a[5]={2,23,55,67,100};
    int key=22;
    int left=0;
    int right=4;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(a[mid]==key)
        {
            printf("Found");
            count++;
            break;
        }
        else if(a[mid]>key)
        {
            right=mid-1;
        }
        else if(a[mid]<key)
        {
            left=mid+1;
        }
    }
    if(count==0) printf("Not found");
}
