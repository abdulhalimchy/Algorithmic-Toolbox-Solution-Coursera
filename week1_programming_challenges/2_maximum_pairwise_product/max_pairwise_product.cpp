/*::::::::::::________Author of the solution: ABDUL HALIM CHOWDHURY_______:::::::::::*/

#include<stdio.h>
#include<vector>
#define ll long long
using namespace std;

int main()
{
    int n, index_mx1=-1;
    scanf("%d", &n);
    vector<int> ara;
    for(int i=0; i<n; i++){
        int num;
        scanf("%d", &num);
        ara.push_back(num);
        if(index_mx1==-1 || ara[i]>ara[index_mx1])
            index_mx1=i;
    }

    int index_mx2=-1;
    for(int i=0; i<ara.size(); i++){
        if((index_mx2==-1 || ara[i]>ara[index_mx2]) && i!=index_mx1)
            index_mx2=i;
    }
    printf("%lld\n", (ll)ara[index_mx1]*(ll)ara[index_mx2]);
    return 0;
}
