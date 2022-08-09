void isKthBitSet(int n, int k)
{
    if (n & (1 << (k - 1)))
        cout << "SET";
    else
        cout << "NOT SET";
}
  
