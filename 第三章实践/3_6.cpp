#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	
	vector<int> text = {1,2,3,4,5};
	auto sought = 2;
	auto beg = text.begin(),end = text.end();
	auto mid = beg + (end - beg)/2;
	
	while(mid != end && *mid != sought){
		if(sought < *mid)
		    end = mid;
		else
		    beg = mid + 1;
		mid = beg + (end - beg)/2;
	}
	
	if(mid != text.end())
		cout << "find it!   " << *mid << endl;
	else 
		cout <<"not find it" <<endl;
	
	
	return 0;
}