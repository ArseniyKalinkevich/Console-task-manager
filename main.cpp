#include <iostream>
#include <string>
#include <vector>

using namespace std;

const string MASTER_PASSWORD = "1234";

struct Password {
  string site;
  string login;
  string password;
};

int main() {
  vector<Password> passwords;
  string enterdPassword;
  int menu;

  cout << "введите мастер_key: ";
  cin >> enterdPassword;

  if (enterdPassword != MASTER_PASSWORD) {
    cout << "мастер_key введен неправильно" << endl;
    return 1;
  }

  while (true) {
    cout << "======= Менеджер паролей ======" << endl;
    cout << endl;

    cout << "1. Показать все записи" << endl;
    cout << "2. Добавить запись" << endl;
    cout << "3. Найти запись" << endl;
    cout << "4. Удалить запись по названию" << endl;
    cout << "5. Изменить запись" << endl;
    cout << "6. Выход" << endl;

    cout << "Выберите пункт: ";
    cin >> menu;

    if (menu == 1) {
      if (passwords.empty()) {
        cout << "записей нет" << endl;
      } else {
        for (int i = 0; i < passwords.size(); i++) {
          cout << i + 1 << ". " << passwords[i].site << endl;
          cout << "Логин: " << passwords[i].login << endl;
          cout << "Пароль: " << passwords[i].password << endl;
          cout << endl;
        }
      }
    }

    else if (menu == 2) {
      Password newpassword;

      cin.ignore();

      cout << "введите название сайта: ";
      getline(cin, newpassword.site);

      cout << "введите логин: ";
      getline(cin, newpassword.login);

      cout << "введите пароль: ";
      getline(cin, newpassword.password);

      passwords.push_back(newpassword);
    }

    else if (menu == 3) {
      string searchSite;

      cin.ignore();

      cout << "введите сайт: ";
      getline(cin, searchSite);

      if (passwords.empty()) {
        cout << "записей нет" << endl;
      } else {
        bool found = false;

        for (int i = 0; i < passwords.size(); i++) {
          if (passwords[i].site == searchSite) {
            cout << i + 1 << ". " << passwords[i].site << endl;
            cout << "Логин: " << passwords[i].login << endl;
            cout << "Пароль: " << passwords[i].password << endl;
            cout << endl;

            found = true;
          }
        }

        if (found == false) {
          cout << "запись не найдена" << endl;
        }
      }
    }

    else if (menu == 4) {

      string deleteSite;

      cin.ignore();

      cout << "Введите название сайта для удаления: ";
      getline(cin, deleteSite);

      if (passwords.empty()) {
        cout << "записей нет" << endl;
      }

      else {

        bool found = false;

        for (int i = 0; i < passwords.size(); i++) {
          if (passwords[i].site == deleteSite) {
            passwords.erase(passwords.begin() + i);
            cout << "запись удалена" << endl;

            found = true;

            i--;
          }
        }
      }
    }

    else if (menu == 6) {
      cout << "выход из программы" << endl;
      break;
    }
  }

  return 0;
}
