#include<iostream>
using namespace std;

const int TOTAL_NUM = 100;
char Alpha[TOTAL_NUM];
int count = 0; 
int num;
char a;

int letterCounter(char a){
    for(int i = 0; i < num+1; i++){
        if(Alpha[i] == a){
            count++;
        }
    }
    return count;
}

main(){
    cout << "Enter the size of array: ";
    cin >> num;
    for(int i = 0; i < num; i++){
        cout << "Enter the alphabet " << i+1 << ": ";
        cin >> Alpha[i];
    }
    cout << "Enter the alphabetc which you want to count in the array: ";
    cin >> a;
    int times = letterCounter(a);
    cout << times;
}
