#include <stdio.h>
int main () {
    int y = 0x80000000;
    int x = 0x7fffffff;
    int negX = ~x + 1;
    int addX  = negX + y;  // y- x
     printf("%x", addX);
    int checkSign = addX >> 31 & 1;  // sign number
    printf("%x", checkSign);
    int Tmin = 0x1 << 31;  // 1000...
    int xSign = (x & Tmin);
    int ySign = (y & Tmin);
    printf("%x\n", xSign);
    printf("%x\n", ySign);
    printf("%x\n", !!ySign);
    return (!checkSign) | (!ySign & !!xSign);
  
}