#include <iostream>

using namespace std;
int main() {
    int numbers=12345,revNum=0;
    while (numbers) {
      revNum=revNum*10+numbers%10;
      numbers/=10;
      
    }
    cout << revNum;
    return 0;
  }
