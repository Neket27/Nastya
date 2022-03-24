#include "binarystring.h"

bool BinaryString::check()
{
    for (auto x : chars)
    {
        bool f = false;
        for (auto y : digits)
        {
            if (y == x) 
            {
                f = true;
                break;
            }

        }
        if (!f)
            return true;
    }
    return false;
}


void BinaryString::invers(char val)
{
    switch (val) {
    case '0':
        chars.push_back('F');
        break;
    case '1':
        chars.push_back('E');
        break;
    case '2':
        chars.push_back('D');
        break;

    case '3':
        chars.push_back('C');
        break;
    case '4':
        chars.push_back('B');
        break;
    case '5':
        chars.push_back('A');
        break;
    case '6':
        chars.push_back('9');
        break;
    case '7':
        chars.push_back('8');
        break;
    case '8':
        chars.push_back('7');
        break;
    case '9':
        chars.push_back('6');
        break;
    case 'A':
        chars.push_back('5');
        break;
    case 'B':
        chars.push_back('4');
        break;
    case 'C':
        chars.push_back('3');
        break;
    case 'D':
        chars.push_back('2');
        break;
    case 'E':
        chars.push_back('1');
        break;
    case 'F':
        chars.push_back('0');
        break;
    }
}


MyString BinaryString::inversion( const char* ptr)
{   
    add_chars(ptr);
   
   
    if (check() != true) {
        chars.clear();
       
            size_t i = 0;
            while (ptr[i] != '\0')
            {
                invers(ptr[i]);

                i++;
            }
           
            return chars;
        }
    
    chars.clear();
    chars.push_back('0');
    return chars;
}


void BinaryString::add_chars(const char *ptr)
{
    chars.clear();
    size_t i = 0;
    while (ptr[i] != '\0')
    {
        chars.push_back(ptr[i]);


        i++;
    }

}


void BinaryString::toZero()
{
   
    chars.clear();
    chars.push_back('0');
}


BinaryString::BinaryString() : MyString() 
{
  
}

BinaryString::BinaryString(const BinaryString& str) : MyString(str)
{
   
    if (check())
        toZero();
}

BinaryString::BinaryString(BinaryString&& str) : MyString(str)
{
    
    if (check())
        toZero();
}
BinaryString::BinaryString(const char* ptr) : MyString(ptr)
{
   
    if (check())// если check правда, то обнуляем
        toZero();
}
BinaryString::BinaryString(const vector<char>& chars) :MyString(chars)
{
   
    if (check())
        toZero();
}
istream& operator >>(istream& in, BinaryString& str) {
   
    string s;
    in >> s;
    str.chars.clear(); //очистка вектора символов
    for (auto x : s)
        str.chars.push_back(x);
    str.toZero();
    return in;
}



BinaryString::BinaryString(const char* ptr, const char* ptr2)

{
    cout << ptr << endl;
    cout << ptr2 << endl;







    

}



BinaryString& BinaryString::operator =(const BinaryString& str)
{
  
    

    cout << "CA" << endl;
    chars.clear();
    for (auto x : str.chars)
        chars.push_back(x);

    return *this;
}


BinaryString& BinaryString::operator =(BinaryString&& str)
{

    chars.clear();
    for (auto x : str.chars)
        chars.push_back(x);
    str.chars.clear();

    return *this;
}



