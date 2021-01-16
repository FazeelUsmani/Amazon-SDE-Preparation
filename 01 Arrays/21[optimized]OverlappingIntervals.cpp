#include <bits/stdc++.h>
using namespace std;

bool myCmp(pair<int, int> A, pair<int, int> B)
{
    return A.first < B.first;
}

vector<pair<int, int>> overlappedInterval(vector<pair<int, int>> vec, int n)
{

    if (n == 0)
    {
        return {{}};
    }
    if (n == 1)
    {
        return vec;
    }

    sort(vec.begin(), vec.end(), myCmp);
    int index = 0;

    for (int i = 1; i < n; ++i)
    {
        if (vec[index].second >= vec[i].first)
        {
            vec[index].first = min(vec[index].first, vec[i].first);
            vec[index].second = max(vec[index].second, vec[i].second);
        }
        else
        {
            index++;
            vec[index] = vec[i];
        }
    }

    int del = vec.size() - index - 1;

    int temp = 0;
    while (del--)
    {
        vec.pop_back();
    }

    return vec;
}

int main()
{
    vector<pair<int, int>> A{{1, 3}, {2, 4}, {6, 8}, {9, 10}};
    vector<pair<int, int>> ans;
    ans = overlappedInterval(A, 4);

    for (pair<int, int> x : ans)
    {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}