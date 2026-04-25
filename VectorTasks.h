#pragma once
#include <vector>

template <typename T>
void insertVector(std::vector<T>& v1, std::vector<T>& v2, int pos) {
    auto it = v1.begin() + pos;

    for (auto iter = v2.begin(); iter != v2.end(); ++iter) {
        it = v1.insert(it, *iter);
        ++it;
    }
}