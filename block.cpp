#include <iostream>
#include <string>

using namespace std;

string make_block(int x, int y);

int main() {
  for (;;) {
    cout << "Enter number of rows and columns:" << endl;
    int rows;
    int columns;
    cin >> rows;
    cin >> columns;

    if (rows == 0 || columns == 0) {
      break;
    }
    cout << make_block(rows, columns) << endl;
  }

  return 0;
}

string make_block(int rows, int columns) {
  string s = "";
  for (int j = 0; j < rows; j++) {
    for (int i = 0; i < columns; i++) {
      s.append("X.");
    }
    s.append("\n");
  }
  s.pop_back();
  return s;
}

