#include<stdio.h>
int main()
{
    int N;
    long long int n,k;
    int count=0;
    printf("Enter a number:");
    scanf("%d",&N);
    for (int i=0; i<N; i++)
    {
        scanf ("%lld %lld",&n, &k);
    }

    for(int i=0; i<N; i++)
    {
        while(n!=0)
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

        }
        printf("\nAnswer: %d",count+1);
        count=0;
    }






}


