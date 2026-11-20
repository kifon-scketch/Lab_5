#include <iostream>

using namespace std;

int vegetables(int a, int b) {
    return a + b;
}

int vegetables(int a, int b, int c) {
    return a + b + c;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int a1, b1;
    cout << "Введите урожай с двух грядок (кг): ";
    cin >> a1 >> b1;
    cout << "Сумма урожая с двух грядок: " << vegetables(a1, b1) << " кг" << endl;

    int a2, b2, c2;
    cout << "Введите урожай с трех грядок (кг): ";
    cin >> a2 >> b2 >> c2;
    cout << "Сумма урожая с трех грядок: " << vegetables(a2, b2, c2) << " кг" << endl;

    return 0;
}
