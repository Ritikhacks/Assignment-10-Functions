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
int nPr(int n,int r)
{
    if(r>n)
    {
        return -1;
    }
    
    return factorial(n)/factorial(n-r);
}
int main()
{
    int n,r;
    printf("Enter a number: ");
    scanf("%d%d",&n,&r);

    printf("%dP%d = %d\n",n,r,nPr(n,r));
    return 0;
}