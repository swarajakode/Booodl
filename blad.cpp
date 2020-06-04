#include<bits/stdc++.h>
#define ll long long
#define mem(a,b) memset(a,b,sizeof(a))
#define rep(g,i,n) for(int g=i; g<i; g++)
using namespace std;

int main() {
    int num;
    cin>>num;
  int rev=0,val;
   val = num;
   while(num > 0) {
      rev = rev * 10 + num % 10;
      num = num / 10;
   }
   if(val==rev)
      cout<<"true"<<endl;
   else
      cout<<"false"<<endl;
}

