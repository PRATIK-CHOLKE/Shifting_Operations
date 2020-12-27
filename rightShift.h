
void rightShift(int A[], int n)
{
    int i;

    for(i = n - 1; i > 0; i--)
        A[i] = A[i - 1];
    A[i] = 0;

    for(i = 0; i < n; i++)
        std::cout << A[i] << " ";
}
