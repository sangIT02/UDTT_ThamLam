#include<iostream>
using namespace std;


struct Chia{
	float t_begin;
	float t_end;
};
int main(){
	float time_begin[] = {0,2,5,5.5,9};
	float time_end[] = {3,4.5,6,6.5,10};
	int dem = 1;
	Chia cap[5];
	cap[0].t_begin = time_begin[0];
	cap[0].t_end = time_end[0];
	int length = 1;
	for(int i = 1;i < 5;i++){
		if(time_begin[i] >= time_end[i-1]){
			dem++;
			int j = i;
			cap[length].t_begin = time_begin[j];
			cap[length].t_end = time_end[j];
			length++;
		}
	}
	cout<<"So Cap Cong Viec Tuong Hop La: "<<dem<<endl;
	for(int i = 0;i < length;i++){
		cout<<cap[i].t_begin<<" - "<<cap[i].t_end<<endl;
		
	}
	return 0;
}
