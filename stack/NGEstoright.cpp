#include <bits/stdc++.h>
using namespace std;

vector<int> nextLargerElement(int n, vector<int> &arr, int queries, vector<int> &indices)
{
    // stack<int> s;
    // s.push(-1);
    vector<int> ans;

    for (int j = 0; j < queries; j++)
    {
        int count = 0;
        int curr = arr[indices[j]];
        for (int i = indices[j] + 1; i < n; i++)
        {
            if (arr[i] > curr)
                count++;
        }
        /* while(s.top()!=-1){
             if(s.top()>curr) {
                 count++;
                 s.pop();
             }
             else{
                 s.pop();
             }
         }*/

        ans.push_back(count);
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = 5;
    int queries = 2;
    vector<int> indices = {0, 5};
    vector<int> a;
    a = nextLargerElement(n, arr, queries, indices);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }
}