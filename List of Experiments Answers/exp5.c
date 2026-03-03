#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cricket {
    char player[50];
    char team[50];
    float avg;
};

int main() {
    int n;
    printf("Enter number of players: ");
    scanf("%d", &n);
    struct cricket *arr = malloc(n * sizeof *arr);
    for (int i = 0; i < n; i++) {
        printf("Player %d name: ", i+1);
        scanf("%s", arr[i].player);
        printf("Team name: ");
        scanf("%s", arr[i].team);
        printf("Batting average: ");
        scanf("%f", &arr[i].avg);
    }
    int idx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i].avg > arr[idx].avg) idx = i;
    }
    printf("Best player: %s (%s) with avg %.2f\n", arr[idx].player, arr[idx].team, arr[idx].avg);
    free(arr);
    return 0;
}