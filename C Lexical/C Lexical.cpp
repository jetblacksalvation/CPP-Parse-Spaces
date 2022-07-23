#include <iostream>
#include <vector>
#include "parse.h"
#include <string>
#include <fstream>
std::fstream file("input.txt");

std::string text;
int main() {
	int temp;
	std::vector<std::string> words;
	std::string tempstr;
	//parse_words(words, " string 'hello world'; ");
	// Use a while loop together with the getline() function to read the file line by line
	int tmep;
	while (std::getline(file, text)) {
		tempstr += text;
		tempstr += " ";
		//parse_words(words, tempstr);
		
	}
	std::cout << tempstr << std::endl;
	parse_words(words, tempstr);
	for (int x = 0; x < words.size(); x++) {
		std::cout << words[x] << std::endl;
	}
}