#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student { char last[20], first[20]; float gpi; };
struct employee { char last[20], first[20]; float salary; };

void raise_if_match(struct student studs[], struct employee emps[], int ns, int ne) {
    for (int i = 0; i < ne; i++) {
        for (int j = 0; j < ns; j++) {
            if (strcmp(emps[i].last, studs[j].last)==0 && strcmp(emps[i].first, studs[j].first)==0 && studs[j].gpi>3.0) {
                emps[i].salary *= 1.1f;
            }
        }
    }
}

int main() {
    int ns, ne;
    printf("#students: "); scanf("%d", &ns);
    struct student *s = malloc(ns * sizeof *s);
    for (int i = 0; i < ns; i++) {
        printf("Student %d last first gpi: ", i+1);
        scanf("%s %s %f", s[i].last, s[i].first, &s[i].gpi);
    }
    printf("#employees: "); scanf("%d", &ne);
    struct employee *e = malloc(ne * sizeof *e);
    for (int i = 0; i < ne; i++) {
        printf("Employee %d last first salary: ", i+1);
        scanf("%s %s %f", e[i].last, e[i].first, &e[i].salary);
    }
    raise_if_match(s, e, ns, ne);
    printf("After raises:\n");
    for (int i = 0; i < ne; i++)
        printf("%s %s %.2f\n", e[i].last, e[i].first, e[i].salary);
    free(s); free(e);
    return 0;
}