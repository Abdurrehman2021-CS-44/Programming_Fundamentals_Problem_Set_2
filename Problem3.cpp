#include<iostream>
using namespace std;
const int TOTAL_NUM = 100;
int num[TOTAL_NUM];
int count = 0; 
int size;
char a;
void numbers(){
    for(int i = 0; i < size; i++){
        cin >> num[i];
    }
}
void oddNumbers(){
    int idx;
    for(int i = 0; i < size; i++){
        count = 0;
        for(int j = i; j < size; j++){
            if(num[i] == num[j]){
                idx = i;
                count++;
            }
        }        
        cout << num[i];
    }
    if(count%2 != 0){
        cout << idx;
    }
}
main(){
    cout << "Enter the size of array.....";
    cin >> size;
    numbers();
    oddNumbers();
}