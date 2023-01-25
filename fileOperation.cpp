#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    ofstream obj("code.txt");
    obj<<"this is the added text to the code file";
    obj.close();

    ifstream read("code.txt");
    getline(read, str);
    cout<<str<<endl;
    read.close();
    return 0;
}