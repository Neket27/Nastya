#include <iostream>
#include "binarystring.h"
#include "mystring.h"
using namespace std;



int main()
{
    setlocale(LC_ALL, "ru");
   
    char a[80];
    cout << "¬ведите строку " << endl;
    cin.getline(a, 79);
    
    BinaryString inversions;
    inversions.inversion(a);
  
    cout << inversions;
    return 0;

}
