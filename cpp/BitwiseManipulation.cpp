#include <bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int getIthBit(int n, int i){
    int mask= (1<<i);
    return (n & mask) > 0 ? 1 :0;
}

int clearIthBit(int &n, int i){
    int mask = ~(1<<i);
    n= n & mask;

    return n;
}

int32_t main()
{

#ifndef ONLINE_JUDGE
    freopen("../files/input.txt", "r", stdin);
    freopen("../files/output.txt", "w", stdout);
//     g++ .\new.cpp; .\new.exe
#endif

    int x = 0;
    cout <<x <<" Bitwise NOT is "<< (~x) <<endl;

cout<<"\n**********************************************************************************"<<endl;

    cout<<"Odd Even Using Bitwise" << endl;
    x=21;
//    check for the last digit if it is 1 then odd otherwise even
    if(x&1){
        cout<<x <<" is Odd" <<endl;
    }
    else{
        cout<<x <<"Even" <<endl;
    }

cout<<"\n**********************************************************************************"<<endl;

    cout<<"Get/Set/Clear/Update/ClearLastIBits/ClearRangeOfBits/ReplaceBits" <<endl;

    int n=5;
    int i=2;

    cout<< "Ith Bit of "<<n << " is " << getIthBit(n,i) <<endl;

    n=13;
    i=2;
    cout<< "After clearing "<<i<< "nd bit of "<< n << " the no formed is "<< clearIthBit(n,i);
}

