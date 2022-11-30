#include <stdio.h>
float find_avg(float *p, float *q)
{
    return (*p + *q) / 2;
}
int main()
{
    float x, y;
    scanf("%f%f", &x, &y);
    float *p = &x, *q = &y;
    float avg = find_avg(p, q);
    printf("%.3f", avg);
}