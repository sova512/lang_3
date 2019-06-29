#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
//    string d = "contrib non-free\ndeb-src http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free\ndeb http://mirror.mephi.ru/debian stretch-backports main contrib non-free\ndeb-src http://mirror.mephi.ru/debian stretch-backports main contrib non-free";//Исходная строка
string d="abc 1234? ABC /n <.";
    int let=0, dig=0, sym=0;
    for(int i=0; i< d.length(); i++) {
       if((d[i]==' ')||(d[i]=='\n')) continue;
    if((d[i]>='0')&&(d[i]<='9')) dig=dig+1;
        else 
            if((d[i]>='a' && d[i]<='z')||(d[i]>='A' && d[i]<='Z')) let=let+1;
               else sym=sym+1;
            
    }
    cout<<"Letters="<<let<<endl;
    cout<<"Digits="<<dig<<endl;
    cout<<"Other symbols="<<sym<<endl;
    
    return 0;
}
