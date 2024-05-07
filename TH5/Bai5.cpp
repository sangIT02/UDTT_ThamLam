#include<iostream>
using namespace std;


struct Hang{
	float khoiluong;
	float kichthuoc;
};
int main(){
	float k;
	cout<<"Nhap Kich Thuoc Thung Xe: ";cin>>k;
	float khoiluong[] = {20,16,8};
	float kichthuoc[] = {14,10,6};
	Hang h[3];
	int j = 0;
	int dem = 0;
	for(int i = 2;i >= 0;i--){
		if(k >= kichthuoc[i]){
			dem++;
			k -= kichthuoc[i];
			cout<<khoiluong[i]<<" "<<kichthuoc[i]<<endl;
		}
	}
	cout<<dem;
	return 0;
}