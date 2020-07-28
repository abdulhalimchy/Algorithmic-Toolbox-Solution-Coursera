/*::::::::::::________Author of the solution: ABDUL HALIM CHOWDHURY_______:::::::::::*/

#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string largest_number(vector<string> a)
{
    string result="";
    for(int i=0; i<a.size(); i++)
    {
        for(int j=0; j<a.size()-i-1; j++)
        {
            if(a[j+1]+a[j]>a[j]+a[j+1])
                swap(a[j+1], a[j]);
        }
    }
    for(int i=0; i<a.size(); i++)
        result+=a[i];
    return result;
}

int main()
{
    int n;
    cin >> n;
    vector<string> a(n);
    for (size_t i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }
    cout << largest_number(a);
}
