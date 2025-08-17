#include <iostream>

int mdc(int a, int b) {
  if(b == 0) return a;

  return mdc(b, a%b);
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << mdc(a, b) << std::endl;
  return 0;
}
