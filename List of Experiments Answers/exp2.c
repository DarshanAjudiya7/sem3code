#include <stdio.h>

void delete_at(int arr[], int *n, int pos)
{
    if (pos < 0 || pos >= *n)
        return;
    for (int i = pos; i < *n - 1; ++i)
        arr[i] = arr[i + 1];
    (*n)--;
}

int main()
{
    int arr[100], n, i, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Position to delete (0-based): ");
    scanf("%d", &pos);
    delete_at(arr, &n, pos);
    printf("Array after deletion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}