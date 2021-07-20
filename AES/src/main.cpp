#include "m_header.hpp"

// using name space
using namespace std;

int main(){
	// const 
	// should be in the header file
	const int block256_size = 256;

	// input text
	string plain_text("text");

	// block text
	string block256;
	block256.reserve(block256_size);

	block256 += plain_text;
	
	// test padding
	string padding_text(block256_size - plain_text.length(), 0x00);
	block256 += padding_text;

	// 

	return 0;

}
