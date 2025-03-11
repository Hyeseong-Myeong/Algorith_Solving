#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool checkBracket(string strA) {
	stack <string> Bracket;

	for (int i = 0; i < strA.size(); i++) {
		if (strA[i] == '(') {
			Bracket.push("(");
		}
		else if (strA[i] == ')') {
			if (!Bracket.empty() && Bracket.top() == "(")
				Bracket.pop();
			else
				return false;
		}
		else if (strA[i] == '[') {
			Bracket.push("[");
		}
		else if (strA[i] == ']') {
			if (!Bracket.empty() && Bracket.top() == "[")
				Bracket.pop();
			else
				return false;
		}
		else
			continue;
	}
	if (Bracket.empty())
		return true;
	else
		return false;
}

int main() {
	string strA;

	while (true) {
		getline(cin, strA, '.');
		if (strA.size() == 1)
			break;
		if (checkBracket(strA))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}