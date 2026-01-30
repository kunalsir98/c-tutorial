void heapify(int heap[], int n, int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if (l < n && heap[l] > heap[largest])
        largest = l;

    if (r < n && heap[r] > heap[largest])
        largest = r;

    if (largest != i)
    {
        int temp = heap[i];
        heap[i] = heap[largest];
        heap[largest] = temp;
        heapify(heap, n, largest);
    }
}
