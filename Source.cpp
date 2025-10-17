#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char one_string[9];
    char two_string[9];
    char result_string[9];

    cout << "Введите 8 символов: " << endl;
    for (int i = 0; i < 8; i++) {
        cin >> one_string[i];
    }
    one_string[8] = '\0';

    cout << "Вы ввели: ";
    for (int i = 0; i < 8; i++) {
        cout << one_string[i];
    }
    cout << endl;
    bool valid1 = true;
    for (int i = 0; one_string[i] != '\0'; i++) {
        if (one_string[i] != '0' && one_string[i] != '1') {
            valid1 = false;
            cout << "Ошибка: строка должна содержать только 0 и 1" << endl;
            break;
        }
    }

    int len1 = strlen(one_string);
    if (len1 < 8) {
        for (int i = len1; i >= 0; i--) {
            one_string[i + 8 - len1] = one_string[i];
        }
        for (int i = 0; i < 8 - len1; i++) {
            one_string[i] = '0';
        }
    }

    cout << "Введите 8 символов: " << endl;
    for (int j = 0; j < 8; j++) {
        cin >> two_string[j];
    }
    two_string[8] = '\0';

    cout << "Вы ввели: ";
    for (int i = 0; i < 8; i++) {
        cout << two_string[i];
    }
    cout << endl;

    bool valid2 = true;
    for (int i = 0; two_string[i] != '\0'; i++) {
        if (two_string[i] != '0' && two_string[i] != '1') {
            valid2 = false;
            cout << "Ошибка: строка должна содержать только 0 и 1" << endl;
            break;
        }
    }
    int len2 = strlen(two_string);
    if (len2 < 8) {
        for (int i = len2; i >= 0; i--) {
            two_string[i + 8 - len2] = two_string[i];
        }
        for (int i = 0; i < 8 - len2; i++) {
            two_string[i] = '0';
        }
    }


    cout << "Результат конъюнкции двух массивов: ";
    for (int i = 0; i < 8; i++) {
        if (one_string[i] == '1' && two_string[i] == '1') {
            result_string[i] = '1';
        }
        else {
            result_string[i] = '0';
        }
        cout << result_string[i];
    }
    result_string[8] = '\0';

    cout << endl;

    return 0;


}
