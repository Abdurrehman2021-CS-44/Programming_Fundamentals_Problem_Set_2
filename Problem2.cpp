#include<iostream>
using namespace std;

const int TOTAL_NUMBER = 100;
int num[TOTAL_NUMBER];
int peaks[TOTAL_NUMBER];
int NUM;

void numbers(){
    for(int i = 0; i < NUM; i++){
        cout << "Enter the number " << i+1 << ": ";
        cin >> num[i];
    }
}
void miniPeaks(){
    for(int i = 1; i < NUM-1; i++){
        if(num[i] > num[i-1] && num[i] > num[i+1]){
            peaks[i] = num[i];
        }
    }
    cout << "Peaks is ";
    for(int i = 1; i < NUM-1; i++){
        if(peaks[i] != 0){
            cout << peaks[i] << ",";
        }
    }
}

main(){
    cout << "Enter the size of array: ";
    cin >> NUM;
    numbers();
    miniPeaks();
    
}