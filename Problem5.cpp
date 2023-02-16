#include<iostream>
using namespace std;
string wrd[4];
bool checkidentical(){
    if(wrd[0] == wrd[1] && wrd[0] == wrd[2] && wrd[0] == wrd[3]){
        return true;
    }
    else{
        return false;
    }
}
main(){
    for(int i = 0; i < 4; i++){
        string a = "";
        cout << "Enter a word or letters... : ";
        cin >> a;
        wrd[i] = a;
    }
    if(checkidentical()){
        cout << "All the word or letters are Identical";
    }
    else{
        cout << "All the word or letters are NOT Identical";
    }
}