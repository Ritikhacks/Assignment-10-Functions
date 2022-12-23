#include <stdio.h>
#include <stdbool.h>
bool checkDigit(int n,int key)
{
    int lastDigit;
    while(n>0)
    {
        lastDigit = n%10;
        if(lastDigit == key)
        {
            return 1;
        }
        n = n/10;
    }
        return 0;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int key;
    printf("Enter the key: ");
    scanf("%d",&key);

    if(checkDigit(n,key))
    {
        printf("Digit present! \n");
    }
    else 
        printf("Digit NOT present\n");
}