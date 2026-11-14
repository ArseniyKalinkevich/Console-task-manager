#include <iostream>
#include <limits>
#include <locale>
#include <sstream>
#include <string>

using namespace std;

int readInt(const string messege) {
  string line;
  int x;

  while (true) {
    cout << messege;
    getline(cin, line);
    stringstream ss(line);

    if (ss >> x) {
      return x;
    }

    cout << "error" << endl;
  }
}
int main() {

  int minNumber;
  int maxNumber;

  minNumber = readInt("введите нижнюю границу: ");
  maxNumber = readInt("введите вверхнюю границу: ");
  int x = readInt("введите искомое число: ");

  if (minNumber > maxNumber) {
    cout << "error" << "\n";
    return 1;
  }

  while (minNumber <= maxNumber) {
    int mid = (minNumber + maxNumber) / 2;
    cout << "середина: " << mid << endl;

    if (mid == x) {
      cout << "наше число: " << mid << "\n";
      return 0;
    }

    else if (x < mid) {
      maxNumber = mid - 1;
    }

    else {
      minNumber = mid + 1;
    }
  }

  cout << "число не найдено!";

  return 0;
}
