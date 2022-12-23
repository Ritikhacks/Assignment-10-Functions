#include <stdio.h>
void print_N_NaturalNos(int N)
{
    for (int i = 1; i <= N; i++)
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

    print_N_NaturalNos(n);
    return 0;
}