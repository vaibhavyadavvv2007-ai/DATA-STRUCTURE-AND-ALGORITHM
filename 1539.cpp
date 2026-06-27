#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int main()
{
    vector<int> arr = {1,2,3,4};
    int k=2;
    unordered_set<int> s;
    int n = arr.size();
    for (int val : arr)
        s.insert(val);
    vector<int> missing={};
    for (int i = 1; i <= arr[n - 1]; i++)
    {
        if (s.find(i) == s.end())
            missing.push_back(i);
    }
    int m=missing.size();
    if(m<k){
        for(int i=arr[n-1];i<=arr[n-1]+k;i++){
            missing.push_back(i);
        }
    }
    cout<<missing[k];
}