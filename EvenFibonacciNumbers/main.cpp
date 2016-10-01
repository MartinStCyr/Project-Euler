#include <iostream>
#include <vector>

using namespace std;

/*
    This code counts the sum of all even Fibonacci numbers under 4 000 000
*/
int main()
{
    vector<int> fibonacciNumbers;
    fibonacciNumbers.push_back(1);
    fibonacciNumbers.push_back(2);
    int total = 2;
    int nextFibonacciNumber = 3;
    do
    {
        //Find the next number
        nextFibonacciNumber = fibonacciNumbers[fibonacciNumbers.size()-2]+fibonacciNumbers[fibonacciNumbers.size()-1];
        //If it is even, sum it
         //Add the new number to the vector
        fibonacciNumbers.push_back(nextFibonacciNumber);
        if(nextFibonacciNumber % 2 == 0)
        {
            total += nextFibonacciNumber;
        }

    }while(nextFibonacciNumber <= 4000000);
    std::cout <<"The total value is : "<< total << std::endl;

    return 0;
}
