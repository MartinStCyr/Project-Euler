#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

/*
    This code finds the lowest number divisible by all numbers from 1 to 20
    Our number has to be divisable by all the prime numbers between 1 and 20.
*/

int main()
{
    int maxNumber = 20;
    vector<int> factors;
    factors.push_back(2);

    //Let's find all the prime numbers up to the maxNumber
    bool isPrime = true;
    for(int i = 3; i <= maxNumber ; i+=2)
    {
        for(int j = 0 ; j< factors.size() ; j++)
        {
            if(i%factors[j] == 0)
            {
                isPrime=false;
                break;
            }
        }
        if(isPrime)
        {
            factors.push_back(i);
        }

        isPrime=true;
    }


    /*Now that all prime numbers have been added, we can easily figure out which other factors are missing
    We only need to find out which number between 1 and 20 can't be obtained from the product of 2 numbers in the vector
    */
    for(int i=2; i <=maxNumber; i++)
    {
        int value=i;
        for(int j=0; j < factors.size() ; j++)
        {
            if(value%factors[j]==0)
            {
                value/=factors[j];
            }
        }
        if(value!=1)
        {
            factors.push_back(value);
        }
    }

    //Find the value of the lowest number which can be divided by all numbers
    int factor = 1;
    for(int i=0;i<factors.size();i++)
    {
        factor*=factors[i];
    }
    std::cout << "RESULT : "<<factor<<std::endl;

    return 0;
}
