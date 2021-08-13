// Example program
#include <iostream>
#include <string>
#include <math.h>



/* Si es grupo de 3 omitir este
    Este metodo deber retornar el elemento numero N de serie de fibonnaci
    1 1 2 3 5 8 13  21
    
    1 2 3 4 5 6 7   8 
*/
int fibonacci(int N) {
    return 0;
}

/* Imprimier en Navo numero primo
    1, 2, 3, 5, 7, 13, 17, 19, 23
    
    1  2  3  4  5  6   7   8   9
*/
int primo(int N) {
     int c = 1,aux = 1;
    while(c <= N){
        int n = 0;
        aux++;
        for(int i = 0; i < aux;i++){
            if(aux % i == 0){
                n++;
            }
        }
        if(n == 2){
            c++;
        }
    }
        return aux;
}

/* Determina si un numero es capicua o no.
    retorna 0 si no es capicua
    retoran 1 si es capicua
*/
int capicua(int n) {
		int a,b=0,c=0;
	cout<<"Es capicua? 1.-Si 2.-No"<<endl;
	cin>>n;
	a=n;
	while(a!=0)
	{
		b=a%10;
		a=a/10;
		c=c*10+b;
	}
	if(c==n)
		return 1;
	else
		return 0;
}


/* Retornar el residuo de una division sin tulizar el operado residuo (modulo %) ni el operador de division (/)
*/
int residuo(int a, int b) {
    int residuo;
	while(a>=b){
		a=a-b;
	}
	residuo=a;
    return residuo;
}


int main()
{
  std::string name;
  std::cout << "El fibonacci de 8 " << fibonacci(8) << std::endl;   // 21
  std::cout << "El primo numer 8 " << primo(8) << std::endl;    // 19
  std::cout << "El primo numer 8 " << capicua(11211) << std::endl ;    // 1 
  std::cout << "El residuo de  13 entre 4 " << residuo(13, 4) << std::endl;    // 1 
}
