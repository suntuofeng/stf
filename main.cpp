#include "dialog.h"
#include <QApplication>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream f("E:\\stf\\test.txt",ios::in);
    char x;
    int a=0,b=0,c=0;
    while(true)
    {
        f.get(x);
        if(f.eof())
        {
            break;
        }
        if(x!='\n'&&x!='\t')
        a++;
        if(x==' ')
        b++;
        if(x=='.')
        c++;
    }
    cout<<"characters="<<a<<endl;
    cout<<"words="<<b<<endl;
    cout<<"sentences="<<c<<endl;
    f.close();
    return 0;
}

/*
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();

    return a.exec();
}
*/
