#include "m_header.hpp"

// using name space
using namespace std;

int main(){
	// const 
	// should be in the header file
	const int block_byte_size = 16;

	// input text
	string plain_text("text");

	// block text
	string block16;
	block16.reserve(block_byte_size);

	block16 += plain_text;
	
	// test padding
	string padding_text(block_byte_size - plain_text.length(), 0x00);
	block16 += padding_text;
	
	// translate Decimal number to Binary number
	for( int i = 0 ; i < (int)block16.length() ; i++ ){
		int num = (int)plain_text[i];
		string str;
		str.reserve(8);
		while(1){
			if( num % 2 == 0 ){
				str = "0" + str;
			}else{
				str = "1" + str;
			}
			if( num < 2 ){
				break;
			}
			num /= 2;
		}

		while( str.length() < 8 ){
			str = str + "0";
		}
		cout << str << endl;
	}


	return 0;

}
