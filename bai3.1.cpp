#include <iostream>
using namespace std;
int giait(int n){
	long gt=1;
	for(int i=1;i<=n;i++){
		gt=gt*i;
	}
	return gt;
}
int main(){
	int n;
	cout<<"Nhap so nguyen n: ";
	cin>>n;
	float S;
	S=(float)(giait(n)+1)/giait(n+1);
	cout<<"S = "<<S;
	return 0;
	
}
