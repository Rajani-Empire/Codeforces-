#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        int n; cin >> n;
        vector<int>vec(n);
        map<int,int>mp;

        for(int i=0;i<n;i++)
        {
            cin >> vec[i];
            mp[vec[i]]++;

        }

        if(mp.size()==1) cout << "Yes" << endl;
        else if(mp.size()>=3) cout << "No" << endl;

        else
        {
            vector<int>v;
            for(auto it : mp)
            {
                v.push_back(it.second);
            }

            int diff = abs(v[0]-v[1]);
            if (diff <=1 ) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }


    return 0;
}
