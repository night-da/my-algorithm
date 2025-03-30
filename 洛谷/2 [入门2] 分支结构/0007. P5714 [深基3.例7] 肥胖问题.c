#include <stdio.h>
#include <math.h>

int main() {
    float m, h;
    scanf("%f %f", &m, &h);

    float bmi = m / pow(h, 2);

    if (bmi < 18.5) {
        printf("Underweight\n");
    }
    else if (bmi < 24) {
        printf("Normal\n");
    }
    else {
        printf("%.6g\n", bmi);
        printf("Overweight\n");
    }

    return 0;
}