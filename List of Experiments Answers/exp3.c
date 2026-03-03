#include <stdio.h>

void findmax(int arr[], int n, int *maxval, int *pos)
{
    if (n <= 0)
    {
        *pos = -1;
        return;
    }
    *maxval = arr[0];
    *pos = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > *maxval)
        {
            *maxval = arr[i];
            *pos = i;
        }
    }
}

int main()
{
    int arr[100], n, maxval, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    findmax(arr, n, &maxval, &pos);
    if (pos >= 0)
        printf("Max = %d at position %d\n", maxval, pos);
    return 0;
}