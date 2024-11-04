#include <stdio.h>

int main() {
    int number;

    // Зчитування цілого числа
    printf("Введіть ціле число: ");
    scanf("%d", &number);

    // Виведення числа у вигляді символу ASCII, звичайного та експоненційного запису
    printf("Число: %d\n", number);
    printf("Символ ASCII: %c\n", (char)number);
    printf("Експоненційна форма: %.6e\n", (float)number);

    return 0;
}