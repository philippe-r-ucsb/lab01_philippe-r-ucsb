#include <iostream>
#include <string>

using namespace std;

string make_block(int x, int y);

int main() {
  cout << "Enter number of rows and columns:" << endl;
  int rows;
  int columns;
  cin >> rows;
  cin >> columns;

  cout << make_block(rows, columns) << endl;

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
  return s;
}

