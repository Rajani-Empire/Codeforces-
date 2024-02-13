#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin >> t;


    while(t--)
    {
      int n,k;
      cin >> n >> k;
 
      string str;
      char ch ='a';

      for(int i=0;i<k;i++)
      {
          str += ch;
          ch++;
      }


     string ans;
      for(int i=0;i<n;i++)
      {
          ans += str;

      }

      cout << ans << endl;

    }



    return 0;
}
