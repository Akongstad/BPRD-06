int arr[4];

void main()
{
    int sump;
    sump = 0;
    //fill a
    arr[0] = 7;
    arr[1] = 13;
    arr[2] = 9;
    arr[3] = 8;
    arrsum(4, arr, &sump);
    print sump;
}

void arrsum(int n, int arr[], int *sump)
{
    int i;
    i = 0;
    while (i < n)
    {
        *sump = *sump + arr[i];
        i = i+1;
    }
}