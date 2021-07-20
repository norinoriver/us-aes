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
	cout << block16.length() << endl;

	return 0;

}
