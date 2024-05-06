#include<iostream>
using namespace std ;

int main(){
	int dungtich;
	cout<<"Nhap Dung Tich Nuoc: ";
	cin>>dungtich;
	int n;
	cout<<"Nhap So Luong Chai: "; cin>>n;
	float dt[n];
	for(int i = 0;i < n;i++){
		cin>>dt[i];
	}
	int dem = 0;
	for(int i = 0;i < n;i++){
		if(dungtich >= dt[i]){
			dem++;
			dungtich -= dt[i];
		}
	}
	cout<<"So Chai Toi Da Duoc Do Day Nuoc La: "<<dem<<endl;
	
	return 0;
}
