#include <iostream>

using namespace std;

void pickBasket(int& baskets) {
    baskets++;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int baskets;
    cout << "Введите начальное количество собранных корзин: ";
    cin >> baskets;

    pickBasket(baskets);
    cout << "Собрали еще одну корзину. Всего корзин: " << baskets << endl;

    pickBasket(baskets);
    cout << "Собрали еще одну корзину. Всего корзин: " << baskets << endl;

    return 0;
}
