
void leftshift(int A[], int n)
{
    int i;

    for (i = 0; i < n - 1; i++)
    {
        A[i] = A[i + 1];
    }
    A[i] = 0;
    for(i = 0; i < n; i++)
        std::cout << A[i] << " ";
}
