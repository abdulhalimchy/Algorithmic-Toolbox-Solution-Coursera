/*::::::::::::________Author of the solution: ABDUL HALIM CHOWDHURY_______:::::::::::*/

#include <algorithm>
#include <iostream>
#include <climits>
#include <vector>

using namespace std;

struct Segment
{
    int start, end;
};

vector<int> optimal_points(vector<Segment> &segments)
{
    vector<int> points;

    for(int i=0; i<segments.size(); i++)
    {
        for(int j=0; j<segments.size()-i-1; j++)
        {
            if(segments[j+1].end<segments[j].end)
            {
                swap(segments[j+1], segments[j]);
            }
        }
    }

    int finish=-1;

    for (size_t i = 0; i < segments.size(); ++i)
    {
        if(segments[i].start>finish)
        {
            finish=segments[i].end;
            points.push_back(finish);
        }
    }
    return points;
}

int main()
{
    int n;
    cin >> n;
    vector<Segment> segments(n);
    for (size_t i = 0; i < segments.size(); ++i)
    {
        cin >> segments[i].start >> segments[i].end;
    }
    vector<int> points = optimal_points(segments);
    cout << points.size() << "\n";
    for (size_t i = 0; i < points.size(); ++i)
    {
        cout << points[i] << " ";
    }
}
