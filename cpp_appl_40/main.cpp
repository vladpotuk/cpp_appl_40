#include <iostream>
#include<Windows.h>
//���������� ������� �����. ��������� ������� ����, ������� ���� � ������� ����� �������, �������� � �����.
int main() {
    system("chcp 1251");
    system("cls");
    const int MAX_LENGTH = 100;
    char inputString[MAX_LENGTH];

    std::cout << "������ ����� �� �������� ��� : ";
    std::cin.getline(inputString, MAX_LENGTH);

    int letters = 0;
    int digits = 0;
    int otherChars = 0;

    for (int i = 0; inputString[i] != '\0'; ++i) {

        if (isalpha(inputString[i])) {
            letters++;
        }
        else if (isdigit(inputString[i])) {
            digits++;
        }
        else {
            otherChars++;
        }
    }

    std::cout << "˳����: " << letters << std::endl;
    std::cout << "�����: " << digits << std::endl;
    std::cout << "���� �������: " << otherChars << std::endl;

    return 0;
}
