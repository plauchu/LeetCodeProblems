//
//  main.cpp
//  ExcelColumnNumber
//
//  Created by Rodrigo Plauchú on 17/10/21.
//

#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    string col = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    unordered_map<char, int>  cubeta;
    
    int i = 1;
    for(char c : col){
        cubeta[c] = i;
        i++;
    }
    
    for(char c : col){
        cout<<cubeta[c]<<endl;
    }
    
}
