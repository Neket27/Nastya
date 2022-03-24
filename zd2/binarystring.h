#ifndef BINARYSTRING_H
#define BINARYSTRING_H
#include "mystring.h"

class BinaryString : public MyString
{
private:
    bool check();
    void toZero();
    void add_chars(const char *ptr);
    void invers(char val);
    const vector<char>digits = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
public:
    MyString inversion(const char* ptr);
    BinaryString();
    BinaryString(const BinaryString& str);
    BinaryString(BinaryString&& str);
    BinaryString(const char* ptr);
    BinaryString(const vector<char>& chars);
    BinaryString(const char* ptr, const char* ptr2);
    BinaryString& operator =(const BinaryString& str);
    BinaryString& operator =(BinaryString&& str);


    friend istream& operator >>(istream& in, BinaryString& str);
};
istream& operator >>(istream& in, BinaryString& str);
#endif // BINARYSTRING_H
