#Basic Loop
```cpp
// Create an array of strings
string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

// Loop through strings
for (int i = 0; i < 5; i++) {
  cout << cars[i] << "\n";
}
```
#The foreach Loop
```cpp
// Create an array of integers
int myNumbers[5] = {10, 20, 30, 40, 50};

// Loop through integers
for (int num : myNumbers) {
  cout << num << "\n";
}/*output: 10
20
30
40
50*/
```
