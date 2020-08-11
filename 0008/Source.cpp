#include<stdio.h>
int main()
{
    int x[2], s;
    scanf("%d", &x[0]);
    scanf("%d", &s);
    x[1] = (s * 2) - x[0];
    printf("%d", x[1]);
    return 0;
}
