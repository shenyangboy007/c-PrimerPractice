#include <iostream>
using namespace std;

int main(){
	
   int ia[] = {0,1,2,3,4,5,6,7,8,9};
   int *beg = std::begin(ia);
   int *end = std::end(ia);
   
   while(beg != end && *beg >= 0){
   		++beg;
   }
   
   if(beg != end)
   		cout << *beg << endl;
   else
        cout << "not find!" <<endl;
        
   int ia02[] = {0,1,2,3,4,5,6,-1,8,9};
   int *beg02 = std::begin(ia02);
   int *end02 = std::end(ia02);
   
   while(beg02 != end02 && *beg02 >= 0){
   		++beg02;
   }
   
   if(beg02 != end02)
   		cout << *beg02 << endl;
   else
        cout << "not find!" <<endl;
	
	return 0;
}