#include <stdio.h>
#include <string.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    char planet[50];

    // Зчитування назви планети з клавіатури
    printf("Введіть назву планети: ");
    fgets(planet, sizeof(planet), stdin);

    // Видалення символу нового рядка, якщо він є
    size_t len = strlen(planet);
    if (len > 0 && planet[len - 1] == '\n') {
        planet[len - 1] = '\0';
    }

    // Виведення інформації про планету
    if (strcmp(planet, "Земля") == 0) {
        printf("Земля – третя планета від Сонця, придатна для життя.\n");
    }
    else if (strcmp(planet, "Марс") == 0) {
        printf("Марс – четверта планета від Сонця, відома як Червона планета.\n");
    }
    else if (strcmp(planet, "Юпітер") == 0) {
        printf("Юпітер – найбільша планета Сонячної системи.\n");
    }
    else {
        printf("Інформація про планету \"%s\" відсутня в базі даних.\n", planet);
    }

    return 0;
}
