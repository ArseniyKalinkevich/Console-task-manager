#include <iostream>
#include <ostream>
#include <string>

using namespace std;
const string MASTER_PASSWORD = "1234";

int main() {

  string enterdPassword;

  int menu;

  cout << "введите мастер_key: ";
  cin >> enterdPassword;

  if (enterdPassword != MASTER_PASSWORD) {
    cout << "мастер_key введн не правильно " << endl;
    return 1;
  }

  while (true) {

    cout << "======= Менеджер задач ======" << endl;
    cout << endl;

    cout << "1. Показать все записи" << endl;
    cout << "2. Добавить запись" << endl;
    cout << "3. Найти запись" << endl;
    cout << "4. Выход" << endl;

    cout << "Выберите пункт: ";
    cin >> menu;

    if (menu == 1) {

    }

    else if (menu == 2) {

    }

    else if (menu = 3) {

    }

    else if (menu == 4) {
    }
  }

  return 0;
}
