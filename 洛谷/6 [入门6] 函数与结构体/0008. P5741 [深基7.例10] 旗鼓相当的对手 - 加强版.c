#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

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

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (fabs(student[i].chinese - student[j].chinese) <= 5 && fabs(student[i].math - student[j].math) <= 5 && fabs(student[i].engligh - student[j].engligh) <= 5 && fabs(student[i].total - student[j].total) <= 10) {
                if (strcmp(student[i].name, student[j].name) < 0) {
                    printf("%s %s\n", student[i].name, student[j].name);
                }
                else {
                    printf("%s %s\n", student[j].name, student[i].name);
                }
            }
        }
    }

    free(student);

    return 0;
}