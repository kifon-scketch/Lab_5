#include <iostream>

using namespace std;

int water(int litersPerBed, int beds = 1) {
    return litersPerBed * beds;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int liters1;
    cout << "Введите расход воды на одну грядку (л): ";
    cin >> liters1;
    cout << "Необходимое количество воды для 1 грядки (по умолчанию): " << water(liters1) << " л" << endl;

    int liters2, beds;
    cout << "Введите расход воды на одну грядку (л) и количество грядок: ";
    cin >> liters2 >> beds;
    cout << "Необходимое количество воды для " << beds << " грядок: " << water(liters2, beds) << " л" << endl;

    return 0;
}
