#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
//list of illegal symbols for identifiers
const char  Illegal[] = {'@','#','$','%','^','&','*', '/','-','+','=','.','<','>',';','(',')','[',']','{','}'};
//'/','-','+','=','.','<','>',';','(',')','[',']','{','}'

void parse_words(std::vector<std::string>& PushTo,std::string filename) {
    //i do not believe that i am using the word parse correctly
    //this function takes a referance to a string vector
    //and turns text into individual words wich are pushed to the vector
    //i dont know how to make this in C

    //variables
    std::fstream file(filename);//file
    std::string tempstr;//temporary string, only used down in getline
    std::string text;//unprossed text file
    size_t pos = 0;//the value for pos doesn't really matter, the point of it 
    // is to find the position of "illegal" characters 

   
    while (std::getline(file, tempstr)) {

       

        text += tempstr;
        text += " ";//just incase there are no spaces at the last thing 
        //parse_words(words, tempstr);

    }//accumilates/pushes all lines of text from file into one string, text
    tempstr = text;//use tempstr after ths 
    for (int x = 0; x < 21; x++) {


        while (int f = 0 ; f < tempstr.size();f++) {//npos is just max string size :P
        //also props to the guy i stole the code from, it was dog shit so i changed it

            
            text.erase(0, pos + 1);


        }

    }
    //finds spaces and ignores/copies to vector 
    while ((pos = text.find(" ")) != std::string::npos) {//npos is just max string size :P
        //also props to the guy i stole the code from, it was dog shit so i changed it
        
        PushTo.push_back(text.substr(0, pos));//wouldn't this copy 0 - pos constantly??? fucking retarded ass functions like this one make ppl hate c++
        text.erase(0, pos + 1);
        
        
    }
   

    
    for (int x = 0; x < PushTo.size(); x++) {//erases all instances of empty
        if (PushTo[x] == "") {
            //why it takes a iterator?????
            PushTo.erase(PushTo.begin() + x);//this function is , why can't a just SAY the index??
            //and in this use case wouldn't this delete the element after the empty element????
            //hate this shit
        }
    }
    //add code that seperates /,+,-,*,=,{,},<,>,(,),
    
    std::cout << "size of words " << PushTo.size()<<std::endl;
    return;


}

