#include <iostream>

using namespace std;

bool equivalenti(int v1[], int n1, int v2[], int n2) {
	if (n1 != n2) {
		return false;
	}

	bool trovato[n2] = {false};
	
	for (int i = 0; i < n1; i++) {
		bool trovatoInV2 = false;
		for (int j = 0; j < n2; j++) {
			if (!trovato[j] && v1[i] == v2[j]) {
				trovato[j] = true;
				trovatoInV2 = true;
				break;
			}
		}
		if (!trovatoInV2) {
			return false; 
		}
	}
	
	return true; 
}

int main() {
	
	int v1[] = {1, 2, 3, 4};
	int v2[] = {4, 3, 2, 1};
	int n1 = sizeof(v1) / sizeof(v1[0]);
	int n2 = sizeof(v2) / sizeof(v2[0]);
	
	if (equivalenti(v1, n1, v2, n2)) {
		cout << "I vettori sono equivalenti!" << endl;
	} else {
		cout << "I vettori NON sono equivalenti!" << endl;
	}
	
	return 0;
}
