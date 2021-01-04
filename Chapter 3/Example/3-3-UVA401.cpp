#define LOCAL
#include <iostream>
#include <map>
#include <string>
using namespace std;
map<char,char> revs;
string s;
int p=1,q=1;
const string str[]={"not a palindrome", "a regular palindrome", "a mirrored string","a mirrored palindrome"};
inline void init() {
    revs['0']='0';
    revs['A']='A';
    revs['E']='3';
    revs['H']='H';
    revs['I']='I';
    revs['J']='L';
    revs['L']='J';
    revs['M']='M';
    revs['O']='O';
    revs['S']='2';
    revs['T']='T';
    revs['U']='U';
    revs['V']='V';
    revs['W']='W';
    revs['X']='X';
    revs['Y']='Y';
    revs['Z']='5';
    revs['1']='1';
    revs['2']='S';
    revs['3']='E';
    revs['5']='Z';
    revs['8']='8';
}
inline char rev(char r) {
    if (revs.count(r)>0)    
        return revs[r];
    else 
        return r;
}
int main() {
#ifdef LOCAL
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
    init();
    while (cin>>s) {
        int len=s.length();
        for (int i=0;i<(len+1)/2;++i) {
            if (s[i]!=s[len-i-1]) 
                p=0;
            if (s[i]!=rev(s[len-i-1])) 
                q=0;
        }
        cout<<s<<" -- is "<<str[p+2*q]<<"."<<endl<<endl;
        p=1;q=1;
    }
    return 0;
}