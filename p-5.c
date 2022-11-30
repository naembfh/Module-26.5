#include <stdio.h>
int sum_digit_zero(int array[], int length)
{
    int summ = 0;
    for (int i = 0; i < length; i++)
    {
        if (array[i] % 10 == 0)
        {
            summ += array[i];
        }
    }
    return summ;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arrry[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arrry[i]);
    }
    printf("%d", sum_digit_zero(arrry, n));
}