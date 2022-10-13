//Micro-C program for exercise 7.2, question 2.


void squares(int n, int arr[])
{
    int i;
    i = 0;
    while(i<n)
    {
        arr[i] = i*i;
        //print i*i;
        i = i + 1;
    }
    
}

void main(int n) {
    //could check for n>20
    int arr[20]; 
    squares(n, arr); //fills array, arr, with n square numbers.

    //call arrsum from exercise 7.2.1
    
}