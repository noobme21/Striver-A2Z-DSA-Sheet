/*
        #GCD or HCF

        GfG :: https://practice.geeksforgeeks.org/problems/lcm-and-gcd4516/1

*/

// 1st : Using Euclidean’s  Theorem

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

// 2nd : Using C++ STL

int gcd(int a, int b)
{
    return __gcd(a,b); // GCD of two numbers
}


// TC : O(logn)
// SC : O(1)

