#include <iostream>
using namespace std;
int main() {
  int dice =1;
  while (dice <= 6) {
    if (dice <=3) {
      cout<< "Bad luck! You rolled a " << dice << endl;
      dice++;
    } else if (dice <6) {
      cout << "Congratulations! You rolled a " << dice << endl;
      dice++;
    } else {
      cout << "Yatzy!";
      dice++;
    }
  }
  return 0;
}
