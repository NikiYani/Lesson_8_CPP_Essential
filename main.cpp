#include <QCoreApplication>
#include <iostream>
#include <exception>
#include <memory>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    try
    {
        string().at(1);
    }
    catch(...)
    {
        cerr << "smth went wrong\n";
    }

    try
    {
        throw 40;
    }
    catch(logic_error& ex)
    {
        cerr << ex.what() << endl;
    }
    catch(runtime_error& ex)
    {
        cerr << ex.what() << endl;
    }

    return a.exec();
}
