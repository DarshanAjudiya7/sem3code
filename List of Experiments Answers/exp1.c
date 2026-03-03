#include <stdio.h>

void insert(int arr[], int *n, int elem, int pos)
{
    if (pos < 0 || pos > *n)
        return;
    for (int i = *n; i > pos; --i)
        arr[i] = arr[i - 1];
    arr[pos] = elem;
    (*n)++;
}

int main()
{
    int arr[100], n, i, elem, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Element to insert and position (0-based): ");
    scanf("%d %d", &elem, &pos);
    insert(arr, &n, elem, pos);
    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}