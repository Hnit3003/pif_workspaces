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

    printf("arr[] = { ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        if (i == n-1) printf ("}\n");
    }

    int arr_max = arr[0], arr_min = arr[0] ;
    int arr_max_position = 0, arr_min_position = 0;

    for (int i = 0; i < (n-1); i++)
    {
        if (arr_max < arr[i+1])
        {
            arr_max = arr[i+1];
            arr_max_position = i+1;
        }

        if (arr_min > arr[i+1])
        {
            arr_min = arr[i+1];
            arr_min_position = i+1;
        }
    }

    printf("Phan tu lon nhat trong mang: arr[%d] = %d\n", arr_max_position, arr_max);
    printf("Phan tu be nhat trong mang: arr[%d] = %d\n", arr_min_position, arr_min);

}