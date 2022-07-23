#include <iostream>
#include <vector>
#include "parse.h"

int main() {

	std::vector<std::string> words;
	
	//parse_words(words, " string 'hello world'; ");

	
	
	parse_words(words,"input.txt");

	std::cout << "size of words = " << words.size() << std::endl;
	//testing stuff 
	for (int x = 0; x < words.size(); x++) {


		std::cout << words[x] << std::endl;
	}
	
}