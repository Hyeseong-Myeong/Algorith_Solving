#include <iostream>
#include <map>
using namespace std;

map <string, string>sitepw;

int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int sitenum;
	int findnum;
	string site, pw;
	
	cin >> sitenum >> findnum;

	for (int i = 0; i < sitenum; i++) {
		cin >> site >> pw;
		sitepw.insert(make_pair(site, pw));
	}

	for (int i = 0; i < findnum; i++) {
		cin >> site;
		cout << sitepw[site] << "\n";
	}
	return 0;
}