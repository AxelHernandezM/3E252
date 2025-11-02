#include<iostream>
using namespace std;

int main(){
    int *pNum =NULL;

    pNum =new int;
    *pNum=25;
    std::cout<<"direccion:"<<pNum<<'\n';
    std::cout<<"valor:"<<*pNum<<'\n';
    std::cout<<"valor:"<<&pNum<<'\n';
    std::cout<<sizeof(pNum)<<'\n';
        
     std::cout<<"Tipos de datos"<< endl;
     std::cout<< "tamaño int"<< sizeof( int)<<endl;
     std::cout<< "tamaño long"<< sizeof(long)<<endl;
     std::cout<< "tamaño float"<< sizeof(float)<<endl;
     std::cout<< "tamaño double"<< sizeof(double)<<endl;
     std::cout<< "tamaño char"<< sizeof(char)<<endl;
     std::cout<< "tamaño bool"<< sizeof(bool)<<endl;
     std::cout<< "tamaño byte"<< sizeof(byte)<<endl;
    return 0;


     
}