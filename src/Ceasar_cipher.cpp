#include <iostream>
#include <cstdlib>
#include <string>
void caesar_encrypt(char* text, int n){
	char ch ;
	for(size_t i=0; text[i]!='\0'; ++i){
		ch = text[i]+n;
		if(ch>'z' ){
			ch='a'+ (ch-'z')-1;
		}
		if(ch<'a' && ch>'Z'){
			ch='A'+ (ch-'Z')-1;
		}
		text[i]=ch;
	}
	std::cout<<text;
}

int main (){
	char* str1 = new char[100];
	std::cout<<"Enter text:";
	std::cin>>str1;
	size_t code;
	std::cout<<"Enter code:";
	std::cin>>code;
	caesar_encrypt(str1,code);
	return 0;
}



