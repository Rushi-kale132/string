#include<bits/stdc++.h>
using namespace std;

int palidrome(string str)
{
    string rev = str;

    reverse(rev.begin(),rev.end());

    return(rev==str);
}

int main()
{
    string str ="abbab";
   cout<< palidrome(str);

}