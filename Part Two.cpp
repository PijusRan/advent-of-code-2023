#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

string reformat(string s);

int main(){
    ifstream df("input.txt");
    string s;
    int t1, t2, i; //temp numbers and index
    int sum = 0;

    while(df >> s){
        //Turn word numbers to chars (reformat)
        s = reformat(s);

        //Finds first digit
        i = 0;
        while(true){
            if(isdigit(s[i])){
                t1 = s[i] - '0';
                break;
            }
            i++;
        }
        //Finds second digit
        i = s.length();
        while(true){
            if(isdigit(s[i])){
                t2 = s[i] - '0';
                break;
            }
            i--;
        }
        //Sum
        sum += t1*10 + t2;
    }

    cout << sum;
}

string reformat(string s){
    for(int j = 0; j < s.length(); j++){
        //Conditionals going by length of number
        string part;
        //three letters
        part = s.substr(j, 3);
        if(part == "one"){
            s[j] = '1';
        }
        else if(part == "two"){
            s[j] = '2';
        }
        else if(part == "six"){
            s[j] = '6';
        }

        //four letters
        part = s.substr(j, 4);
        if(part == "four"){
            s[j] = '4';
        }
        else if(part == "five"){
            s[j] = '5';
        }
        else if(part == "nine"){
            s[j] = '9';
        }

        //five letters
        part = s.substr(j, 5);
        if(part == "three"){
            s[j] = '3';
        }
        else if(part == "seven"){
            s[j] = '7';
        }
        else if(part == "eight"){
            s[j] = '8';
        }

        //one two three four five six seven eight nine
    }

    return s;
}
