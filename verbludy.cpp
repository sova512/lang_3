#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    int x;
    string ov = "верблюдов";
    string da = "верблюдa";
    string vd = "верблюд";
    while((x>0)||(x<=100)) {
    cout<<"Введите число"<<endl;
    cin>>x;
    if((x<=0)||(x>100)) break;
    if((x%10==0)||(x==11)||(x==12)||(x==13)||(x==14))  cout<<"В караване было  "<<x<<"  "<<ov<<endl;
    if((x % 10 >= 5)&&(x% 10 <= 9)) cout<<"В караване было  "<<x<<"  "<<ov<<endl;
    if((x%10==1)&&(x!=11))  cout<<"В караване был  "<<x<<"  "<<vd<<endl;
    if((x%10>=2)&&(x%10<=4)&&(x!=12)&&(x!=13)&&(x!=14)) cout<<"В караване былo "<<x<<"  "<<da<<endl;
}
    return 0;
}
