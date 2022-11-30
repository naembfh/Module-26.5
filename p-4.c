#include<stdio.h>
float radius_circle(int r)
{
    return 3.1416*r*r;
}
int main()
{
    int r;
    scanf("%d",&r);
    printf("%f",radius_circle(r));
}