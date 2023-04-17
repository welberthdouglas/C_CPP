#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    long int num = x;
    long int invNum = 0;

    while (num > 0) {
        invNum = invNum*10 + num%10;
        num /= 10; 
    }
    return x == invNum;
}

int main() {
    int x = 1000;
    
    bool res = isPalindrome(x);

    printf("%d ; %d", x, res);

}