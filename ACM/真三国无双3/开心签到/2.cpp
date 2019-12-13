#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t){
		--t;
		string a;
		cin>>a;
		if(a=="zero") cout<<"ling"<<endl;
		if(a=="one") cout<<"yi"<<endl;
		if(a=="two") cout<<"er"<<endl;
		if(a=="three") cout<<"san"<<endl;
		if(a=="four") cout<<"si"<<endl;
		if(a=="five") cout<<"wu\n";
		if(a=="six") cout<<"liu\n";
		if(a=="seven") cout<<"qi\n";
		if(a=="eight") cout<<"ba\n";
		if(a=="nine") cout<<"jiu\n";
		if(a=="ten") cout<<"shi\n";
	}
	return 0;
}
