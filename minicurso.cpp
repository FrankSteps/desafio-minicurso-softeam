/*
#
 #
  #
   #
    #
   #
  #
 #
#
*/

#include <iostream>
int n = 4; // numero de espaços

int main(){
    //crescente
    for(int i = 0; i <= n; i++){
        for(int j = 0; j < i; j++){
            std::cout << " ";
        }
        std::cout << "#\n";
    }

    //decrescente
    for(int i = 0; i <= n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            std::cout << " ";
        }
        std::cout << "#\n";
    }

    //fim do programa
    return EXIT_SUCCESS;
}