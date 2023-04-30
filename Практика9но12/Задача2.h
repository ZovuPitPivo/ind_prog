#pragma once
#include <iostream>
#include <algorithm>

template <class T> void Swap(T& a, T& b) {
	T c = a;
	a = b;
	b = c;
}

template <class T> void Sort(T* h, int len) {
	int kol = 1;
	while (kol > 0) {
		kol = 0;
		for (int i = 0; i < len - 1; i++) {
			if (h[i] > h[i + 1]) {
				int a = h[i]; int b = a[i + 1];
				Swap(a, b);
				kol++;
			}
		}
	}
}
