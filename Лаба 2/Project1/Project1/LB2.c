#include <stdio.h>
#include <string.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    char planet[50];

    // ���������� ����� ������� � ���������
    printf("������ ����� �������: ");
    fgets(planet, sizeof(planet), stdin);

    // ��������� ������� ������ �����, ���� �� �
    size_t len = strlen(planet);
    if (len > 0 && planet[len - 1] == '\n') {
        planet[len - 1] = '\0';
    }

    // ��������� ���������� ��� �������
    if (strcmp(planet, "�����") == 0) {
        printf("����� � ����� ������� �� �����, �������� ��� �����.\n");
    }
    else if (strcmp(planet, "����") == 0) {
        printf("���� � �������� ������� �� �����, ����� �� ������� �������.\n");
    }
    else if (strcmp(planet, "�����") == 0) {
        printf("����� � �������� ������� ������� �������.\n");
    }
    else {
        printf("���������� ��� ������� \"%s\" ������� � ��� �����.\n", planet);
    }

    return 0;
}
