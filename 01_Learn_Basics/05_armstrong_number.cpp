/*
    #For a given 3 digit number, find whether it is armstrong number or not. An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. Return "Yes" if it is a armstrong number else return "No".

    GfG :: https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1

*/

string armstrongNumber(int n)
{

    int copy = n;
    int ans = 0;
    while (copy > 0)
    {
        int rem = copy % 10;
        ans += rem * rem * rem;
        copy /= 10;
    }
    if (ans == n)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}
