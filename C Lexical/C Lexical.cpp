#include <iostream>
#include <vector>
#include "parse.hpp"

int main() {
	std::vector<std::string> words;
	//parse_words(words, " string 'hello world'; ");
	parse_words(words,"input.txt");
	//testing stuff 
	for (auto it: words) {
		std::cout << it << std::endl;
	}
}