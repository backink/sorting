void insertion_sort(int *a, int size);

void insertion_sort(int *a, int size)
{
    for (int i = 1; i < size; i++) {
        int num = a[i];
        int j = i - 1;
        while (j >= 0 && num < a[j]) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = num;
    }
}
