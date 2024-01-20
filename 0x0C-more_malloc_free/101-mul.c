#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * multiply - Multiplies two positive numbers.
 * @num1: First number as string.
 * @num2: Second number as string.
 */
void multiply(char *num1, char *num2) {
    int len1 = 0, len2 = 0;

    while (num1[len1] && isdigit(num1[len1])) len1++;
    while (num2[len2] && isdigit(num2[len2])) len2++;

    if (len1 == 0 || len2 == 0) {
        printf("Error\n");
        exit(98);
    }

    int result_len = len1 + len2;
    int *result = calloc(result_len, sizeof(int));

    for (int i = len1 - 1; i >= 0; i--) {
        int carry = 0;
        int num1_digit = num1[i] - '0';

        for (int j = len2 - 1; j >= 0; j--) {
            int num2_digit = num2[j] - '0';
            int temp = result[i + j + 1] + (num1_digit * num2_digit) + carry;

            result[i + j + 1] = temp % 10;
            carry = temp / 10;
        }

        result[i] += carry;
    }

    int start = 0;
    while (start < result_len && result[start] == 0) start++;

    if (start == result_len) {
        printf("0\n");
    } else {
        for (int i = start; i < result_len; i++) printf("%d", result[i]);
        printf("\n");
    }

    free(result);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    multiply(argv[1], argv[2]);

    return 0;
}

