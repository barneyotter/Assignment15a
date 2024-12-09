// Maia Barnhart
// CIS 1202

#ifndef exceptions_h
#define exceptions_h

#include <exception>

class invalidCharacterException : public std::exception {
public:
    const char* what() const noexcept override {
        return "invalidCharacterException: start character is not a letter.";
    }
};

class invalidRangeException : public std::exception {
public:
    const char* what() const noexcept override {
        return "invalidRangeException: resulting character is out of valid range.";
    }
};

#endif /* exceptions_h */
