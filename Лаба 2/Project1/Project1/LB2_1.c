#include <stdio.h>

int main() {
    int number;

    // ���������� ������ �����
    printf("������ ���� �����: ");
    scanf("%d", &number);

    // ��������� ����� � ������ ������� ASCII, ���������� �� ��������������� ������
    printf("�����: %d\n", number);
    printf("������ ASCII: %c\n", (char)number);
    printf("������������� �����: %.6e\n", (float)number);

    return 0;
}