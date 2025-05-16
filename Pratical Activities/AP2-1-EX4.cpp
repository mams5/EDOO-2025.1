#include <iostream>
#include <stdlib.h>
#include <time.h>
 
using namespace std;
 
int main()
{
    long sec;
    time ( &sec );
    srand( (unsigned) sec);
    int randomNum = rand() % 15 + 1;
    //cout<<randomNum<<endl; //cout para testes
    cout<<"Bem vindo ao Tente a Sorte!"<<endl;
    cout<<"Você tem 3 tentativas para advinhar o número escolhido aleatoriamente!"<<endl;
    for (int count = 0; count < 3; count++){
        int inputNum;
        
        if (count==0){
            cout<<"Essa é sua primeira tentativa. Boa sorte! :D"<<endl;
            cout<<"Insira um número de 1 a 15: ";
            cin>>inputNum;
            if (inputNum==randomNum){
                cout<<"NOSSA VOCÊ É UM VIDENTE!"<<endl;
                cout<<"Como você sabia que era " <<randomNum<<"?";
                count = 5;
            }
        
        }
            
        else if (count==1){
            cout<<"Todo mundo merece uma segunda chance! Dessa vez vai hein?!"<<endl;
            cout<<"Insira um número de 1 a 15: ";
            cin>>inputNum;
            if (inputNum==randomNum){
                cout<<"NOSSA VOCÊ É UM VIDENTE!"<<endl;
                cout<<"Como você sabia que era " <<randomNum<<"?";
                count = 5;
            }
            
        }
        
        else {
            cout<<"Última oportunidade :("<<endl;
            cout<<"Insira um número de 1 a 15: ";
            cin>>inputNum;
            if (inputNum==randomNum){
                cout<<"NOSSA VOCÊ É UM VIDENTE!"<<endl;
                cout<<"Como você sabia que era " <<randomNum<<"?";
                count = 5;
            }
            else {
                cout<<"Poxa! Não foi dessa vez T-T";
            }
            
        }
            
    }
        
    return 0;
}
