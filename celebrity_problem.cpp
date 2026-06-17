#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> mat = {
        {1, 1, 0},
        {0, 1, 0},
        {0, 1, 1}};
    int cele = 0;
    int i = 0;
    int j = 0;
    stack<int> s;
    for (int i = 0; i < mat.size(); i++)
    {
        s.push(i);
    }
    while (s.size() > 1)
    {
        i = s.top();
        s.pop();
        j = s.top();
        s.pop();
        if (mat[i][j] == 0)
        {
            s.push(i);
        }
        else
            s.push(j);
    }
    cele = s.top();
    for (int i = 0; i < mat.size(); i++)
    {
        if ((i != cele) && (mat[i][cele] == 0 || mat[cele][i] == 1))
        {
            cout << -1;
            return -1;
        }
    }
    cout << cele;
    return cele;
}