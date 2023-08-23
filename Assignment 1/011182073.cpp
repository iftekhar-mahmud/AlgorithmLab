#include<bits/stdc++.h>
using namespace std;

#define print(a)        for (auto x : a) cout << x << " "; cout << endl
#define print_upto(a,n)        for(int i=0;i<n;i++)    cout<<a[i]<<" "; cout<<endl
#define take(x,n)           for(int i=0;i<n;i++)  cin>>x[i];

#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x,y) cout <<(#x)<<" is "<<(x)<<" and "<<(#y)<<" is "<<(y)<<"\n"

#define ll long long

int main() {

	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	ll t;
	cin >> t;

	while (t--) {

        ll n;
        cin>>n;

        ll a[n+1];
        ll e_sum=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(i%2==0)
                e_sum+=a[i];
        }

        ll max_diff_sum=0;
        ll pref_sum=0;
        for(ll i=1;i<n;i=i+2){
            pref_sum = max(pref_sum + a[i] - a[i-1] , 0ll);
            max_diff_sum = max(max_diff_sum,pref_sum);
        }

        pref_sum=0;
        for(ll i=1;i<n-1;i=i+2){
            pref_sum = max(pref_sum + a[i] - a[i+1] , 0ll);
            max_diff_sum = max(max_diff_sum,pref_sum);
        }
        cout<< e_sum + max_diff_sum <<"\n";
        
	}


	return 0;
}
