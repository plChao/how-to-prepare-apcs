#include <iostream>
#include "../util/flush.cpp"
using namespace std;

int s = 1; // 全域變數

void add(int a) {
    int s = 6; // 區域變數
    for (; a >= 0; a = a - 1) {
        flush_printf("%d,", s);
        s++;
        flush_printf("%d,", s);
    }
}

int main() {
    flush_printf("%d,", s);
    add(s);
    flush_printf("%d,", s);
    s = 9;
    flush_printf("%d", s);
    return 0;
}
