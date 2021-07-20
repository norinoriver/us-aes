#include "m_header.hpp"

// using name space
using namespace std;

int main(){
	// const 
	// should be in the header file
	const int block128_size = 128;

	// input text
	string plain_text("text");

	// block text
	string block128;
	block128.reserve(block128_size);

	block128 += plain_text;
	
	// test padding
	string padding_text(block128_size - plain_text.length(), 0x00);
	block128 += padding_text;

	// 

	return 0;

}
