#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a=224;
    int product=1;
    
    while(a!=0)
    {
    product=product*(a%10);
    a=a/10;
    }
    cout<<product;
    
}