#include <iostream>

using namespace std;

int unione(int v[], int dimV, int t[], int dimT, int dst[]) {
	int k = 0; 
	
	for (int i = 0; i < dimV; i++) {
		bool trovato = false;
		for (int j = 0; j < k; j++) {
			if (v[i] == dst[j]) {
				trovato = true;
			}
		}
		if (!trovato) {
			dst[k] = v[i];
			k++;
		}
	}
	
	for (int i = 0; i < dimT; i++) {
		bool trovato = false;
		for (int j = 0; j < k; j++) {
			if (t[i] == dst[j]) {
				trovato = true;
			}
		}
		if (!trovato) {
			dst[k] = t[i];
			k++;
		}
	}
	
	return k;
}

int main() {
	int v[5] = {1, 2, 3, 4, 5};
	int t[5] = {3, 4, 6, 7, 1};
	int dst[10];
	
	int dimV = 5;
	int dimT = 5;
	
	int n = unione(v, dimV, t, dimT, dst);
	
	for (int i = 0; i < n; i++) {
		cout << dst[i] << " ";
	}
	
	return 0;
}
