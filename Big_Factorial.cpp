// #include <bits/stdc++.h>
#include<iostream>
#include <vector>
#include<deque>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v;
    v.push_back(1);

    for (int i = 2; i <= n; ++i)
    {
        for(auto it = v.begin(); it != v.end(); ++it){
            *it *= i;
        }

        for (int j = 0; j < v.size(); ++j)
        {
            if(v[j]<10){
                continue;
            }

            if (j == v.size()-1)
            {
                v.push_back(0);
            }

            v[j+1] += v[j]/10;
            v[j] %=10;
        }

    }
    for (int i = v.size()-1; i >=0; --i)
    {
        cout<<v[i];
    }
}
