 long fatorial(int n)
{
    long water = 1;
    for (int i = 1; i <= n; i++)
    {
        water *= i;
    }
    return water;
}
