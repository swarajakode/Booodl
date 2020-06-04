#include<bits/stdc++.h>
#define ll long long
#define mem(a,b) memset(a,b,sizeof(a))
#define rep(g,i,n) for(int g=i; g<n; g++)
#define F first
#define S second
#define PB push_back
#define MP make_pair
using namespace std;

int main(){
   int n,target;
   cin>>n>>target; int a[n];
   for(int i=0;i<n; i++){
    cin>>a[i];
   }
   vector<int>nums(a,a+n); map<int,int> mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]=i;

        vector<int> index;
        for(int i=0;i<nums.size();i++)
        {
            int key=target-nums[i];
            if(mp.find(key)!=mp.end() && mp.find(key)->second!=i)
            {
                index.push_back(i);
                index.push_back(mp[key]);
                break;
            }
        }
        for(int i=0;i<index.size(); i++){
            cout<<index[i]<<" ";
        }
}

