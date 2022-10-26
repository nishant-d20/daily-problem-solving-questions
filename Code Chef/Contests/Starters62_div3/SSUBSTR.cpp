/*

https://www.codechef.com/START62C/problems/SSUBSTR

*/

// linkers , defines , constants

#include <bits/stdc++.h>
using namespace std;
#define int             long long int
#define lb             lower_bound
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
    int t;
    cin>>t;
    while(t--)
    {
        solution();
     
    }
    return 0;
}
//CODE STARTS HERE-----------------------------------------------------------

// time complexity O(n)
// space complexity O(n)

void solution()
{
     int n;
   cin>>n;
   string arr;cin>>arr;
   int ans=0;
   for(int i=0;i<n-1;i++)
   {
    if(arr[i+1]<arr[i])
        ans++;
   }
   co(ans);
}

//CODE ENDS HERE----------------------------------------------------------------------------------------------