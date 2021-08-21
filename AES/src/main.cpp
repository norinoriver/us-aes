#include "./inc/m_header.hpp"

// using name space
using namespace std;

int main(void){
	
	// input file system. open file
	string str = "../../test_files/sample.txt";
	ifstream file(str);

	// open failed
	if( !file.is_open() ){
		cout << "file open is faild." << endl;
		exit(0);
	}

	// ouput file system. open file
	ofstream ofs("../../test_files/sample_output.txt");
	ofs << "Hello.¥n";

	// cout << file.is_open() << endl;
	// file.close();
	/* -------------------------------------------- */
	 
	/* -------------------------------------------- */
	// // const 
	// // should be in the header file
	// const int block_byte_size = 16;
	// const int word_bit_size = 8;

	// // input text
	// string plain_text("text");

	// // block text
	// string block16;
	// block16.reserve(block_byte_size);

	// block16 += plain_text;
	
	// // test padding
	// if( block16.length() ){
	// 	string padding_text(block_byte_size - plain_text.length(), block_byte_size - plain_text.length());
	// 	block16 += padding_text;
	// }

	// // translate Decimal number to Binary number
	// string str[block16.length()];
	// for( int i = 0 ; i < (int)block16.length() ; i++ ){
	// 	int num = (unsigned int)block16[i];
	// 	// cout << num << endl;
	// 	string str_tmp;
	// 	str_tmp.reserve(word_bit_size);
	// 	while(1){
	// 		if( num % 2 == 0 ){
	// 			str_tmp = "0" + str_tmp;
	// 		}else{
	// 			str_tmp = "1" + str_tmp;
	// 		}
	// 		if( num < 2 ){
	// 			break;
	// 		}
	// 		num /= 2;
	// 	}
	// 	while( str_tmp.length() < word_bit_size ){
	// 		str_tmp = "0" + str_tmp;
	// 	}
	// 	str[i] = str_tmp;
	// }

	// // cout << endl;
	// // int to char
	// string itoc_str;
	// itoc_str.reserve(block_byte_size);
	// for( int i = 0 ; i < (int)block16.length() ; i++ ){
	// 	int tmp =  0;
	// 	for( int j = 0 ; j < (int)str[i].length() ; j++ ){
	// 		tmp += (str[i][j] == '0') ? 0 : pow(2, word_bit_size - (j + 1));
	// 	}
	// 	itoc_str[i] = tmp;
	// 	// cout << (char)itoc_str[i];
	// }

	// cout << itoc_str << endl;
	/* -------------------------------------------- */
	
	return 0;
}
