// Maia Barnhart
// CIS 1202 501

#include <iostream>
#include "exceptions.h"

using namespace std;

char character(char start, int offset);

int main() {
    
    try {
        cout << "character('a', 1) = " << character('a', 1) << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
    
    try {
        cout << "character('a', -1) = " << character('a', -1) << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
    
    try {
        cout << "character('Z', -1) = " << character('Z', -1) << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
    
    try {
        cout << "character('?', 5) = " << character('?', 5) << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
    
    try {
        cout << "character('A', 32) = " << character('A', 32) << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
    
    return 0;
}
