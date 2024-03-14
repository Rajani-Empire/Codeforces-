#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        int count=0,ans=0;
        for(int i=0; i<n; i++)
        {
            if(str[i]=='.')
            {
                count++;
                ans++;
                if(count==3) break;

            }


            else
            {
                count =0;
            }


        }


         if(count >=3) cout << "2" << endl;
         else cout << ans << endl;


    }


    return 0;
}
