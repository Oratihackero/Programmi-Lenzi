#include <iostream>

using namespace std;

int min(int v[], int n, int x) {
	if (n <= 0) {
		cout << "Array vuoto!" << endl;
		return x; 
	}
	
	int minimo = v[0]; 
	for (int i = 1; i < n; i++) {
		if (v[i] < minimo) {
			minimo = v[i]; 
		}
	}
	return minimo;
}

int main() {
	
	int arr[] = {5, 2, 8, 1, 9};
	int dim = sizeof(arr) / sizeof(arr[0]);
	int valoreDefault = 0;
	
	int risultato = min(arr, dim, valoreDefault);
	
	cout << "Il valore minimo nel vettore e: " << risultato << endl;
	
	return 0;
}
