#include <stdio.h>
void Print_Odd_NaturalNos(int N)
{
    for (int i = 1; i <= 2*N-1; i = i + 2)
    {
        printf("%d  ",i);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    Print_Odd_NaturalNos(n);
    return 0;
}