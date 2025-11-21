#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int freq[256] = {0};  
    string q = "";      

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        freq[ch]++;
        q.push_back(ch); 

        while (!q.empty() && freq[q[0]] > 1) {
            q.erase(0, 1); 
        }

        if (q.empty()) cout << -1 << " ";
        else cout << q[0] << " ";
    }
    return 0;
}