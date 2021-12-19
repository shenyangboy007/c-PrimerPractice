#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s("..Hello World!!!");
    decltype(s.size()) punct_cnt = 0;
    for(auto c : s){
    	if(ispunct(c)){
    		//统计string中的符号个数
    		++punct_cnt;
		}	    
	}
    cout << punct_cnt << " punctuation characters in " <<s<<endl;
    string orig = s;
    for(auto& c :s){
    	c = toupper(c);
	}
	cout << s <<endl;
	s = orig;
	decltype(s.size()) index = 0;
	
	while(index != s.size()&& !isspace(s[index])){
		s[index] = toupper(s[index]);
		++index;
	}
	
	cout << s <<endl;
    return 0;
}
