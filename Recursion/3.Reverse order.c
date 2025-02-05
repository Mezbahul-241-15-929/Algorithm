#include<stdio.h>

void reverse(int i,int n,int *a)
{
    if(i<n)
    {
        reverse(i+1,n,a);
        printf("%d ",a[i]);
    }
}

int main()
{
    int n=5;
    int a[]={234,22,55,67,22};
    reverse(0,n,a);
}
