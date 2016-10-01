#include <iostream>
#include <string>
#include <sstream>

using namespace std;

/*
    This code finds the highest palindrome formed by the multiplication of 2 3-digits numbers
*/

string intToString(int value)
{
    ostringstream os;
    os << value;
    return os.str();
}

int main()
{
    int productValue;
    bool maxPalindromeFound = false;
    string stringValue = "";
    int maxValue = 0;
    for(int i=999; i >= 100 && !maxPalindromeFound ; i--)
    {
        for(int j= i; j>= 100; j--)
        {
            productValue = i*j;
            stringValue = intToString(productValue);
            if(stringValue == string(stringValue.rbegin(), stringValue.rend()))
            {
                if(productValue > maxValue)
                    maxValue = productValue;
            }
        }
    }
    std::cout << "The highest palindrome made of 2 3-digit numbers is : " << maxValue << std::endl;
    return 0;
}
