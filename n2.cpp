

#include <iostream>

using namespace std;

int main()
{
    cout<<"ingresa un numero para saber los multiplos del 1 al 20\n";
    int n ;
    cin>>n ;
    for(int i=0;i<=20;i++){
        int res = i*n;
        if (res<=20 && res!=0){
            cout<<res<<" \n";
        }
    }
    return 0;
}
