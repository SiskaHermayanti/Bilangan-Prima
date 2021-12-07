#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	b=0;
	
	cout<<"Masukkan Angka : ";
	cin>>c;
	
	for(a=1; a<=c; a++){
		if(c%a==0)
		b++;
	}if(b==2){
		cout<<c<<" adalah bilangan prima";
	}else{
		cout<<c<<" bukan bilangan prima";
	}
	return 0;
}

