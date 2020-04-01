#include <iostream>
#include <cmath>

using namespace std;

double leibniz_pi_approx(int n);

int main() {
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(3);

  int n = 0;
  cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1) to quit" << endl;
  cin >> n;
  while (n >= 0) {
    double pi = leibniz_pi_approx(n);
    cout << "The approximate value of pi using " << n+1 << " terms is: " << pi << endl;
    cin >> n;
    cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1) to quit" << endl;
  }
  return 0;

}

double leibniz_pi_approx(int n) {
  double pi_over_four = 0;
  for (int i = 0; i <= n; i++) {
    pi_over_four += (pow(-1.0, i)) / (2 * i + 1);
  }

  return pi_over_four * 4;
}

