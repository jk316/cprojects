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
        cout<<"通讯录满了，无法添加"<<endl;
    }
    else{
        string name;
        cout << "input name "<<endl;
        cin >> name;
        ads->personArray[ads->size].name = name;
        
        int sex;
        while (true)
        {
            cout<<"1----male"<<endl;
            cout<<"2----female"<<endl;
            cout << "input："<<endl;
            cin >> sex;
            if(sex ==1 ||sex== 2){
                break;
            }
            cout<<"input error"<<endl;
        }
        ads->personArray[ads->size].sex = sex;

        int age;
        cout << "input age "<<endl;
        cin >> name;
        ads->personArray[ads->size].age = age;

        string phone;
        cout << "input phone "<<endl;
        cin >> phone;
        ads->personArray[ads->size].phone = phone;

        string addr;
        cout << "input addr "<<endl;
        cin >> addr;
        ads->personArray[ads->size].addr = addr;
        ads->size++;
       
        system("pause");
        system("cls");
        
    }
    return;
}

void showPerson(Addressbook * ads){
    //判断是否为0
    if (ads->size==0){
        cout<<"null"<<endl;
    }
    for(int i =0; i < ads->size;i++){
        cout<<"姓名："<<ads->personArray->name<<endl;
        cout<<"性别："<<ads->personArray->sex<<endl;
        cout<<"年龄："<<ads->personArray->age<<endl;
        cout<<"电话："<<ads->personArray->phone<<endl;
        cout<<"地址："<<ads->personArray->addr<<endl;
        cout<<"*****************\n"<<endl;
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
            showPerson(&ads);
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

