#pragma once

#include <vector>

template<class T>
void move_vectors(std::vector<T>& from, std::vector<T>& to) {
	to = std::move(from);
}