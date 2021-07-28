#include<iostream>
using namespace std;
#define MAX 1000


struct Person
{
    string name;
    int sex;
    int age;
    string phone;
    string addr;
};

struct Addressbook
{
    struct Person personArray[MAX];    
    int size;//the number of book
};


// show menu
void showMenu(){

    cout<<"1 add person"<<endl;
    cout<<"2 show person"<<endl;
    cout<<"3 edit person"<<endl;
    cout<<"4 delete person"<<endl;
    cout<<"5 find person"<<endl;
    cout<<"6 clear person"<<endl;
    cout<<"7 exit"<<endl;
    
}


void addPerson(Addressbook * ads){
   
    if (ads->size > MAX){
        cout<<"?"<<endl;
    }
    else{
        string name;
        cout << ""<<endl;
        cin >> name;
        ads->personArray[ads->size].name;
    }
    return;
}

int main(){
    int select = 0;
    Addressbook ads;
    ads.size = 0;//init the size of addressbook
   


    while(true){
        showMenu();
        cout<<""<<endl;
        cin>>select;
        switch (select)
        {
        case 1:
            addPerson(&ads);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            cout<<"good bye"<<endl;
            system("pause");
            return 0;
            break;
        default:
            break;
        }
    }
    system("pause");
    return 0;
}

