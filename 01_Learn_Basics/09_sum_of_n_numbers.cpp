/*
    #Sum of 1st N Numbers using Recursion

    Gfg :: https://practice.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1

*/

// #Sum of N Numbers

int sum(int n)
{
    if (n == 1)
        return 1;

    return n + sum(n - 1);
}

// #Gfg Question

long long sumOfSeries(long long N)
{

    long num = ((N) * (N + 1)) / 2; //use cubic sum of n numbers formula recursion will take a lot time
    return num * num;

}