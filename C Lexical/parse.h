#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

//list of illegal symbols for identifiers
char Illegal[] = { '/','-','+','=','.','<','>',';'};
void error_read(std::string message) {
    std::cout << message << std::endl;
    exit(0);
}


void push_and_remove(std::vector<std::string>& words) {
    //list of 
    for (int x = 0; x < words.size(); x++) {//goes through all of the words,
        if (words[x].size() > 1) {//if the length of the word is bigger than nothing 

            for (int count_str = 0; count_str < words[x].size(); count_str++) {//iterate through the chars within the string 
                //count_str is the iterator for string
                int temp = 0;
                for (auto elem : Illegal) {

                    if (words[x][count_str] == elem) {
                        //remove and copy illegal character 
                        words[x].erase(words[x].begin() + count_str);
                        words.insert(words.begin() + x+1, &Illegal[temp]);//for some reason isnt counting from 0???

                    }
                    temp++;
                }

            }


        }
        else {
            //nothing
        }
    }
    
    return;
};
void parse_words(std::vector<std::string>& PushTo,std::string filename) {
    //i do not believe that i am using the word parse correctly
    //this function takes a referance to a string vector
    //and turns text into individual words wich are pushed to the vector
    //i dont know how to make this in C

    //variables
    std::fstream file(filename);//file
    std::string tempstr;//temporary string, only used down in getline
    std::string text;//unprossed text file
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
    //add code that seperates /,+,-,*,=,{,},<,>,(,),
    std::cout << "calling function\n";
    push_and_remove(PushTo);
    std::cout << "size of words " << PushTo.size()<<std::endl;
    return;


}

