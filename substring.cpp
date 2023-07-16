#include<bits/stdc++.h>

using namespace std;


int substring(string str1,int n , string str2, int m)
{
 int j=0;

 for(int i=0; i<n && j<m;i++)
 {
       if(str1[i]==str2[j])
       {
            j++;
       }
       if(m==j)
       {
        return 1;
       }
 }
 

    return 0;
}
int main()
{
    string str1 ="abbabc";
    string str2 ="abbc";

int n=str1.length();
int m=str2.length() ;
 cout<< substring(str1,n,str2,m);

}