#include <stdio.h>

int gcd(int a, int b)
{
    if (b==0)
        return a;
    return gcd(b,a%b);

}
int main()
{
    int a,b;
    printf("Enter 2 numbers:");
    scanf("%d %d", &a,&b);
    int r=gcd(a,b);
    printf("%d",r);

    return 0;
}

