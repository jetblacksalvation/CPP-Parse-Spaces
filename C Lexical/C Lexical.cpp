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
		tempstr += " ";//just incase there are no spaces at the last thing 
		//parse_words(words, tempstr);
		
	}
	std::cout << tempstr << std::endl;
	parse_words(words, tempstr);
	for (int x = 0; x < words.size(); x++) {
		if (words[x] == "") {
			words.erase(words.begin()+x);//this function is retarded, why can't a just SAY the index??
			//and in this use case wouldn't this delete the element after the empty element????
			//hate this shit
		}
		std::cout << words[x] << std::endl;
	}
}