#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
    int itv;
    string s1, s2;

    while(1) {
        cout << "++++++++++ GEN ++++++++++" << endl;
        s2 = "";
        cout << "Str: ";
        cin >> s1;
        cout << "Itv: ";
        for(unsigned int i=0; i<s1.size(); ++i) {
            cin >> itv;
            if(s1[i] >= '0' && s1[i] <= '9') {
                s2 += '0' + (s1[i] - '0' + itv) % 10;
            }
            else if(s1[i] >= 'A' && s1[i] <= 'Z') {
                s2 += 'A' + (s1[i] - 'A' + itv) % 26;
            }
            else if(s1[i] >= 'a' && s1[i] <= 'z') {
                s2 += 'a' + (s1[i] - 'a' + itv) % 26;
            }
        }

        cout << "Res: " << s2 << endl;
    }

    return 0;
}
