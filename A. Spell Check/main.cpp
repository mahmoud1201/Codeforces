#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define Created ios_base::sync_with_stdio(0);
#define By cin.tie(0);
#define Sofar cout.tie(0);
using namespace std;
using ll = long long;
using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair
const long long int MOD=1e9+7, OO=0x3f3f3f3f;
const long long int  LOO=0x3f3f3f3f3f3f3f3f;
const long double EPS=1e-8;   
int main()
{
    Created By Sofar
    int t;
    cin>>t;
    while(t--)
    {
        string Name = "Timru";
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n>5)
        {
            cout<<"NO\n";
            continue;
        }
        if(s == Name)
        {
            cout<<"YES\n";
            continue;
        }
        bool flag = true;
        while(next_permutation(all(Name)))
        {
            if(s == Name)
            {
                cout<<"YES\n";
                flag = false;
                break;
            }
        }
        if(flag)cout<<"NO\n";

    } 

    return 0;
}


