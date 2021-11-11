#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	int n = s.size();
	// count leading zeroes
	int z1 = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '0') {
			z1++;
		} else {
			break;
		}
	}
	// count trailing zeroes
	int z2 = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (s[i] == '0') {
			z2++;
		} else {
			break;
		}
	}
	// if leading zeroes is greater than trailing zeroes, then answer is NO
	if (z1 > z2) {
		cout << "NO" << '\n';
		return 0;
	}
	// otherwise, check if the number is palindrome (not including leading & trailing zeroes)
	bool palindrome = true;
	for (int i = 0; i < (n - z2) / 2; i++) {
		palindrome &= (s[i] == s[(n - z2) - 1 - i]);
	}
	cout << (palindrome ? "YES" : "NO") << '\n';
	return 0;
}
