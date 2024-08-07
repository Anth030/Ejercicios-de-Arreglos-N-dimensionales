#include <iostream>
using namespace std;
int main(){
	int n,a,b;
	int matriz[100][100], interc[100][100];
	cout<<"Ingrese numero de filas: ";
	cin>>n;
	cout<<"datos de matriz : "<<endl;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cin>>matriz[i][j];
		}
	}
	cout<<"indique fila a cambiar(1era final=0): ";
	cin>>a;
	cout<<"con: ";
	cin>>b;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			interc[i][j]=matriz[i][j];
			if(i==a||i==b){
				interc[a][j]=matriz[b][j];
				interc[b][j]=matriz[a][j];
			}
			cout<<interc[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
