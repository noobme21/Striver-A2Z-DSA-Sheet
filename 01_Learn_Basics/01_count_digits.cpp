/*
    Given a number N. Count the number of digits in N which evenly divides N.

    You can get the Question [here](https://practice.geeksforgeeks.org/problems/count-digits5716/1).
*/

int evenlyDivides(int N)
{

    int copy = N;
    int count = 0;
    while (copy > 0)
    {
        int rem = copy % 10;
        if (rem != 0) // check if digit is zero
        {
            if (N % rem == 0) // if divisible then update count
                count++;
        }
        copy = copy / 10;
    }
    return count;
}