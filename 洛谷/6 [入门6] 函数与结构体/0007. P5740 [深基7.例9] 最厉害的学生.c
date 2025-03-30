#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[9];
    int chinese;
    int math;
    int engligh;
    int total;
} Student;

int main() {
    int N;
    scanf("%d", &N);

    Student* student = (Student*)malloc(N * sizeof(Student));
    for (int i = 0; i < N; i++) {
        scanf("%s %d %d %d", student[i].name, &student[i].chinese, &student[i].math, &student[i].engligh);
        student[i].total = student[i].chinese + student[i].math + student[i].engligh;
    }

    int idx = -1;
    int max = -1;
    for (int i = 0; i < N; i++) {
        if (student[i].total > max) {
            max = student[i].total;
            idx = i;
        }
    }

    printf("%s %d %d %d\n", student[idx].name, student[idx].chinese, student[idx].math, student[idx].engligh);

    free(student);

    return 0;
}