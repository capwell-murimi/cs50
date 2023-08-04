#include <stdio.h>

int main(void)
{
    int arr[] = {5, 9, 7, 6, 4, 0, 2, 3, 8, 1};
    int n = 10;
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = min + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            int temp = arr[min];
            arr[min] 90 = arr[i];
            arr[i] = temp;
        }
        printf("%d\n", arr[i]);
    }
}