#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class items{
    string name;
    int cost;
    int quantity;
    public:
    int code;
    items(){
        code=0;
        cost=0;
        quantity=0;
        
    }
    items(int code,string name,int cost,int quantity){
        this->code=code;
        this->name=name;
        this->cost=cost;
        this->quantity=quantity;
    }
    void add(int code, string name, int cost, int quantity)
    {
        this->code = code;
        this->name = name;
        this->cost = cost;
        this->quantity = quantity;
    }
    void display(){
        cout << code << "|" << name << "|" << cost << "|" << quantity<<endl;
    }
};

int main(){
    int yes=1;
    vector <items> v1;
    vector <int>codes;
    vector <items> sorted;
    // items t1(100,"pen",10,15);
    // items t2(110,"book",80,5);
    // codes.push_back(110);
    // codes.push_back(100);
    // v1.push_back(t2);
    // v1.push_back(t1);
    while(yes){
        string name;
        int code,cost,quantity;
        items item;
        int key;
        int choice;
        int found=0;
        cout<<"1.Enter item"<<endl;
        cout<<"2.Display item"<<endl;
        cout<<"3.search item with code"<<endl;
        cout<<"4.sort items according to code "<<endl;
        cout<<"5.exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"enter code: ";
                cin>>code;
                codes.push_back(code);
                cout << "enter name: ";
                cin.ignore();
                getline(cin,name);
                cout<<"enter cost: ";
                cin>>cost;
                cout<<"enter quantity: ";
                cin>>quantity;
                item.add(code,name,cost,quantity);
                v1.push_back(item);
                break;
            case 2:
            cout<<"code|name|cost|quantity"<<endl;
                for(int i=0;i<v1.size();i++){
                    v1[i].display();
                }
                break;
            case 3:
                cout<<"enter code which need to be searced: ";
                cin>>key;
                for (int i = 0; i < v1.size(); i++)
                {
                    if(v1[i].code==key){
                        cout<<"code found"<<endl;
                        v1[i].display();
                        found=1;
                        break;
                    }
                        
                }
                if(!found){
                    cout<<"code not found"<<endl;
                }
                break;

            case 4:
                sort(codes.begin(),codes.end());
                // for (int i = 0; i < codes.size(); i++){
                //     cout<<codes[i]<<" ";
                // }
                    for(int i=0;i<codes.size();i++){
                        for(int j=0;j<v1.size();j++){
                            if(codes[i]==v1[j].code){
                                sorted.push_back(v1[j]);
                                cout<<"here";
                            }
                        }
                    }
                    v1.clear();
                    v1=sorted;
                    break;
            case 5:
                yes=0;
                break;
        }
    }

 return 0;
}