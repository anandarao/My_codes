#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 100003
#define MOD 1000007

#define fin(i,a,n) for(i=a;i<=n;i++)
#define fde(i,a,n) for(i=n;i>=a;i--)

#define sd(a) scanf("%d",&a)
#define sld(a) scanf("%ld",&a)
#define slld(a) scanf("%lld",&a)
#define slf(a) scanf("%lf",&a)

#define pd(a) printf("%d",a)
#define pld(a) printf("%ld",a)
#define plld(a) printf("%lld",a)
#define plf(a) printf("%lf",a)
#define pn printf("\n")
#define ps printf(" ")

#define mp make_pair
#define pb push_back

int main()
{
    int t;
    sd(t);
    string a,b;
    int d;
    int c1[26],c2[26];
    while(t--)
    {
        cin>>a;
        cin>>b;
        sd(d);
        int i;
        fin(i,0,25)
            c1[i]=c2[i]=0;
        fin(i,0,a.size()-1)
            c1[a[i]-'a']++;
        fin(i,0,b.size()-1)
            c2[b[i]-'a']++;
        int sum=0;
        fin(i,0,25)
            sum += abs(c2[i]-c1[i]);
        if(sum<=d)
            printf("YES");
        else
            printf("NO");
        pn;
    }
    return 0;
}
