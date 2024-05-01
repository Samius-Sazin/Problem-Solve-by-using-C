#include <bits/stdc++.h>
using namespace std;

vector<string> Words(string str) {
    string word;
    vector<string> words;

    for (int i = 0; i < str.length(); i++) {
        if (isalnum(str[i])) {
            word += str[i];
        }
        else if (!word.empty()) {
            words.push_back(word);
            word.clear();
        }
    }
    
    if (!word.empty()) {
        words.push_back(word);
    }

    return words;
}

int solve(string s1, string s2)
{

    vector<string> v1 = Words(s1);
    vector<string> v2 = Words(s2);

    // applying LCS
    int LCS[v1.size() + 1][v2.size() + 1];
    for (int r = 0; r <= v1.size(); r++) {
        for (int c = 0; c <= v2.size(); c++) {
            if (r == 0 || c == 0) {
                LCS[r][c] = 0;
            }
            else if (v1[r - 1] == v2[c - 1]) {
                LCS[r][c] = LCS[r - 1][c - 1] + 1;
            }
            else {
                LCS[r][c] = max(LCS[r - 1][c], LCS[r][c - 1]);
            }
        }
    }
    return LCS[v1.size()][v2.size()];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int count = 1;
    string s1, s2;
    while (getline(cin, s1) && getline(cin, s2)) {
        if (s1 == "" || s2 == "") {
            cout << setw(2) << right << count << ". Blank!" << endl;
        }
        else {
            cout << setw(2) << right << count << ". Length of longest match: " << solve(s1, s2) << endl;
        }
        count++;
    }
}