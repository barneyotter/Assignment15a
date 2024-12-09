// Maia Barnhart
// CIS 1202 501

#include <cctype>
#include "exceptions.h"

using namespace std;

char character(char start, int offset) {
    if(!isalpha(static_cast<unsigned char>(start))) {
        throw invalidCharacterException();
    }
    
    bool isUpper = isupper(static_cast<unsigned char>(start));
    int startValue = static_cast<int>(start);
    int newValue = startValue + offset;
    char result = static_cast<char>(newValue);
    
    if (isUpper) {
        if (result < 'A' || result > 'Z') {
            throw invalidRangeException();
        }
    } else {
        if (result < 'a' || result > 'z') {
            throw invalidRangeException();
        }
    }
    
    return result;
}
