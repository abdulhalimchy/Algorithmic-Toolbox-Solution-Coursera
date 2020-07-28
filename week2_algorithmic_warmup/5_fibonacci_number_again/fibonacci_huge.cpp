/*::::::::::::________Author of the solution: ABDUL HALIM CHOWDHURY_______:::::::::::
    Here, Applying Matrix Exponential to find out the n'th fibonacci
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll mod;

void multiply(ll a[][2], ll b[][2])
{
    ll mul[2][2];
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<2; j++)
        {
            mul[i][j]=0;
            for (int k=0; k<2; k++)
                mul[i][j]=(mul[i][j]+((a[i][k]*b[k][j])%mod))%mod;
        }
    }

    //storing the multiplication result.
    for (int i=0; i<2; i++)
        for (int j=0; j<2; j++)
            a[i][j] = mul[i][j]%mod;
}

void nth_power(ll m[][2], ll n)
{
    if(n==0 || n==1)
        return;
    ll temp[][2]={{1, 1}, {1, 0}};
    nth_power(m, n/2);
    multiply(m, m);
    if(n%2==1)
        multiply(m, temp);
}

ll fibonacci(ll n)
{
    if(n<=1)
        return n;

    ll m[][2]={{1, 1}, {1, 0}};
    nth_power(m, n-1);
    return m[0][0]%mod; // (m[0][0]*1+m[0][1]*0)%mod;
}

int main()
{
    ll n;
    cin >> n >> mod;
    cout << fibonacci(n) << endl;
    return 0;
}
