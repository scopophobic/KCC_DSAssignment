#include <bits/stdc++.h>
using namespace std;
 
typedef long long LL;
typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;
 
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FORSQ(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))
#define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
#define FOREACH(a, b) for (auto&(a) : (b))
#define REP(i, n) FOR(i, 0, n)
#define REPN(i, n) FORN(i, 1, n)
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define SQR(x) ((LL)(x) * (x))
#define RESET(a, b) memset(a, b, sizeof(a))
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define ALL(v) v.begin(), v.end()
#define ALLA(arr, sz) arr, arr + sz
#define SIZE(v) (int)v.size()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define SORTA(arr, sz) sort(ALLA(arr, sz))
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz))
#define PERMUTE next_permutation
#define TC(t) while (t--)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
 
void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
 
int bsearch(int arr[], int target, int hi, int lo){
    
    if (hi<lo){
        return hi;
    }
    int mid = lo + (hi-lo)/2;
    if (arr[mid]>target){
        return bsearch(arr, target, mid-1, lo);
    }else{
        return bsearch(arr, target, hi, mid+1);
    }
    
    return mid;
    
}
 
int main(){
    init_code();
    int n,k;
        
        cin>>n>>k;
        int arr[n],q[k];
        for(int i =0 ;i<n;i++) 
            cin>>arr[i];
        for(int j =0 ;j<k;j++) 
            cin>>q[j];
        // cout<<n<<" "<<k<<endl;
        // for(int i =0 ;i<n;i++) 
        //     cout<<arr[i];
        // cout<<endl;
        // for(int j =0 ;j<k;j++) 
        //     cout<<q[j];
        
        for(int i =0; i<k; i++){
             cout<<bsearch(arr, q[i],n-1, 0 )+1<<endl;
        }
    
    return 0;
}
