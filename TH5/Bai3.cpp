#include<iostream>
using namespace std;

struct Time{
	float begin;
	float end;
};

int Count(Time t[],float t_begin[], float t_end[]){
	int dem = 1;
	t[0].begin = t_begin[0];
	t[0].end = t_end[0];

	int j = 0;
	for(int i = 1;i < 6;i++){
		if(t_begin[i] >= t_end[j]){
				t[dem].begin = t_begin[i];
				t[dem].end = t_end[i];
				dem++;
				j = i;
				
		}
	}
	return dem;
}



int main(){
	float t_begin[] = {1,3,0,5,8,5};
	float t_end[]   = {2,4,6,7,9,9};
	Time t[6];
	int dem = Count(t,t_begin,t_end);
	cout<<"So Luong Cong Viec Tuong Hop La: "<<dem<<endl;
	for(int i = 0;i < dem;i++){
		cout<<t[i].begin<<" "<<t[i].end<<endl;
	}

	return 0;
}