/*
         #Print all divisors of number N
*/

void print(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" "; // if n is divisible by i means it is divisible by i
        }
    }
}