void selection_sort(int *a, int size);

void selection_sort(int *a, int size)
{
    for (int i = 0; i < size - 1; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (a[j] < a[min])
                min = j;
        }
        swap(a[i], a[min]);
    }
}
