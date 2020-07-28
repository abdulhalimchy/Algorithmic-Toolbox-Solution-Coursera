/*::::::::::::::::________Author of the solution: ABDUL HALIM CHOWDHURY_______:::::::::::*/

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
#define ll long long
using namespace std;
int fib_lastDigit[60];

void cal_lastdigit(){
    ll a=0, b=1, c=0;
    fib_lastDigit[0]=0;
    fib_lastDigit[1]=1;
    for(int i=2; i<60; i++){
        c=a+b;
        a=b;
        b=c;
        fib_lastDigit[i]=(int)(c%10);
    }
}

int fib_sum_square_lastdigit(ll n)
{
    cal_lastdigit();
    ll m=n/60, sum=0, rem=n%60;
    for(int i=1; i<60; i++)
    {
        sum+=(ll)fib_lastDigit[i]*fib_lastDigit[i]*m;
        sum%=10;
    }
    for(int i=1; i<=rem; i++)
        sum+=fib_lastDigit[i]*fib_lastDigit[i];
    return sum%10;
}


int main() {
    long long n = 0;
    cin >> n;
    cout << fib_sum_square_lastdigit(n) << endl;
    return 0;
}
