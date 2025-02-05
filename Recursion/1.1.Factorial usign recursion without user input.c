#include<stdio.h>
int fact(int n)
{
    if(n==1)
        return 1;
    return n*fact(n-1);
}

int main()
{
    int f;
    f=fact(4);
    printf("%d",f);
}
