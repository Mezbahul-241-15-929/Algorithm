#include<stdio.h>
int main()
{
    int N;
    int n,k,count=0;
    printf("Enter a number:");
    scanf("%d",&N);
    for (int i=0; i<N; i++)
        scanf ("%d %d",&n, &k);
    while(1)
    {
        if(n%k==0)
        {
            n=n/k;
            count++;
        }
        else
        {
            count++;
        }

        n--;
        if(n==0)
        {
            break;
        }
    }
    printf("\nAnswer: %d",count+1);





}

