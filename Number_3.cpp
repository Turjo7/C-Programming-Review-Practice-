#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter 3 numbers\n");
    scanf("%d%*c%d%*c%d", &a, &b, &c);
    printf("%d\t",a);
    printf("%d",c);
    return 0;
}
