#include<iostream>
using namespace std;

struct phone {
	int area=0;
	int exchange=0;
	int number=0;
};

int main(){
	phone mine , your;
	mine.area=212;
	mine.exchange=767;
	mine.number=8900;
	cout<<"Enter your area code, exchange, and number :";
	cin>>your.area>>your.exchange>>your.number;
		cout<<"My number is ("<<mine.area<<")"<<mine.exchange<<" "<<mine.number<<endl;
	cout<<"Your number is ("<<your.area<<")"<<your.exchange<<" "<<your.number;
	
	return 0;
}
