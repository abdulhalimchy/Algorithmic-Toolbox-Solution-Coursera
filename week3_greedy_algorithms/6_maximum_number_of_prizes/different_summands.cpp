/*::::::::::::________Author of the solution: ABDUL HALIM CHOWDHURY_______:::::::::::*/

#include <iostream>
#include <vector>

using std::vector;

vector<int> optimal_summands(int n)
{
    vector<int> summands;
    for(int i=1; ; i++)
    {
        if(i<=n)
            summands.push_back(i);
        else
        {
            summands[summands.size()-1]+=n;
            break;
        }
        n-=i;
    }
    return summands;
}

int main()
{
    int n;
    std::cin >> n;
    vector<int> summands = optimal_summands(n);
    std::cout << summands.size() << '\n';
    for (size_t i = 0; i < summands.size(); ++i)
    {
        std::cout << summands[i] << ' ';
    }
    return 0;
}
