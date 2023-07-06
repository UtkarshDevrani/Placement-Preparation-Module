ll countSubarray(int arr[], int n, int k)
{
    int j = 0;
    ll count = 0;
    while (j < n)
    {
        if (arr[j] > k)
        {
            count += (n - j);
        }
        else
        {
            int i = j + 1;
            while (i < n && arr[i] <= k)
            {
                i++;
            }
            if (i < n)
            {
                count += (n - i);
            }
        }
        j++;
    }
    return count;
}