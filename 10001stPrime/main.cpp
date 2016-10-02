#include <iostream>
#include <vector>
using namespace std;

/*
    This code finds the n-th prime number
*/

int main()
{
    int nthPrimeNumber = 10001;
    vector<int> primeNumbers;
    primeNumbers.push_back(2);
    int i = 3;
    bool isPrime = true;
    do
    {
        for(int j=0; j< primeNumbers.size(); j++)
        {
            if(i%primeNumbers[j] == 0)
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime)
        {
            primeNumbers.push_back(i);
        }
        isPrime = true;
        i+=2;
    } while(primeNumbers.size() < nthPrimeNumber);

    cout << "The " << nthPrimeNumber << "th prime number is : " << primeNumbers[nthPrimeNumber-1] << endl;
    return 0;
}
