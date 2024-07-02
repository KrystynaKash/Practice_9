#include <stdio.h>
#include <math.h>

int minSteps(int x, int y) {
    if (x == y) {
        return 0;
    }
    
    int distance = y - x;
    int steps = 0;
    int currentLength = 0;
    int totalLength = 0;
    
    while (totalLength < distance) {
        steps++;
        if (steps % 2 == 0) {
            currentLength++;
        }
        totalLength += currentLength;
    }
    return steps;
}

int main() {
    int x, y;
    printf("Введіть x та y: ");
    scanf("%d %d", &x, &y);
    if (x > y || x < 0 || y >= 2147483648) {
        printf("Некоректне значення x або y.\n");
        return 1;
    }
    int result = minSteps(x, y);
    printf("Мінімальна кількість кроків: %d\n", result);
    return 0;
}
