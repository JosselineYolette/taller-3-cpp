
#include <iostream>

using namespace std;

int main()
{
    cout<<"ingresa una medida en centimetros para pasarla a pulgadas\n";
    float cm ;
    cin>>cm;
    float pulgadas = cm / 2.54;
    cout<<cm<<" cm = "<<pulgadas<<" pulgadas";
    return 0;
}

