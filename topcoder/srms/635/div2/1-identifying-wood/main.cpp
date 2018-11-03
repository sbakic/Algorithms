#include <iostream>

using namespace std;

class IdentifyingWood{
public:
    string check(string s, string t){
        for (int i=0;i<s.length();i++){
            for (int j=i;j<t.length();j++){
                if(s[i]==t[j]){
                    if(j==t.length()-1){
                        return "Yep, it's wood.";
                    }
                    else{
                        break;
                    }
                }
                else{
                    s.erase(i--,1);
                    break;
                }
            }
        }

        if(s.compare(t)==0){
            return "Yep, it's wood.";
        }
        else{
           return "Nope.";
        }
    }
};
