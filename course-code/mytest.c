#include <stdio.h>

void func() {
    int a = 1;
    int *p1 = &a;
    int *p2 = p1;
}
int main() {
    func();
}