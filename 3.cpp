#include<iostream>
#include<string>

using namespace std;

class publication{
    string title;
    int price;
    public:
    void add(){
        cout << "Enter title" << endl;
        //importatn
        cin.ignore();
        getline(cin,title);
        cout << "Enter price" << endl;
        cin>>price;
    }
    void display(){
        cout<<"title"<<title<<endl;
        cout<<"price"<<price<<endl;
    }
};

class book:public publication{
    int pages;
    public:
   static int nobook;
    void add_book(){
        add();
        cout << "Ente number of pages" << endl;
        nobook++;
    }
    void display_book(){
        display();
        cout << "No of pages is: " << pages << endl;
    }
};
int book::nobook=0;

int main(){
    int yes=1;
    book b[10];
    while(yes){
        int choice;
        cout<<"1.enter book record"<<endl;
        cout << "2.display book record" << endl;
        cout << "3.Exit" << endl;
        cin>>choice;

        switch (choice)
        {
            case 1 :int n;
                cout<<"enter no of book to be added";
                cin>>n;
                for(int i=0;i<n;i++){
                    cout<<"informatino about book no"<<i+1;
                    b[i].add_book();
                }
                break;

            case 2:
            for(int i=0;i<b[i].nobook;i++){
                cout<<"book no: "<<i+1<<endl;
                b[i].display_book();
            }
            case 3:
                yes=0;
            
        default:
            break;
        }
    }

 return 0;
}