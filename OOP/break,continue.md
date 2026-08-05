# Break
## Dừng hẳn vòng lặp ngay lập tức, thoát ra khỏi loop

# Continue
## Bỏ qua phần code còn lại trong lần lặp hiện tại, nhảy sang lần lặp tiếp theo

#Ví dụ minh họa:

```cpp
// break
for (int i = 0; i < 10; i++) {
    if (i == 5) break;   // dừng hẳn khi i = 5
    cout << i << " ";
}
// In ra: 0 1 2 3 4
```
```cpp
// continue
for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) continue;  // bỏ qua số chẵn, nhảy sang lần lặp kế
    cout << i << " ";
}
// In ra: 1 3 5 7 9
```
