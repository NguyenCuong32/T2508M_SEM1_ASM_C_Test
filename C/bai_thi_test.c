#include <stdio.h>

int gia_tri_lon(int arr[], int n)
{
    int max = arr[0];
    for (int j = 1; j < n; j++)
    {
        if (arr[j] > max)
            max = arr[j];
    }
    return max;
}

double y(double x)
{
    return -0.5 * 9.8 * x * x + x;
}

int main()
{
    int nhap;
    printf("1. Bai 1\n2. Bai 2\nNhap Lua Chon: ");
    scanf("%d", &nhap);
    switch (nhap)
    {
    case 1:
    {
        double x, result;
        result = y(5);
        printf("Vi Tri Cua Vien Dan La: %.2lf\n", result);

        printf("Nhap So Dan: ");
        scanf("%lf", &x);

        result = y(x);
        if (result > 50 || result < 30)
        {
            printf("Vien Dan Bay Ra Ngoai %.2lf\n");
        }
        else
        {
            printf("Vien Dan Da Trung Dich\n");
        }
        break;
    }

    case 2:
    {
        int Array[6] = {7, 6, 3, 34, 10, 710};
        int i = 0;
        printf("\nVong Lap For:\n");
        for (i = 0; i < 6; i++)
        {
            printf("STT %d Du Lieu La %d.\n", i + 1, Array[i]);
        }

        printf("\nVong Lap While:\n");
        i = 0;
        while (i < 6)
        {
            printf("STT %d Du Lieu La %d.\n", i + 1, Array[i]);
            i++;
        }

        printf("\nVong Lap Do While\n");
        i = 0;
        do
        {
            printf("STT %d Du Lieu La %d.\n", i + 1, Array[i]);
            i++;
        } while (i < 6);

        int largest = gia_tri_lon(Array, 6);
        printf("\nPhan Tu Lon Nhat Trong Mang: %d.\n", largest);
    }
    break;

    default:
        break;
    }
}