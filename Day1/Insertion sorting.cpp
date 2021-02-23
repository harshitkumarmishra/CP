#pragma GCC optimize("Ofast") 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define print(a) for(auto x:a)cout<<x<<" ";cout<<endl;
#define take(a) for (auto &x:a)cin>>x;
#define rsort(a) sort(a.begin(),a.end(),greater<int>())
#define debug(x) cerr <<"\n--------------"<< #x << " is " << x << "--------------\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL); 
template<class genType>
inline void scan(genType &x) 
{ 
    x = 0; 
    bool neg = 0; 
    register genType c = getchar_unlocked(); 
    if (c == '-') 
        neg = 1, c = getchar_unlocked(); 
    while ((c < 48) || (c > 57)) 
        c = getchar(); 
    for ( ; c < 48||c > 57 ; c = getchar_unlocked()); 
    for ( ; c > 47 && c < 58; c = getchar_unlocked() ) 
        x= (x << 3) + ( x << 1 ) + ( c & 15 ); 
    if (neg) x *= -1; 
} 
int main()
{
 
     #ifndef ONLINE_JUDGE
     freopen("in.txt","r",stdin);
     freopen("out.txt","w",stdout);
     #endif    
    fast;

    int a[6];
    take(a);
    int len = sizeof(a)/sizeof(a[0]);
    for(int j=1;j<len;j++)
    {
        int key =a[j];
        int i=j-1;
        // debug(i);
        // debug(a[i]);
        // debug(key);
        while((i>=0)&&(a[i]>key))
        {//    debug(i);
        //     debug(a[i]);
            a[i+1]=a[i];
            i=i-1;
        }
        a[i+1]=key;
        // print(a);

    }
    cout<<" Final answer=>";
    print(a);



    
return 0;
}

