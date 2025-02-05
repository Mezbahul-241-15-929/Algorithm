#include<stdio.h>
int fibo(int n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    return fibo(n-1)+fibo(n-2);
    //n=5
    //fibo(4)+fibo(3)         //2+1=3
    //fibo(4)=fibo(3)+fibo(2) //fibo(4)=1+1=2
    //fibo(3)=fibo(2)+fibo(1) //fibo(3)=1+0=1
    //fibo(2)=fibo(1)+fibo(0) //fibo(2)=1
}

int main()
{
    int i,f,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    f=fibo(n); //if n=5: f=120
    printf("Fibonacci= %d",f);
}
