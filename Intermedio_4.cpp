#include <iostream>

using namespace std;

bool presente(int arr[], int dim, int x) {
	for (int i = 0; i < dim; i++) {
		if (arr[i] == x) {
			return true;
		}
	}
	return false;
}
void aggiungi(int arr[], int &used, int dim, int x) {
	arr[used] = x;
	used++;
}

int main() {
	int v[5] = {1, 3, 6, 9, 8};
	int t[8] = {1, 2, 9, 6, 8, 3, 7, 4};
	int dst[5];
	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		if (presente(t,8, v[i])) {
			if (!presente(dst, 5, v[i])) {
				aggiungi(dst, cnt, 5, v[i]);
			}
		}
	}
	for (int i = 0; i < cnt; i++) {
		cout << dst[i] << " ";
	}
}
