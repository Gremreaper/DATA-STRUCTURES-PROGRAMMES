#include<bits/stdc++.h>
using namespace std;

class Resolution{
public:
    int longestsubstr(const string &s, int k){
        vector<int> freq(26, 0);
        int left = 0, maxlen = 0, maxfreq = 0;

        for(int right = 0; right < s.length(); right++){
            freq[s[right] - 'A']++;
            maxfreq = max(maxfreq, freq[s[right] - 'A']);

            while((right - left + 1) - maxfreq > k){
                freq[s[left] - 'A']--;
                left++;
            }

            maxlen = max(maxlen, right - left + 1);
        }
        return maxlen;
    }
};

int main(){
    Resolution r1, r2;

    int s1 = r1.longestsubstr("ABBA", 2);
    cout << s1 << endl;

    int s2 = r2.longestsubstr("ADBD", 1);
    cout << s2 << endl;
}