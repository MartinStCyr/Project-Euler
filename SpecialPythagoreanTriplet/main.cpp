#include <iostream>
#include <cmath>
using namespace std;

/*
    This code finds a pythagorean triplet which sums is sumValue
*/

int main()
{
    int sumValue = 1000;
    for(int a=0; a <= sumValue; a++)
    {
        for(int b=a; b<= sumValue; b++)
        {
			//We choose c=b+1 to ensure that it doesn't give us coordinates of type (0,x,x)
            for(int c=b+1; c<= sumValue; c++)
            {
                if(a*a+b*b==c*c && a+b+c == sumValue)
                {
                    cout << a << " " << b << " " << c <<endl;
                    cout << "The product of these coordinates is : " << a*b*c <<endl;
                }
            }
        }
    }
    return 0;
}
