// Recursion on strings in c++, date - 12-09-2020

#include<iostream>

using namespace std;

int length(char s[])
{ if(s[0]=='\0'){
	return 0;
	}
 int smallSize = length(s+1);
 return(1+ smallSize);
}

int main(){
char str[100];
cin>>str;
int l = length(str);
cout<<l<<endl;


}
