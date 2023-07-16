#include<bits/stdc++.h>
using namespace std;

int anagram(string str1,string str2)
{
    if(str1.length() != str2.length())
    {
        return 0;
    }
sort(str1.begin(),str1.end());
sort(str2.begin(),str2.end());

return(str1==str2);


   
}

int main()
{
    string str1 ="abbabc";
    string str2 ="abbcab";

 cout<<anagram(str1,str2);

}
