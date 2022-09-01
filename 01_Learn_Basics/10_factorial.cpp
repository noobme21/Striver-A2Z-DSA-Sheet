/*
    #Finding Factorial using Recursion

    GfG :: https://practice.geeksforgeeks.org/problems/find-all-factorial-numbers-less-than-or-equal-to-n3548/0?problemType=functional&difficulty%5B%5D=-1&page=1&query=problemTypefunctionaldifficulty%5B%5D-1page1
*/

int factorial(int n)
{
    if(n==0 or n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}