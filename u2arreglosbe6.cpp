#include <iostream>
using namespace std;
int main(){
	int n;
	int matriz[100][100], espejo[100][100];
	cout<<"Ingrese numero de filas: ";
	cin>>n;
	cout<<"datos de matriz : "<<endl;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cin>>matriz[i][j];
		}
	}
	cout<<"matriz espejo: "<<endl;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			espejo[i][j]=matriz[i][n-j-1];
			cout<<espejo[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
