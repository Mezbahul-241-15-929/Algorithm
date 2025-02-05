#include<stdio.h>
int main()
{
    int count=0;
    int a[5]={234,22,55,67,22};
    int key=22;
    for(int i=0;i<5;i++)
    {
        if(a[i]==key)
        {
            printf("Found");
            count++;
        }
    }
    if(count==0) printf("Not found");
}
