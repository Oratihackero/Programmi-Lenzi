#include <iostream>

using namespace std;

int moda(int vett[], int n) {
	int maxCount = 0; 
	int mode = vett[0]; 
	
	for (int i = 0; i < n; i++) {
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (vett[j] == vett[i]) {
				count++;
			}
		}
		if (count > maxCount) {
			maxCount = count;
			mode = vett[i];
		}
	}
	
	return mode;
}

int main() {
	
	int n;
	
	cout << "Inserisci la dimensione del vettore: ";
	cin >> n;
	
	int vett[n];
	cout << "Inserisci gli elementi del vettore:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> vett[i];
	}
	
	int m = moda(vett, n);
	cout << "La moda del vettore e': " << m << endl;
	
	return 0;
}
