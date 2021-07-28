#include<iostream>
using namespace std;
#define MAX 1000

//设计联系人结构体
struct Person
{
    string name;
    int sex;
    int age;
    string phone;
    string addr;
};

//设计通讯录结构体
struct Addressbook
{
    struct Person personArray[MAX];    
    int size;//the number of book
};


// show menu
void showMenu(){

    cout<<"1：添加联系人"<<endl;
    cout<<"2：显示联系人"<<endl;
    cout<<"3：修改联系人"<<endl;
    cout<<"4：删除联系人"<<endl;
    cout<<"5：查找联系人"<<endl;
    cout<<"6：清空联系人"<<endl;
    cout<<"7：退出联系人"<<endl;
    
}


void addPerson(Addressbook * ads){
    //增加联系人，修改实参
    //先判断通讯录是否已经满了
    if (ads->size > MAX){
        cout<<"通讯录满了"<<endl;
    }
    else{
        string name;
        cout << "请输入姓名"<<endl;
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
        cout<<"请选择"<<endl;
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

