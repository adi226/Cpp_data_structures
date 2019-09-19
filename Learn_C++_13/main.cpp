#include <iostream>
//files
//making a custom file structure
#include <fstream>
using namespace std;

int main()
{
    //we need to create file object
   /* ofstream adityafile;//create file object
    adityafile.open("aadi.txt");
    //fstream adityafile("aadi.txt");
    //to check if a file is open
    if (adityafile.is_open()){
        cout<<"the file is open"<<endl;
    }
    else{
        cout<<"not open";
        }
    adityafile<<"I love food\n";
    adityafile.close();*/

//end of file marker - tells c++ where file ends
    ofstream thefile("players.txt");//ofstream to read data from file
    cout<<"enter players ID, name and money "<<endl;
    cout<<"press Ctrl+Z to quit"<<endl;
    //Ctrl+Z is end of line

    int idnumber;
    string name;
    double money;

    while(cin>>idnumber>>name>>money){//cin to get info from keyboard, ctrl+z is end of file
        thefile<<idnumber<<' '<<name<<' '<<money<<endl;
    }
    thefile.close();
//ifstream desconstructor automatically closes the file when end of file is reached
    ifstream afile("players.txt");//ifstream to read data from file
    int id;
    string nm;
    double mn;
    //when c++ goes through file it sees end of file marker and returns null pointer
    //files has file pointer and sees where C++ is in file
    while(afile>>id>>nm>>mn){//getting info from the file, when end of file occurs it will be null pointer and this condition is false
        cout<<id<<","<<nm<<","<<mn<<endl;
    }
}
