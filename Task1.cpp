#include <iostream>

using namespace std;

int harvest(int bushes, int kgPerBush) {
    return bushes * kgPerBush;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int bushes1, kg1;
    cout << "Участок 1. Введите количество кустов и урожай с одного куста (кг): ";
    cin >> bushes1 >> kg1;
    cout << "Масса урожая с первого участка: " << harvest(bushes1, kg1) << " кг" << endl;

    int bushes2, kg2;
    cout << "Участок 2. Введите количество кустов и урожай с одного куста (кг): " << endl;
    cin >> bushes2 >> kg2;
    cout << "Масса урожая со второго участка: " << harvest(bushes2, kg2) << " кг" << endl;

    return 0;
}
