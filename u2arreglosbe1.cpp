#include<iostream>
using namespace std;
int main(){
	int n;
	int matriz1[100][100], matriz2[100][100], product[100][100];
	cout<<"Ingrese numero de filas: ";
	cin>>n;
	cout<<"matriz 1: "<<endl;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cin>>matriz1[i][j];
		}
	}
	cout<<"matriz 2: "<<endl;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cin>>matriz2[i][j];
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			product[i][j]=matriz1[i][j]*matriz2[i][j];
		}
	}
	cout<<"el producto de matrices es: "<<endl;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cout<<product[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
