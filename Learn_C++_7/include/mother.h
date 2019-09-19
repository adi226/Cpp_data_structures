#ifndef MOTHER_H
#define MOTHER_H

using namespace std;
class mother
{
    public:
        mother();
        ~mother();
        int publicv;//other files have access to it

    protected://anything inside class has access, friend has access to it, derived class has access to it
        int protectedv;
    private:
        int privatev;//only this class has access to it
};

#endif // MOTHER_H
