 /*   
    What is armstrong number ?

    Ans: An Armstrong number (also known as a narcissistic number, 
    pluperfect digital invariant (PPDI) number, or plus perfect number)
    is a number that is equal to the sum of its own digits
    each raised to the power of the number of digits.


    Interesting Facts:
    1.All single-digit numbers (1-9) are Armstrong numbers.
    2.There are no 2-digit Armstrong numbers.
    3.The largest known Armstrong number has 39 digits (115132219018763992565095597973971522401).*/

#include<iostream>
using namespace std;

// This function is used to find the how many digits in a number.
int sizeOf(int n,int count)
{
    while (n)
    {
        count++;
        n = n/10;
    }

    return count;
    
}

// This function is used to find sqaure,cube and n^n of any digit or number.
int pow(int power,int digit)
{
    if(power == 0)
    return 1;

    for(int i=1;i<power;i++)
    {
        digit = digit*digit;
    }

    return digit;
}

int main()
{
    int number;
    cout<<"Enter the number: "<<endl;
    cin>>number;

    int count = 0;
    int originalNumber = number;
    int size = sizeOf(number,count);
    int sumOfdigits = 0;

    // This code of part is simply find sum of digits with their raised power of sizeOf number.
    while (number)
    {
        int digit = number%10;
        sumOfdigits = sumOfdigits+(pow(size,digit));
        number = number/10;
    }

    // it simply compare with originalNumber and calculated numbber
    if(sumOfdigits == originalNumber)
    cout<<"it is a armstrong number."<<endl;
    else
    cout<<"it is not a amstrong number.";
    
}

