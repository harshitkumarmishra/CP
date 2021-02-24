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
int And(int x,int y){return x&y;}
int Or(int x,int y){return x|y;}
int Xor(int x,int y){return x^y;}
int Not(int x){return ~x; }
int Leftshift(int x,int y){return x<<y;}
int Rightshift(int x,int y){return x>>y;}
int CountSetBits(int x)
    {
        int count=0; 
        while(x>0)
        {
            count+=(x&1);
            x=x>>1;
        }
        return count;
    }
//odd or even =>if(n&1){Odd}     else(Even)
//a=11(1011) b=15(1111) Min. number of bits to change a->b == CountSetBits(a^b)

int main()
{
 
     #ifndef ONLINE_JUDGE
     freopen("in.txt","r",stdin);
     freopen("out.txt","w",stdout);
     #endif    
    fast;

cout<<And(5,7)<<endl;
cout<<Or(5,7)<<endl;
cout<<Xor(5,7)<<endl;
cout<<Not(5)<<endl;
cout<<Leftshift(5,4)<<endl;
cout<<Rightshift(10,2)<<endl;
cout<<CountSetBits(15)<<endl;

    
return 0;
}
