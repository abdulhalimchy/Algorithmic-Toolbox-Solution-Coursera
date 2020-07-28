/*::::::::::::________Author of the solution: ABDUL HALIM CHOWDHURY_______:::::::::::*/

#include <iostream>
#define ll long long
int gcd(int a, int b) {
  if(a==0)
    return b;
  return gcd(b%a,a);
}

long long lcm(int a, int b){
    return ((ll)a*(ll)b)/(ll)gcd(a,b);
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm(a, b) << std::endl;
  return 0;
}
