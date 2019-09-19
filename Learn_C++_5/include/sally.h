#ifndef SALLY_H
#define SALLY_H


using namespace std;

class sally
{
    public:
        sally();
        int num;
        sally(int);//note no need to declare the name of int in argument here
        sally operator+(sally);
};

#endif // SALLY_H
