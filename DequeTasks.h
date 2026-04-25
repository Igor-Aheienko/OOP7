#pragma once
#include <deque>

template <typename T>
void removeMiddle(std::deque<T>& dq) {
    int size = dq.size();

    if (size == 0) return;

    if (size % 2 == 1) {
        dq.erase(dq.begin() + size / 2);
    } else {
        dq.erase(dq.begin() + size / 2 - 1, dq.begin() + size / 2 + 1);
    }
}