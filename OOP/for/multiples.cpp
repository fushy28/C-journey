#include <iostream>
using namespace std;
int main() {
  int length, width;
  cout << "Enter length and width: ";
  cin >> length >> width;
  for (int i = 1; i <= length;i++) {
    for (int j=1; j <= width;j++) {
      cout<<i << "*"<<j<<"="<<i*j<<"\t";
    }
    cout<<endl;
    }
  
  return 0;
}
