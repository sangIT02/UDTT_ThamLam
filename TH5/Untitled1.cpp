#include<iostream>
using namespace std;

int main(){
	int n = 6;
	int tien[] = {50,20,10,5,2,1};
	int m;
	cout<<"Nhap So Tien: ";cin>>m;
	int dem = 0;
	for(int i = 0;i < n;i++){
		dem += m/tien[i];
		cout<<tien[i]<<" 	"<<m/tien[i]<<endl;
		m %= tien[i];
	}
	cout<<"So Luong Tien Doi Duoc La: "<<dem;
	return 0;
}