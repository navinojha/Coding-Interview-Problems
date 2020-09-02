#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
    ll n;
    cin >> n;

    ll a[n];

    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll count1 = 0, count2 = 0, element1 = -1, element2 = -1;

    for(ll i = 0; i < n; i++)
    {
        if(a[i] == element1)
        {
            count1++;
        }

        else if(a[i] == element2)
        {
            count2++;
        }

        else if(count1 == 0)
        {
            count1++;
            element1 = a[i];
        }

        else if(count2 == 0)
        {
            count2++;
            element2 = a[i];
        }

        else
        {
            count1--;
            count2--;
        }
    }

    count1 = 0, count2 = 0;

    for(ll i = 0; i < n; i++)
    {
        if(a[i] == element1)
        {
            count1++;
        }

        else if(a[i] == element2)
        {
            count2++;
        }
    }
    
    if(count1 > n/3 && count2 > n/3)
    {
        cout << element1 <<" "<<element2;
    }
    else if(count1 > n/3 && count2 <= n/3)
    {
        cout << element1;
    }
    else if(count2 > n/3 && count1 <= n/3)
    {
        cout << element2;
    }
    else
    {
        cout << "No Majority Elements" << endl;
    }
    return 0;
}