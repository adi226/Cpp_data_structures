#include <iostream>
#include <fstream>
using namespace std;

int getwhattheywant();
void displayitems(int x);
//main function
int main()
{
    int whattheywant;
    whattheywant = getwhattheywant();

    while(whattheywant != 4){
        switch(whattheywant){
        case 1:
            displayitems(1);
            break;
        case 2:
            displayitems(2);
            break;
        case 3:
            displayitems(3);
            break;
        }
        whattheywant = getwhattheywant();
    }
}

//getwhattheywant function
int getwhattheywant()
{
    int choice;
    cout<<"\n1 - just plain items"<<endl;
    cout<<"2 - helpful items"<<endl;
    cout<<"3 - harmful items"<<endl;
    cout<<"4 - quit items\n"<<endl;
    cin>> choice;
    return choice;
}

void displayitems(int x)
{
    ifstream objectfile("objects.txt");
    string name;
    double power;
    if(x==1){
        while(objectfile>>name>>power){
            if(power==0){
                cout<<name<<' '<<power<<endl;
            }
        }
    }
     if(x==2){
        while(objectfile>>name>>power){
            if(power>0){
                cout<<name<<' '<<power<<endl;
            }
        }
     }
      if(x==3){
        while(objectfile>>name>>power){
            if(power<0){
                cout<<name<<' '<<power<<endl;
            }
        }
      }
}
