/*::::::::::::________Author of the solution: ABDUL HALIM CHOWDHURY_______:::::::::::*/

/*------------IDEA------------------------------------------
Last digit of fibonacci number repeat in sequences of length of 60.
Example:
Last digit of  fibbonacci(60) = last digit of fibonacci(60%60);
Last digit of  fibbonacci(61) = last digit of fibonacci(61%60);
Last digit of  fibbonacci(62) = last digit of fibonacci(62%60);
Last digit of  fibbonacci(125) = last digit of fibonacci(125%60);
And so on.
*/


#include <iostream>
#include <cassert>

int lastDigit_fibonacci(int n) {
    if(n<=1)
        return n;
    long long a=0, b=1, c=0;
    for(int i=2; i<=n; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return (int)(c%10);
}


int main() {
    int n = 0;
    std::cin >> n;
    std::cout << lastDigit_fibonacci(n%60) << '\n';
    return 0;
}
