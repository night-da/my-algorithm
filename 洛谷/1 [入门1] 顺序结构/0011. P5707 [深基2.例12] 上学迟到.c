#include <stdio.h>
#include <math.h>

int main() {
    float s, v;
    int minute, hour;
    scanf("%f %f", &s, &v);

    int time = ceil(s / v) + 10;

    minute = 0 - time % 60;
    hour = 8 - time / 60;

    if (minute < 0) {
        minute += 60;
        hour--;
    }

    if (hour < 0) {
        hour += 24;
    }

    printf("%02d:%02d\n", hour, minute);
    
    return 0;
}