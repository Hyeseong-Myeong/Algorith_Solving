#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

map <string, int> Poket;
vector <string> V;
int n, m;

void input() {
	string name;
	for (int i = 1; i <= n; i++) {
		cin >> name;
		Poket.insert(make_pair(name, i));
		V.push_back(name);
	}
}

void Quiz() {
	string Q;
	map <string, int>::iterator it;
	for (int i = 0; i < m; i++) {
		cin >> Q;
		if (Q >= "A") {
			it = Poket.find(Q);
			cout << it->second << '\n';
		}
		else {
			cout << V[stoi(Q) - 1] << '\n';
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	cin >> n >> m;
	input();
	Quiz();

}