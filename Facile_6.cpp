#include <iostream>

using namespace std;

int cerca(int v[], int dim, int x) {
	for (int i = 0; i < dim; i++) {
		if (v[i] == x) {
			return i;   
		}
	}
	return -1;  
}

int main() {
	int v[5] = {4, 7, 2, 9, 1};
	int dim = 5;
	int x = 7;
	
	int cerca1 = cerca(v, dim, x);
	
	if (cerca1 != -1) {
		cout << "Valore trovato in posizione: " << cerca1;
	} else {
		cout << "Valorw non presente nel vettore";
	}
	
	return 0;
}
