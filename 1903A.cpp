#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;

   while(t--)
   {
       long n,k;
       cin >> n >> k;
       vector<long>vec;
       for(int i=0;i<n;i++)
       {
            int val;
            cin >> val;
            vec.push_back(val);
       }

       if(k>=2)
       cout << "YES" << endl ;


       else
       {
           vector<long>p=vec;
           sort(p.begin(),p.end());

           if(vec == p)
           {
               cout << "YES" << endl;
           }
           else
           {
               cout << "NO" << endl;
           }

       }
   }

    return 0;
}
