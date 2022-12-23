#include <stdio.h>
float SI(int P, int R, int T)
{
    return ((P*R*T)/100);
}
int main()
{
    int P,R,T;
    printf("Enter Principle Rate and Time respectively: ");
    scanf("%d%d%d",&P,&R,&T);

    printf("Simple Interest = %f\n",SI(P,R,T));
    return 0;
}