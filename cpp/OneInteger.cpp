#include <bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main()
{

#ifndef ONLINE_JUDGE
    freopen("../files/input.txt", "r", stdin);
    freopen("../files/output.txt", "w", stdout);
//     g++ .\new.cpp; .\new.exe
#endif

  vector<int> nums = {5,6,4,8,9,2,3,1};

  sort(nums.begin(), nums.end());
  int sum;
  for(auto i = nums.begin();i != nums.end(); i++){
    sum=nums[*i];
  }


}