#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {5, 4, 3, 2, 1};
    stack<int> s;
    vector<int> ans(nums.size(), 0);
    int n = nums.size();
    for (int i = 2 * n - 1; i >= 0; i--)
    {
        while (!s.empty() && nums[i % n] >= s.top())
        {
            s.pop();
        }
        ans[i % n] = s.empty() ? -1 : s.top();
        s.push(nums[i % n]);
    }
    for (int val : ans)
    {
        cout << val << " ";
    }
}