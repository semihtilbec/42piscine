void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

#include <stdio.h>
int main()
{
    int x = 10;
    int y = 20;

    ft_swap(&x, &y);
    printf("Swap Sonrası: x = %d, y = %d", x, y);
}