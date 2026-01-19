#include <iostream>

using namespace std;

bool in_a_set(int arr[], int dim) {
	for(int i= 0; i < dim; i++){
		for(int j= i +1; j < dim; j++){
			if(arr[i] == arr[j]){
				return false;
			}
		}
	}
	return true;
}

int main(){
	
	int v[5] = {1, 3, 5, 3, 7};
	
	int dim = 5;
	
	bool risultato = in_a_set(v, dim);
	return risultato;
}
