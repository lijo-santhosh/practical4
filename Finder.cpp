// worked with johna 

#include "Finder.h"
#include <iostream>

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
    vector<int> result(s2.size());  

    size_t i;
    int index = 0;

    for (i = 1; i <= s2.size(); i++) {
        size_t found = s1.find(s2.substr(0, i),index);
        if (found != string::npos) {
            result[i-1] = found;
            index = result[i-1];
        } else {
             for (i; i <= s2.size(); i++) {
        result[i-1] = -1;
    }
            break;  
        }
    }

   

    
    

    return result;
}
