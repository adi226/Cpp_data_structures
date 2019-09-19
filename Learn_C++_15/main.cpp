#include <iostream>
#include <string>
using namespace std;
//string functions
//whenever we enter cin to read data the end of input is determined by first whitespace characters and new line
int main()
{
   /* string aditya;
    cin>>aditya;
    cout<<"string i entered is "<<aditya;*/

    //to get entire line of data
    /*string x;
    getline(cin,x);//here end of line is end
    cout<<x<<endl;*/
  /*  string s1("hampster ");//passing string to constructor
    string s2;
    string s3;*/
//to copy string
/*    s2 = s1;
    s3.assign(s1);
    cout<<s1<<s2<<s3<<endl;
    //string are arrays of characters
    string s4 ("iamaditya");
    cout<<s4.at(3)<<endl;
    for (int x=0;x<s4.length();x++)
    {
        cout<<s4[x];
    }
    */
   /* string s1 ("oranges ");
 //   cout<<s1.substr(2,3)<<endl;//beginning and last
    string s2 ("apples ");
    cout<<s1<<s2<<endl;
    s1.swap(s2);
    cout<<s1<<s2<<endl;*/
  /*  string s1("i am aditya am");
    cout<<s1.find("am")<<endl;//give occurance of a substring
    cout<<s1.rfind("am")<<endl;//gives end of substring occurance*/

   /* string s1("hi am i going or ");
    s1.erase(1);
    cout <<s1<<endl;*/

    /*string s1("hi i am aditya");
    s1.replace(8,13,"ramanujan");
    cout<<s1<<endl;*/
    string s1("hi i am aditya");
    s1.insert(14," sharma");
    cout<<s1<<endl;
}
