#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

int main()
{

    ifstream fin;
    ofstream fout;

    // fout.open("text.txt");
    // if(!fout){
    //     cout<<"file not created";
    // }
    // cout<<"enter line to be added in file:";
    // string line;
    // getline(cin,line);
    // fout<<line<<endl;

    // fout.close();

    fin.open("text.txt",ios::in);
    if(!fin){
        cout<<"file did not open";
    }
    while(fin){
        string line;
        getline(fin,line);
        cout<<line<<endl;
    }

    return 0;
}