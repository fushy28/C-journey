# Omit Array Size
## In C++, you don't have to specify the size of the array. The compiler is smart enough to determine the size of the array based on the number of inserted values:

```cpp
string cars[] = {"Volvo", "BMW", "Ford"}; // Three array elements
```
## Omit Elements on Declaration
```cpp
string cars[5];
cars[0] = "Volvo";
cars[1] = "BMW";
cars[2] = "Ford";
cars[3] = "Mazda";
cars[4] = "Tesla";
```
# Vector
## Vectors are found in the <vector> library, and they come with many useful functions to add, remove and modify elements:
```cpp
// A vector with 3 elements
vector<string> cars = {"Volvo", "BMW", "Ford"};

// Adding another element to the vector
cars.push_back("Tesla");
```
# C++ vector vs Python list
 
C++ `vector` is closest to Python `list`. Both are dynamically resizable, offer fast index access, and are the default go-to container for storing a list of items.
 
| Operation           |        Python `list`        |          C++ `vector`           |
|:---------------------|:------------------------------:|:----------------------------------:|
| Declaration          | `nums = [1, 2, 3]`           | `vector<int> nums = {1, 2, 3};`  |
| Push to back         | `nums.append(4)`             | `nums.push_back(4);`             |
| Pop from back        | `nums.pop()`                 | `nums.pop_back();`               |
| Access by index      | `nums[0]`                    | `nums[0]`                        |
| Get size             | `len(nums)`                  | `nums.size();`                   |
| Foreach loop         | `for x in nums:`             | `for (int x : nums)`             |
| Element types        | Mixed types allowed          | Single type only                 |
| Type declaration     | Not required                 | Required (`vector<int>`, etc.)   |
