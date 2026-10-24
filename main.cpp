#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

  int menu;
  string task;
  vector<string> tasks;

  while (true) { // меню

    cout << "1. просмотр задач" << endl;
    cout << "2. добавить задачу" << endl;
    cout << "3. удалить  задачу" << endl;
    cout << "4. изменить задачу" << endl;
    cout << "5. выход из программы" << endl;
    cin >> menu;

    if (menu == 1) { // ввод команда 1
      if (!tasks.empty()) {
        cout << "твои задачи: " << endl;
        for (int i = 0; i < tasks.size(); i++) {
          cout << i + 1 << ". " << tasks[i] << endl;
        }
      }

      else {
        cout << "задач пока нет" << endl;
      }
    }

    else if (menu == 2) {
      string task;

      cin.ignore();
      cout << "введи задачу: ";

      getline(cin, task);
      tasks.push_back(task);

      cout << "задача добавлена: " << task << endl;

    }

    else if (menu == 3) {
      if (!tasks.empty()) {
        tasks.pop_back();
        cout << "последняя задача удалена " << endl;
      }

      else {
        cout << "задач пока нет " << endl;
      }
    }

    else if (menu == 4) {
      if (!tasks.empty()) {
        int number;

        cout << "введите номер задачи: ";
        cin >> number;
        cin.ignore();

        if (number >= 1 && number <= tasks.size()) {
          cout << "введите изменение для новой задачи: " << endl;
          getline(cin, task);

          tasks[number - 1] = task;

          cout << "задача изменена " << task << endl;
        }

        else {
          cout << "задача не найдена" << endl;
        }
      }

    }

    else if (menu == 5) {
      cout << "выход из программы" << endl;
      break;
    }
  }

  return 0;
}
