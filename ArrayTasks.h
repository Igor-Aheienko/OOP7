#pragma once
#include <array>
#include <cstddef>

template <typename T, size_t N>
void shiftRight(std::array<T, N>& arr, int k) {
    k = k % N;

    for (int step = 0; step < k; step++) {
        T last = arr[N - 1];

        for (int i = N - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        arr[0] = last;
    }
}