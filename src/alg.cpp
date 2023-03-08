// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int left = 0;
    int right = size;
    int mid;
    int tmp_left, tmp_right;
    int res;
    while (left < right) {
        mid = (left + right) / 2;
        if (value > arr[mid]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    tmp_left = left;
    left = 0;
    right = size;
    while (left < right) {
        mid = (left + right) / 2;
        if (value < arr[mid]) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    tmp_right = right;
    res = tmp_right - tmp_left;
    return res;
}
