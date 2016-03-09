#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	//crescente
    int n = 7, aux = 0;
    int vetor[7] = {30,14,40,25,3,10,1};
    
    for (int i = 0; i < n -1; i++) {
    	for (int j = 0; j < (n-1); j++) {
    		if (vetor[j] > vetor[j+1]){
    			aux = vetor[j];
    			vetor[j] = vetor[j+1];
    			vetor[j+1] = aux;
			}
		}
	}
	
	//print crescente
	for (int i=0; i<n; i++) {
	  cout<<vetor[i]; 
	  if (i<n-1) cout<<",";
	}


    cout<<"\n";
    
    //Decrescente
    int n2 = 7, aux2 = 0;
    int vetor2[7] = {30,14,40,25,3,10,1};
    
    for (int i = 0; i < n2 -1; i++) {
    	for (int j = 0; j < (n2-1); j++) {
    		if (vetor2[j] < vetor2[j+1]){
    			aux2 = vetor[j];
    			vetor2[j] = vetor2[j+1];
    			vetor2[j+1] = aux2;
			}
		}
	}
	
	//print decrescente
	for (int i=0; i<n2; i++) {
	  cout<<vetor2[i]; 
	  if (i<n2-1) cout<<",";
	}
    

    
	return 0;
}
