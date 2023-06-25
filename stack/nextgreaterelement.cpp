#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<long long> nextLargerElement(vector<long long> arr, int n)
{
    stack<long long> s;
    s.push(-1);
    // if arr is circular then add following few lines
   /* for (int i = 0; i < n; i++)
    {
        s.push(arr[n- i - 1]);
    }*/
    vector<long long> ans(n);

    for (long long i = n - 1; i >= 0; i--)
    {
        long long curr = arr[i];
        while (s.top() <= curr && s.top() != -1)
        {
            s.pop();
        }
        // ans is stack ka top
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}

int main(){
    vector<long long> v = {1, 3, 2, 4};
    vector<long long> a;
    a = nextLargerElement(v, 4);
    for (int i = 0; i < a.size();i++){
        cout << a[i] << endl;
    }
}