/**
 * @file main.cpp
 * @author Jordan Chaplin (jchapuwf@gmail.com)
 * @brief This program takes in a vector of strings
 *        and returns the number of unique transformations
 *        when they are converted to morse code.
 * @version 0.1
 * @date 2024-06-20
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include <ctype.h>
#include <stdio.h>
#include <string>
#include <vector>

    int uniqueMorseRepresentations(std::vector<std::string>& words) {
        char c;
        std::string s{};
        std::vector<std::string> v;
        int transformations{};
        int iterations{};
        int eq{};

        for (std::string w : words) {
            for (int i{}; i < w.size(); i++) {

                switch (w[i]) {
                case 'a':
                    s += ".-";
                    break;
                case 'b':
                    s += "-...";
                    break;
                case 'c':
                    s += "-.-.";
                    break;
                case 'd':
                    s += "-..";
                    break;
                case 'e':
                    s += ".";
                    break;
                case 'f':
                    s += "..-.";
                    break;
                case 'g':
                    s += "--.";
                    break;
                case 'h':
                    s += "....";
                    break;
                case 'i':
                    s += "..";
                    break;
                case 'j':
                    s += ".---";
                    break;
                case 'k':
                    s += "-.-";
                    break;
                case 'l':
                    s += ".-..";
                    break;
                case 'm':
                    s += "--";
                    break;
                case 'n':
                    s += "-.";
                    break;
                case 'o':
                    s += "---";
                    break;
                case 'p':
                    s += ".--.";
                    break;
                case 'q':
                    s += "--.-";
                    break;
                case 'r':
                    s += ".-.";
                    break;
                case 's':
                    s += "...";
                    break;
                case 't':
                    s += "-";
                    break;
                case 'u':
                    s += "..-";
                    break;
                case 'v':
                    s += "...-";
                    break;
                case 'w':
                    s += ".--";
                    break;
                case 'x':
                    s += "-..-";
                    break;
                case 'y':
                    s += "-.--";
                    break;
                case 'z':
                    s += "--..";
                    break;
                default:
                    std::cout << "no valid letters read." << std::endl;
                }
            }
            v.push_back(s);
            s.erase(s.begin(), s.end());
        }
        std::string msg{};
        for (int i{}; i < v.size(); i++) {
            if(v.size() == 1){
                transformations = 1;
                break;
            }
            if(eq == v.size()){
                transformations = 1;
                break;
            }else{
                msg = v[i];
            }            
           for(std::string z: v){
            if(z == v[i]){
                eq++;
                continue;                
            }
            if(eq == v.size()){
                transformations = 1;
                break;
            }            
            else{
                eq = 0;
                transformations++;
                v[i] = z;
            }
           }
        }
    

    return transformations;
    }

int main(){

    std::vector<std::string> words;

     words.push_back("gin");
     words.push_back("zen");
     words.push_back("gig");
     words.push_back("msg");
    
    std::cout << "Unique transformations: " << uniqueMorseRepresentations(words) << std::endl;

    return 0;
}