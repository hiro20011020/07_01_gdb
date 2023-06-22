#include <stdio.h>

int main() {
    int numbers[5];  // 長さ5の整数型配列

    printf("Enter 5 numbers:\n");

    // ユーザーからの入力を受け取り、配列に格納する
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int sum = 0;

    // 配列の要素を合計する
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    printf("Sum: %d\n", sum);

    return 0;
}
