
#include <iostream>
using namespace std;
int main() {
    //O(n^3)
    string s="ram";
    for(int i=0;i<s.length();i++){
        for(int len=1;len<=s.length()-i;len++){
              cout<<s.substr(i,len)<<endl;
        }
    }
}
//-------------------------------------------------------------
#include <iostream>
using namespace std;
int main() {
    //O(n^2)
    string s="ram";
    for(int i=0;i<s.length();i++){
        string t="";
        for(int j=i;j<s.length();j++){
                t+=s[j];
            cout<<t<<endl;
        }
    }
}
//-------------------------------------------------------------
#include <iostream>
using namespace std;
int main() {
    O(n^3)
    string s="ram";
    for(int i=0;i<s.length();i++){
        for(int j=i;j<s.length();j++){
            for(int k=i;k<=j;k++){
                cout<<s[k];
            }
            cout<<endl;
        }
    }
}
