void bubble_sort(int *a, int size);

void bubble_sort(int *a, int size)
{
    for (int i = size - 2; i >= 0; i--) {
        int flag = 0;
        for (int j = 0; j <= i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                flag = 1;
            }
        }
        if (!flag)
            return;
    }
}
