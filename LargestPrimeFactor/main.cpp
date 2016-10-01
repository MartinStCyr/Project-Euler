#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

/*
    This code finds the largest Prime Number Divisor of a number
*/
int main()
{
    vector<int> primeNumbers;
    primeNumbers.push_back(2);
    long long number = 600851475143;
    bool isPrime = true;
    double maxNumber = sqrt(number);
    int maxPrimeDivider = 1;
    //Let's find all prime numbers under sqrt(number)
    for(int i = 3; i <= maxNumber ; i+=2)
    {
        for(int j = 0 ; j< primeNumbers.size() && primeNumbers[j] < sqrt(i) ; j++)
        {
            if(i%primeNumbers[j] == 0)
            {
                isPrime=false;
                break;
            }
        }
        if(isPrime)
        {
            primeNumbers.push_back(i);
        }

        isPrime=true;
    }

    //Now that we know what all the prime numbers are, let's find the highest one that divide our number
    for(int i = primeNumbers.size() -1 ; i>= 0 ; i--)
    {
        if((long long)number % primeNumbers[i] == 0 )
        {
            maxPrimeDivider = primeNumbers[i];
            break;
        }
    }
    //Let's print the answer
    std::cout << "The max prime Divider is : " << maxPrimeDivider << std::endl;

    return 0;
}
