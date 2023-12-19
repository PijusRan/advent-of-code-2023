#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main(){
    ifstream df("input.txt");
    string s;
    int t1, t2, i; //temp numbers and index
    int sum = 0;

    while(df >> s){
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
