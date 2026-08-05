#include <iostream>
using namespace std;
int main() {
  string a="hello world";
  for (char i: a) {
    cout << "\"" << i << "\"" << endl;
  }
  return 0;
}
