#include <stdio.h>
#include <stdint.h>

// #define UINT8_T
// #define UINT16_T
// #define UINT32_T
#define UINT64_T

void main()
{

    int n;

#ifdef UINT8_T

    do
    {
        printf("Nhap so phan tu n mang uint8_t_arr = ");
        scanf("%d", &n);
    } while ((n <= 0) || (n >= 16));

    uint8_t uint8_t_arr[n];

    printf("Nhap gia tri tung phan tu:\n");

    for (int i = 0; i < n; i++)
    {
        printf("uint8_t_arr[%d] = ", i);
        scanf("%d", &uint8_t_arr[i]);
    }

    printf("uint8_t_arr[] = { ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", uint8_t_arr[i]);
        if (i == n-1) printf ("}\n");
    }

    printf("Dia chi cua tung phan tu:\n");
    for (int i = 0; i < n; i++)
    {
        printf("&uint8_t_arr[%d] = %d\n", i, &uint8_t_arr[i]);
    }

#endif

#ifdef UINT16_T

    do
    {
        printf("Nhap so phan tu n mang uint16_t_arr = ");
        scanf("%d", &n);
    } while ((n <= 0) || (n >= 16));

    uint16_t uint16_t_arr[n];

    printf("Nhap gia tri tung phan tu:\n");

    for (int i = 0; i < n; i++)
    {
        printf("uint16_t_arr[%d] = ", i);
        scanf("%d", &uint16_t_arr[i]);
    }

    printf("uint16_t_arr[] = { ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", uint16_t_arr[i]);
        if (i == n-1) printf ("}\n");
    }

    printf("Dia chi cua tung phan tu:\n");
    for (int i = 0; i < n; i++)
    {
        printf("&uint16_t_arr[%d] = %d\n", i, &uint16_t_arr[i]);
    }

#endif

#ifdef UINT32_T

    do
    {
        printf("Nhap so phan tu n mang uint32_t_arr = ");
        scanf("%d", &n);
    } while ((n <= 0) || (n >= 16));

    uint32_t uint32_t_arr[n];

    printf("Nhap gia tri tung phan tu:\n");

    for (int i = 0; i < n; i++)
    {
        printf("uint32_t_arr[%d] = ", i);
        scanf("%lu", &uint32_t_arr[i]);
    }

    printf("uint32_t_arr[] = { ");
    for (int i = 0; i < n; i++)
    {
        printf("%lu ", uint32_t_arr[i]);
        if (i == n-1) printf ("}\n");
    }

    printf("Dia chi cua tung phan tu:\n");
    for (int i = 0; i < n; i++)
    {
        printf("&uint32_t_arr[%d] = %lu\n", i, &uint32_t_arr[i]);
    }

#endif

#ifdef UINT64_T

    do
    {
        printf("Nhap so phan tu n mang uint64_t_arr = ");
        scanf("%d", &n);
    } while ((n <= 0) || (n >= 16));

    uint64_t uint64_t_arr[n];

    printf("Nhap gia tri tung phan tu:\n");

    for (int i = 0; i < n; i++)
    {
        printf("uint64_t_arr[%d] = ", i);
        scanf("%lu", &uint64_t_arr[i]);
    }

    printf("uint64_t_arr[] = { ");
    for (int i = 0; i < n; i++)
    {
        printf("%lu ", uint64_t_arr[i]);
        if (i == n-1) printf ("}\n");
    }

    printf("Dia chi cua tung phan tu:\n");
    for (int i = 0; i < n; i++)
    {
        printf("&uint64_t_arr[%d] = %lu\n", i, &uint64_t_arr[i]);
    }

#endif

}