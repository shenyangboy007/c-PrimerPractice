#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	vector<unsigned> grades;
	
	vector<unsigned> scores(11,0);
	
	unsigned grade;
	while(cin >> grade){
		if(grade <= 100){
			grades.push_back(grade);
		}
		++scores[grade/10];
	}
	
	cout << "grades.size = " << grades.size() << endl;
	
	for(auto it: grades){
		cout << it <<" ";
	}
	cout << endl;
	
	cout << "scores.size = " << scores.size() << endl;
	
	for(auto it: scores){
		cout << it <<" ";
	}
	cout << endl;
	
	return 0;
}