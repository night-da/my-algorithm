#include <stdio.h>
#include <math.h>

float distance(float x1, float y1, float x2, float y2) {
    float ans = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return ans;
}

int main() {
    float x1, y1, x2, y2, x3, y3;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    scanf("%f %f", &x3, &y3);

    float s1 = distance(x1, y1, x2, y2);
    float s2 = distance(x1, y1, x3, y3);
    float s3 = distance(x2, y2, x3, y3);

    printf("%.2f\n", s1 + s2 + s3);

    return 0;
}