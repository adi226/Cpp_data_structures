#ifndef TEST_H
#define TEST_H

class test
{
    public:
        test(int a,int b);
        ~test();
        void testfunc();
        void consttestfunc() const;
        void print();
    protected:

    private:
        int regvar;
        const int constvar;
};

#endif // TEST_H
