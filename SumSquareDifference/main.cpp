#include <iostream>
#include <cmath>
using namespace std;

/*
    This code finds the difference between the squares of the sum and the sum of the squares
*/

int main()
{
    int maxValue = 100;

    int sumOfSquares = 0;
    //We know that the sum of 1 to n is n*(n+1)/2
    int squareOfSum = pow((double)(maxValue*(maxValue+1))/2,2);

    //Sum of Squares
    for(int i=1; i <= maxValue; i++)
    {
        sumOfSquares+= pow(i,2);
    }
    int difference = squareOfSum - sumOfSquares;
    cout << "The difference of the square of sum and the sum of squares is : " << difference << endl;


    return 0;
}
