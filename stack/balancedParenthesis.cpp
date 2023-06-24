#include <bits/stdc++.h>
#include<string>
using namespace std;

bool isValidparen(string x){
    if (x[0] == '}' || x[0] == ')' || x[0] == ']')
        return false;
    stack<int> s;
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] == '{' || x[i] == '(' || x[i] == '[')
        {
            s.push(x[i]);
        }
        else
        {
            if (!s.empty())
            {
                char ch = x[i];
                if ((ch == '}' && s.top() == '{') || (ch == ')' && s.top() == '(') || (ch == ']' && s.top() == '['))
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if (s.empty())
        return true;
    else
        return false;
}
int main()
{
    string s = "({[]}}";
    int ans = isValidparen(s);
    cout << ans << endl;
}
