// https://www.codechef.com/LP1TO201/problems/VDATES


// linkers , defines , constants

#include <bits/stdc++.h>
using namespace std;
#define int             long long int
#define in(v,n)        for(int i=0;i<n;i++) cin>>v[i];
#define co(x)         cout<<x<<endl;
const string yes = "YES";
const string no = "NO";
void solution();
void YorN(bool ans)
{
    if(ans)
        {
            co(yes);
            
        }
    else 
        {
            co(no);
        }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    // your code goes here
    int t;
    cin>>t;

    while(t--)
    {
        solution();
     
    }
    return 0;
}




// CODE STARTS HERE-------------------------------------------------------------------------------------------
// time complexity :  O(n)
// space complexity : O(n)

void solution()
{
    int d,l,r;
    cin>>d>>l>>r;
    if(d>r)
   { co("Too Late");}
    else 
    if(d<l)
    {co("Too Early")}
    else 
    {co("Take second dose now")}
}
//CODE ENDS HERE----------------------------------------------------------------------------------------------