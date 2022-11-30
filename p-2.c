#include <stdio.h>
void swap_func(int *x, int *y)
{
    int temp;

    if (*x > *y)
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }
}
void sorting_func(int array[], int *length)
{
    for (int i = 0; i < *length; i++)
    {
        for (int j = 0; j < *length - 1; j++)
        {
            swap_func(&array[j], &array[j + 1]);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    sorting_func(array, &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}
