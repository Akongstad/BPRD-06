//Micro-C program for exercise 7.2, question 2.


void squares(int n, int arr[])
{
    int i;
    for(i = 0; i<n ; i=i+1)
        arr[i] = i*i;
    
}

void arrsum(int n, int ar[], int *sump)//from 7.2.1
{
    int i;
    for(i=0 ; i<n ; i=i+1)
        *sump = *sump + ar[i];
}

void main(int n) {
    //could check for n>20
    
    int arr[20]; 
    squares(n, arr); //fills array, arr, with n square numbers.
    
    
    int sump;
    sump = 0;
    arrsum(n, arr, &sump);//call arrsum from exercise 7.2.1
    print sump;
}