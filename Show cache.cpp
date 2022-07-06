#include<iostream>
#include<iomanip>
#include<fstream>

using namespace std;

ifstream fin;

int main(){
    fin.open("Cache Memory.txt");
    int output;
    cout<<"\nCache Memory :\n";
    for(int i=1; i<=8; i++){
    for(int j=1; j<=8 ; j++){
    fin.read((char*)&output,sizeof(int));
    cout<<setw(5)<<output<<" ";
    }
    cout<<endl;
    }

    fin.close();
}
