#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) == 1) {
        int count = 0;

        while (n != 0) {
            int temp = n % 10;
            n /= 10;
            
            if (temp % 2 == 0) {
                count += temp;
            }
        }
        
        printf("%d\n\n", count);
    }

    return 0;
}