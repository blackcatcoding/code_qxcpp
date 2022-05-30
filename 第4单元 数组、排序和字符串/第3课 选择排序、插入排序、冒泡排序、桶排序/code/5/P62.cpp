// √∞≈›≈≈–Ú ”≈ªØ∞Ê
#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e4 + 10;

int n;
int a[N];
int ans = 0;

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++) cin >> a[i];
  
  	for(int i = 1; i <= n - 1; i++){
    	bool flag = true;
      	for(int j = 1; j <= n - i; j++)
        	if(a[j] > a[j + 1]) swap(a[j], a[j + 1]), flag = false, ans++;
      	if(flag) break;
    }
      	
  	cout << ans << endl;
  
	return 0;
}
