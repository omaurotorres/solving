void build_tower(unsigned n, char tower[n][2 * n - 1])
{
    int middle = n - 1;
    int start, end = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*n - 1; j++)
        {
            start = middle - (i+1);
            end = middle + (i+1);

            tower[i][j] = (start < j && j < end) ? '*' : ' ';
        }
    }
}
