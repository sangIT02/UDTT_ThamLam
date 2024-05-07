#include<iostream>
using namespace std;

int main(){
	int n = 5;
	float tt[5] = {9,7,5,3,1};
	float kl;
	cout<<"Nhap Tong Khoi Luong: ";cin>>kl;
	int dem = 0;
	int i = 0;
	while(kl > 0 && i < 5){
		dem++;
		kl -= tt[i];
		i++;
		
	}
	cout<<dem;
	return 0;
}