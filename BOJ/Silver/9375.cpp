#include <iostream>
#include <vector>
using namespace std;

vector <vector <string>> cat;

int solve() {
	int ret = 1;
	int num = cat.size();
	for (int i = 0; i < num; i++) {
		ret = ret * (cat[i].size());
	}
	return ret - 1;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	int tnum, cnum;
	string name, catname;

	cin >> tnum;
	for (int i = 0; i < tnum; i++) {
		cat.clear();
		cin >> cnum;
		for (int j = 0; j < cnum; j++) {
			cin >> name >> catname;
			if (cat.size() == 0) {
				cat.resize(1);
				cat[0].push_back(catname);
				cat[0].push_back(name);
				continue;
			}
			else {
				bool inputed = false;
				for (int k = 0; k < cat.size(); k++) {
					if (cat[k][0] == catname) {
						cat[k].push_back(name);
						inputed = true;
						break;
					}
				}
				if (!inputed) {
					cat.resize(cat.size() + 1);
					cat[cat.size() - 1].push_back(catname);
					cat[cat.size() - 1].push_back(name);
				}
			}
		}
		cout << solve() << endl;
		
	}
}