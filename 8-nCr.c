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
int nCr(int n,int r)
{
    if(r>n)
    {
        return -1;
    }
    
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main()
{
    int n,r;
    printf("Enter a number: ");
    scanf("%d%d",&n,&r);

    printf("%dC%d = %d\n",n,r,nCr(n,r));
    return 0;
}