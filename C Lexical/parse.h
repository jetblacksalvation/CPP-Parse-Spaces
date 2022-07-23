#pragma once
#include <iostream>
#include <vector>

void parse_words(std::vector<std::string>& PushTo, std::string text) {
    
    size_t pos = 0;
    while ((pos = text.find(" ")) != std::string::npos) {
        PushTo.push_back(text.substr(0, pos));
        text.erase(0, pos + 1);
       
        
    }
    return;


}