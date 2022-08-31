/*
        #Palindrome Number

        Leetcode (Problem 9) :: https://leetcode.com/problems/palindrome-number/
        GfG :: https://practice.geeksforgeeks.org/problems/palindrome0746/1

*/

bool isPalindrome(int x)
{

    int num = x;
    long reverse = 0;
    if (x < 0)
        return false; // if number is negative its reverse can't be the same
    while (num > 0)
    {
        reverse = (reverse * 10) + num % 10;
        num = num / 10;
    }
    return x == reverse;//if both are same then a true will be returned else false
}gg