#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    string s1, s2;

    while(1) {
        cout << "++++++++++ CAL ++++++++++" << endl;
        cout << "Str1: ";
        cin >> s1;
        cout << "Str2: ";
        cin >> s2;

        cout << "Itv: " << endl;
        for(unsigned int i=0; i<s1.size(); ++i) {
            if(s1[i] >= '0' && s1[i] <= '9') {
                cout << (s2[i]-s1[i]+10)%10 << " ";
            }
            else if(s1[i] >= 'A' && s1[i] <= 'Z') {
                cout << (s2[i]-s1[i]+26)%26 << " ";
            }
            else if(s1[i] >= 'a' && s1[i] <= 'z') {
                cout << (s2[i]-s1[i]+26)%26 << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
