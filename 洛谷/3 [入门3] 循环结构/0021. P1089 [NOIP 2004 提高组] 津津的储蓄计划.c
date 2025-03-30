#include <stdio.h>

int main() {
    int cost[12];
    for (int i = 0; i < 12; i++) {
        scanf("%d", &cost[i]);
    }

    int money = 0;

    int X;
    int flag = 1;

    int store = 0;
    
    for (int i = 0; i < 12; i++) {
        money += 300;

        money -= cost[i];

        if (money < 0) {
            X = i + 1;
            flag = 0;
            break;
        }

        if (money >= 100) {
            while (money >= 100) {
                money -= 100;
                store += 100;
            }
        }
    }

    if (flag == 0) {
        printf("-%d\n", X);
    }
    else {
        printf("%d\n", money + (int)(store * 1.2));
    }

    return 0;
}