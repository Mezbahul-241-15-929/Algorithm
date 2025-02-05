#include<stdio.h>
int fact(int n)
{
    if(n==1)
        return 1;
    return n*fact(n-1);
    //n=5
    //5*fact(5-1)=5*fact(4)  //5*(4*3*2*1)=120
    //n=4
    //4*fact(4-1)=4*fact(3)  //4*(3*2*1)=24
    //n=3
    //3*fact(3-1)=3*fact(2)  //3*(2*1)=3
    //n=2
    //2*fact(2-1)=2*fact(1)  //2*1)=1
}

int main()
{
    int i,f,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    f=fact(n); //if n=5: f=120
    printf("Factorial= %d",f);
}
