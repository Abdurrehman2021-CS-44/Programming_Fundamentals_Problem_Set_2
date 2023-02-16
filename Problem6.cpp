#include<iostream>
using namespace std;
int num[3];
int times;
void evenorodd(){
    for(int i = 0; i < 1; i++){
        for(int j = 0; j < times; j++){
            if(num[0]%2 == 0){
                num[0] = num[0]-2;
            }
            else{
                num[0] = num[0]+2;
            }
        }
        for(int k = 0; k < times; k++){
            if(num[1]%2 == 0){
                num[1] = num[1]-2;
            }
            else{
                num[1] = num[1]+2;
            }
        }
        for(int l = 0; l < times; l++){
            if(num[2]%2 == 0){
                num[2] = num[2]-2;
            }
            else{
                num[2] = num[2]+2;
            }
        }
        cout << num[0] << "," << num[1] << "," << num[2];       
    }
}
main(){
    for(int i = 0; i < 3; i++){
        int a = 0;
        cout << "Enter the number...";
        cin >> a;
        num[i] = a;
    }
    cout << "Enter the number of times you want to be done...";
    cin >> times;
    evenorodd();
}