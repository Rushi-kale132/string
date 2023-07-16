#include <bits/stdc++.h>
using namespace std;

int leftmost(string &str)
{
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
                return i;
        }
    }
    return -1;
}

int main()
{
    string str = "aebbc";
    cout << leftmost(str);
    return 0;
}
