#include<iostream>
#include<fstream>

using namespace std;

ofstream fout;

int main(){
    fout.open("Cache Memory.txt");
    int n=-1;
    for(int i=1; i<=16; i++){
    fout.write((char*)&n,sizeof(n));
    }

    fout.close();
}
