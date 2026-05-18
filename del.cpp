#include<iostream>
using namespace std;
int table[10];

int main(){
    for(int i=0 ; i<10 ;i++){
        table[i] =-1;
    }
    int keys[] = {15,25,35,45};
    int n = sizeof(keys)/sizeof(keys[0]);

    for(int i=0 ; i<n;i++){
        int index = keys[i] % 10;
        int j = 0;
        while(table[(index+ j*j)%10] != -1){
            j++;
        }
        table[(index + j*j)%10] = keys[i];
    }
    
    for(int i=0 ;i<10;i++){
    cout<<"index "<<i<<": ";
        if(table[i] == -1){
            cout<< "empty";
        }else{
            cout<<table[i];
        }
        cout<<endl;
    }

}