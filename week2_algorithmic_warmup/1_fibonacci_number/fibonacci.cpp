/*::::::::::::________Author of the solution: ABDUL HALIM CHOWDHURY_______:::::::::::*/

#include <iostream>
#include <cassert>

int fibonacci_fast(int n) {
    if(n<=1)
        return n;
    int a=0, b=1, c=0;
    for(int i=2; i<=n; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}


int main() {
    int n = 0;
    std::cin >> n;
    std::cout << fibonacci_fast(n) << '\n';
    return 0;
}
