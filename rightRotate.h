
void rightRotate(int A[], int n)
{
    int i, x = A[n-1];

    for(i = n - 1; i > 0; i--)
        A[i] = A[i - 1];
    A[i] = x;

    for(i = 0; i < n; i++)
        std::cout << A[i] << " ";
}
