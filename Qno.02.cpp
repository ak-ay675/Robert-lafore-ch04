#include<iostream>
using namespace std;

struct quard {
	int p1=0;
	int p2=0;
};
int main(){
	quard particle1 , particle2;
	
	cout<<"Enter coordinates for p1: ";
	cin>>particle1.p1>>particle1.p2;
	cout<<"\nEnter coordinates for p2: ";
	cin>>particle2.p1>>particle2.p2;
	
	cout<<"Coordinates of p1+p2 are: "<<particle1.p1+particle2.p1<<" , "<<particle1.p2+particle2.p2;
	return 0;
}
