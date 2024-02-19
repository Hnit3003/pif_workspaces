#include <stdio.h>

void main(void)
{
    int n;

    do
    {
        printf("Nhap so phan tu n = ");
        scanf("%d", &n);
    } while ((n <= 0) || (n >= 16));

    int arr[n];

    printf("Nhap gia tri tung phan tu:\n");

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("arr[] = { ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        if (i == n-1) printf ("}\n");
    }

    printf("Dia chi cua tung phan tu:\n");
    for (int i = 0; i < n; i++)
    {
        printf("&arr[%d] = %d\n", i, &arr[i]);
    }
}