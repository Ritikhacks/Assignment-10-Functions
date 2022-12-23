#include <stdio.h>
#include <stdbool.h>
bool CheckEven(int n)
{
    if(n%2==0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(CheckEven(n))
    {
        printf("Even\n");
    }
    else 
        printf("Odd\n");
    
    return 0;
}
