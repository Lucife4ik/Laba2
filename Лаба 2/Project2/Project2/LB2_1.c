#include <stdio.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int number;

    // ���������� ������ �����
    printf("������ ���� �����: ");
    scanf_s("%d", &number);

    // ��������� ����� � ������ ������� ASCII, ���������� �� ��������������� ������
    printf("�����: %d\n", number);
    printf("������ ASCII: %c\n", (char)number);
    printf("������������� �����: %.6e\n", (float)number);

    return 0;
}
