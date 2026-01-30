void insertHeap(int heap[], int *n, int value)
{
    int i;
    heap[*n] = value;
    i = *n;
    (*n)++;

    while (i != 0 && heap[(i-1)/2] < heap[i])
    {
        int temp = heap[i];
        heap[i] = heap[(i-1)/2];
        heap[(i-1)/2] = temp;
        i = (i-1)/2;
    }
}
