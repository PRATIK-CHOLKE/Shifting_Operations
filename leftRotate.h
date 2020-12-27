
void leftRotate(int A[], int n)
{
    int x = A[0], i;

    for (i = 0; i < n-1; i++)
    {
            A[i] = A[i + 1];
    }
    A[i] = x;
    for(i = 0; i < n; i++)
        std::cout << A[i] << " ";
}
