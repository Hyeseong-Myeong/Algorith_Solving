#include <iostream>
#include <stack>
using namespace std;

stack <char> St;
string Num;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	int sttime = 0;

	while (1) {
		string ret = "yes";
		cin >> Num;
		if (Num == "0") {
			return 0;	
		}
		else {
			sttime = Num.size() / 2;
			for (int i = 0; i < sttime; i++) {
				St.push(Num[i]);
			}
			for (int i = 0; i < sttime; i++) {
				if (Num[Num.size() - sttime + i] == St.top()) {
					St.pop();
					continue;
				}
				else {
					ret = "no";
				}
			}
			cout << ret << endl;
			
		}
	}
}