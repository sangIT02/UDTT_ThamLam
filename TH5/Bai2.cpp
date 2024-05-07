#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int d;
	cout<<"Nhap Tong Dung Tich: ";cin>>d;
	int dt[4] = { 1, 3, 5, 7};
	int dem  = 0;
	for(int i = 0;i < 4;i++){
		if(dt[i] <= d){
			d -= dt[i];
			dem++;
		}
	}
	cout<<"So Luong Chai Duoc Do Day La: "<<dem;
	return 0;
}