#include<iostream>
using namespace std;

int main(){
	int tien[] = {50,20,10,5,2,1};
	int n;
	cout<<"Nhap So Tien Can Doi: ";
	cin>>n;
	int dem = 0;
	for(int i = 0;i < 6;i++){
		dem += n/tien[i];
		n %= tien[i];
	}
	cout<<dem;
	return 0;
}
