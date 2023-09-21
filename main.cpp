#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int r, g, b; 
	cin >> r >> g >> b;
	int mi = min({r % 3, g % 3, b % 3});
	int s = (r % 3 == 2) + (g % 3 == 2) + (b % 3 == 2);
	int n = (r % 3 != 2) ? r : ((g % 3 != 2) ? g : b) ;
	cout << (r / 3 + g / 3 + b / 3 + mi + (s == 2) * (n % 3 == 0) * (n > 0));
}
