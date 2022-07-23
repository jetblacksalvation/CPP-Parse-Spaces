#pragma once
#include <iostream>
#include <vector>
//recognized tokens 

std::vector<std::string> Tokens { "int","bool", "char","string" ,"if","while","elseif","else"};//eventually add more when u get better

//index 0 through 3 are dedicated to identfiers
//index 4 through end are dedicated to conditional statements



void tokenreader(std::vector<std::string>& words) {
	for (int x = 0; x < words.size(); x++) {
		for (int f = 0; f < Tokens.size(); f++) {
			//compares current word to all of the registed Tokens- token is vector for ease of adition
		}


		//seperate operators from words
		// +=/*%[]()
		//tokenloojker
	}



}

