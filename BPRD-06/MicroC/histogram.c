void histogram(int n, int ns[], int max, int freq[])
{
    int i;
    i = 0;

    int nsi;
    nsi = 0;
    
    while (i < n)
    {
        nsi = ns[i];
        freq[nsi] = freq[nsi]+1;
        i = i+1;
    }
}

void printarr(int len, int a[])
{
    int i; 
    i = 0; 
    while (i < len) { 
        print a[i]; 
        i=i+1; 
    }
}

void main()
{
    int n;
    n = 5;

    int max;
    max = 2;
    
    int ns[5]; //ns[n]
    ns[0] = 1;
    ns[1] = 2;
    ns[2] = 1;
    ns[3] = 0;
    ns[4] = 1;
    
    int freq[3];//freq[max+1]

    //could be a loop
    freq[0] = 0;
    freq[1] = 0;
    freq[2] = 0;
    histogram(n, ns, max, freq);
    printarr(max+1, freq);
}