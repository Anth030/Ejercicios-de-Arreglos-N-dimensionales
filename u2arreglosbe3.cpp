#include<iostream>
using namespace std;
int main(){
	int n;
	int sumad1=0, sumad2=0, sumatotal;
	int matriz1[100][100];
	cout<<"Ingrese numero de filas: ";
	cin>>n;
	cout<<"matriz 1: "<<endl;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cin>>matriz1[i][j];
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if(matriz1[i]==matriz1[j]){
				sumad1+=matriz1[i][j];
				if(n%2==0)
				sumad2=matriz1[i][n-i-1];
				else{
					sumad2=matriz1[i][n-i-1]-matriz1[j][i];
				}
				sumatotal=sumad1+sumad2;
			}
		}
	}
	cout<<"suma de diagonal 1 es: "<<sumad1;
	cout<<"\n" "suma de diagonal 2 es: "<<sumad2;
	return 0;
}
