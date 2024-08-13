#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=2659211;
    int largest=0;
    while(n!=0)
    {
        int digit= n%10;
        largest=max(largest,digit);
        n/=10;
    }
    cout<<largest;
    
}