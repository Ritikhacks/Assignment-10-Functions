#include <stdio.h>
int factorial(int n)
{
    int fact = 1;
    if(n<0)
    {
        return -1;
    }
    else if(n==0 || n == 1)
    {
        return fact;
    }
    
    else  
        for (int i = 2; i <= n; i++)
        {
            fact *= i;
        }
    return fact;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("%d! = %d\n",n,factorial(n));
    return 0;
}