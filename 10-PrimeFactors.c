#include <stdio.h>
void printPrimeFactors(int n)
{
    int i = 2;
    while(n>1)
    {
        if(n%i == 0)
        {
            printf("%d  ",i);
            n = n/i;
            continue;
        }
        i++;
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printPrimeFactors(n);
    printf("\n");
    return 0;
}