#include <iostream>

using namespace std;

int max(int arr[], int n, int x) {
	if (n <= 0) {
		cout << "Array vuoto!" << endl;
		return x; 
	}
	
	int massimo = arr[0]; 
	for (int i = 1; i < n; i++) {
		if (arr[i] > massimo) {
			massimo = arr[i];
		}
	}
	
	return massimo;
}

int main() {
	
	int vettore[] = {5, 12, 7, 3, 9};
	int dimensione = sizeof(vettore) / sizeof(vettore[0]);
	int x = 0; 
	
	int risultato = max(vettore, dimensione, x);
	cout << "Il valore massimo nell'array e: " << risultato << endl;
	
	return 0;
}
