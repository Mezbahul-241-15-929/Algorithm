#include<stdio.h>

int fact(int n)
{
    if(n< 1) return 1;
    return n*fact(n-1);
}

int main()
{
    int N;
    printf("Enter a number: ");
    scanf ("%d",&N);
    int f=fact(N);
    //printf("%d Factorial is %d",N,f);
    printf("%d",f);
    return 0;
}


