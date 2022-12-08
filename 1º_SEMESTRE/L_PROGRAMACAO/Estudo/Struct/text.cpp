#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream obj;
    obj.open("C:\Users\User\Documents\APOSTA\ARQUIVOS\File.txt",ios::out);
    if(!obj)
    {
        
    }
    else
    {
        obj.close();
    }
    return 0;
}