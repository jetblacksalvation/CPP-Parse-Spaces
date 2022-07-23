#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
void parse_words(std::vector<std::string>& PushTo,std::string filename) {


    //variables
    std::fstream file(filename);
    std::string tempstr;
    std::string text;
    size_t pos = 0;//dummy value, doesnt really matter 



    while (std::getline(file, tempstr)) {
        text += tempstr;
        text += " ";//just incase there are no spaces at the last thing 
        //parse_words(words, tempstr);

    }//accumilates/pushes all lines of text from file into one string, text

    //finds spaces and ignores/copies to vector 
    while ((pos = text.find(" ")) != std::string::npos) {//npos is just max string size :P
        //also props to the guy i stole the code from, it was dog shit so i changed it
        PushTo.push_back(text.substr(0, pos));
        text.erase(0, pos + 1);
       
        
    }
    for (int x = 0; x < PushTo.size(); x++) {//erases all instances of empty
        if (PushTo[x] == "") {
            PushTo.erase(PushTo.begin() + x);//this function is retarded, why can't a just SAY the index??
            //and in this use case wouldn't this delete the element after the empty element????
            //hate this shit
        }
    }
    return;


}