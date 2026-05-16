/* 
Asked in an Technical round 
ex:
890031134934
→ 8+9+0+0+3+1+1+3+4+9+3+4 = 45
→ 4+5 = 9

% 10  → take last digit
/ 10  → remove last digit

digit = 178 % 10 = 8
sum = 0 + 8 = 8
num = 178 / 10 = 17
*/
#include <iostream>
using namespace std;

int main(){
    while (num >= 10) {
    int sum = 0;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    num = sum;
}

return num;
    return 0;
}