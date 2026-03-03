#include <stdio.h>

struct distance
{
    int feet;
    int inches;
};

struct distance addDistance(struct distance d1, struct distance d2)
{
    struct distance res;
    res.inches = d1.inches + d2.inches;
    res.feet = d1.feet + d2.feet + res.inches / 12;
    res.inches %= 12;
    return res;
}

int main()
{
    struct distance d1, d2, sum;
    printf("Enter first distance (feet inches): ");
    scanf("%d %d", &d1.feet, &d1.inches);
    printf("Enter second distance (feet inches): ");
    scanf("%d %d", &d2.feet, &d2.inches);
    sum = addDistance(d1, d2);
    printf("Total = %d feet %d inches\n", sum.feet, sum.inches);
    return 0;
}