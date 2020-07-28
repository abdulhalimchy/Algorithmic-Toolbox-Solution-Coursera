/*::::::::::::________Author of the solution: ABDUL HALIM CHOWDHURY_______:::::::::::*/

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int dist, int m, vector<int> & stops) {

    stops.push_back(dist);
    int cnt=0, a=0, fuel=m;
    for(int i=0; i<stops.size(); i++){
        int go=stops[i]-a;
        if(go<=fuel)
            fuel-=go;
        else if(go<=m)
        {
            fuel=m-go;
            cnt++;
        }
        else
            return -1;
        a=stops[i];
    }
    return cnt;
}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
