#include <iostream>
using namespace std;
int sum(int x, int y) {
  return x + y;
}

double sum(double x, double y) {
  return x + y;
}

int main() {
  int Num1 = sum(10, 45);
  double Num2 = sum(5.63, 2.86);
  cout << " For Int: " << Num1 <<endl;
  cout << " For Double: " << Num2<<endl;
  return 0;
}
