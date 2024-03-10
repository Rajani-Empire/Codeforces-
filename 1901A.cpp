#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        int n,x;
        cin >> n >> x;

        vector<int>vec;
        for(int i=0; i<n; i++)
        {
            int y;
            cin >> y;
            vec.push_back(y);
        }

        int mx=INT_MIN;


            for(int i=1; i<n; i++)
            {

                int diff =(vec[i]-vec[i-1]);
                mx=max(mx,diff);


            }




          mx = max(mx, vec[0] - 0); // Remove extra parenthesis
          mx=max(mx,2*(x-vec[n-1]));

          cout << mx << endl;







    }
    return 0;
}
