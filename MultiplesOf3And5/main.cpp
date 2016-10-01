#include <iostream>
#include <vector>

using namespace std;

/*
    This code only adds every multiples of 3 and 5 under 1000
*/
int main()
{
    int maxValue = 1000;
    int total = 0;
    //Iterates through every int to check if they are multiples of 3 or 5
    for(int i=0; i < maxValue; i++)
    {
            if(i%3 == 0 || i%5 == 0 )
            {
                total+=i;
            }
    }
    std::cout<< total << std::endl;

    return 0;
}
