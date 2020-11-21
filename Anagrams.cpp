// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/anagrams-651/description/

#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int solve(string s1, string s2){
    int ans = 0;

    int map[26] = {0};

    for (int i=0; i<s1.size(); i++){
        char ch = tolower(s1[i]);
        map[ch - 'a']++;
    }

    for (int i=0; i<s2.size(); i++){
        char ch = tolower(s2[i]);
        map[ch - 'a']--;
    }

    for (int i=0; i<26; i++){
        ans += abs(map[i]);
    }

    return ans;
}
int main()
{
    int n;
    cin >> n;

    while (n--) {
        string s1, s2;

        cin >> s1;
        cin >> s2;

        cout << solve(s1,s2) << endl;
    }
}

