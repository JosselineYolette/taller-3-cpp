int main()
{
    cout<<"ingresa un numero para saber si es primo\n";
    int n ;
    cin>>n ;
    if (esPrimo(n) == 1){
        cout<<"si es un numero primo";
    }else{
        cout<<"no es un numero primo";
    }
    
    return 0;
}
