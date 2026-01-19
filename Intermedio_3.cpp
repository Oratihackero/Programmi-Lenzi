#include <iostream>

using namespace std;

void passoindietro(int v[], int n) {
	if (n <= 0) return; 
	
	for (int i = n - 1; i > 0; i--) {
		v[i] = v[i - 1];
	}
	
	v[0] = 0;
}

int main() {

	int v[] = {1, 2, 3, 4, 5};
	int n = sizeof(v) / sizeof(v[0]);
	
	
	cout << "Vettore iniziale: ";
	for (int i = 0; i < n; i++){
		cout << v[i] << " ";
	}
	cout << endl;
	
	
	passoindietro(v, n);
	
	
	cout << "Vettore dopo passoindietro: ";
	for (int i = 0; i < n; i++){
		cout << v[i] << " ";
	}
	cout << endl;
	
	return 0;
}
