#include<stdio.h>
#include<math.h>

#define ll long long

ll  n,h;
ll prime[1000001];

ll sdg(ll n) {
	ll dem = 0;
	while (n != 0) {
		dem += n % 10;
		n /= 10;
	}	
	return dem;
}

void snt() {
	for (ll i = 0; i <= 1000000; i++) 
	prime[i] = 1;
	prime[0] = prime[1] = 0;
	for (ll i = 2; i <= 1000; i++) {
		if (prime[i]) {
			for (ll j = i*i; j <= 1000000; j+=i ) {
				prime[j] = 0;
			}
		}
	}
}

void solve()
{
	printf("Input n: ");
	scanf("%lld", &n);
	printf("Output h: ");
	scanf("%lld", &h);
	snt();
	for (ll i = 1; i <= n; i++) 
	{
		if (prime[i] == 1 && sdg(i) == h) 
		{
		  printf("%lld\n",i);
		}
	}
}

main() {
	solve();
}
