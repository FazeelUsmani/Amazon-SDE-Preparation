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
    stack<pair<int, int>> stk;
    stk.push(vec[0]);

    for (int i = 1; i < n; ++i)
    {
        pair<int, int> top = stk.top();
        if (top.second < vec[i].first)
        {
            stk.push(vec[i]);
        }
        else if (top.second < vec[i].second)
        {
            top.second = vec[i].second;
            stk.pop();
            stk.push(top);
        }
    }

    vector<pair<int, int>> ans;
    while (!stk.empty())
    {
        ans.push_back(stk.top());
        stk.pop();
    }

    vector<pair<int, int>> res;
    for (int i = ans.size() - 1; i >= 0; --i)
    {
        res.push_back(ans[i]);
    }

    return res;
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