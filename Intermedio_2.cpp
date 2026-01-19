#include <iostream>

using namespace std;

void passoavanti(int v[], int n) {
	if (n <= 0) return; 
	
	for (int i = n - 1; i > 0; i--) {
		v[i] = v[i - 1];
	}
	
	v[0] = 0;
}

int main() {
	
	int vettore[] = {1, 2, 3, 4, 5};
	int n = sizeof(vettore) / sizeof(vettore[0]);
	
	cout << "Vettore iniziale: ";
	for (int i = 0; i < n; i++) {
		cout << vettore[i] << " ";
	}
	cout << endl;
	
	passoavanti(vettore, n);
	
	cout << "Vettore dopo passo avanti: ";
	for (int i = 0; i < n; i++) {
		cout << vettore[i] << " ";
	}
	cout << endl;
	
	return 0;
}
