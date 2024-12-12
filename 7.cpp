#include<iostream>
#include<map>
using namespace std;


int main(){
map <string,int> state;

state.insert(pair<string,int>("maharashtra",100));
state.insert(pair<string,int>("goa",102));
state.insert(pair<string,int>("bihar",110));
state.insert(pair<string,int>("manipur",150));
state.insert(pair<string,int>("jammu",50));

string key;
cout<<"enter state whose population is to be know: ";
cin>>key;
int found =0;
map<string,int>::iterator i;
for(i=state.begin();i!=state.end();i++){
    if(i->first==key){
        cout<<"population of "<<i->first<<" is "<<i->second<<endl;
        found=1;
        break;
    }
}
if(!found){
    cout<<"state not found";
}
 return 0;
}