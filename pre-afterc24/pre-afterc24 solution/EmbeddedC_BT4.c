#include <stdio.h>

void main(void)
{
    int n;

    do
    {
        printf("Nhap so phan tu n = ");
        scanf("%d", &n);
    } while (n < 5);

    int arr[n];

    printf("Nhap gia tri tung phan tu:\n");

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }


    float arr_sum = 0;

    printf("arr[] = { ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        if (i == n-1) printf ("}\n");
        arr_sum += arr[i];
    }

    printf("Gia tri trung binh cua mang la: %.3f", (arr_sum/(float)n));
}