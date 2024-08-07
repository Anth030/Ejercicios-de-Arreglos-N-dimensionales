#include <iostream>
using namespace std;
int main(){
	int n;
	int matriz[100][100], rotar[100][100];
	cout<<"Ingrese numero de filas: ";
	cin>>n;
	cout<<"datos de matriz : "<<endl;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cin>>matriz[i][j];
		}
	}
	cout<<"rotando 90º: "<<endl;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			rotar[i][j]=matriz[n-1-j][i];
			cout<<rotar[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
