// Example program
#include <iostream>
#include <string>
using namespace std;  



/* Si es grupo de 3 omitir este
    Este metodo deber retornar el elemento numero N de serie de fibonnaci
    1 1 2 3 5 8 13  21
    
    1 2 3 4 5 6 7   8 
*/
int fibonacci(int N) {
    int primero=0;//primer numero
    int segundo=1;//segundo numero
    int auxiliar;     
    for(int contador=1;contador<N;++contador){   
        auxiliar=primero+segundo;
        cout<<auxiliar<<" ";
        primero=segundo;
        segundo=auxiliar;
    }    
    
    return auxiliar;
}

/* Imprimier en Navo numero primo
    1, 2, 3, 5, 7, 13, 17, 19, 23
    
    1  2  3  4  5  6   7   8   9
*/
int primo(int N) {
    return 0;
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
  std::cout << "El fibonacci de 8 " << fibonacci(4) << std::endl;   // 21
  std::cout << "El primo numer 8 " << fibonacci(8) << std::endl;    // 19
  std::cout << "El primo numer 8 " << capicua(11211) << std::endl ;    // 1 
  std::cout << "El residuo de  13 entre 4 " << residuo(13, 4) << std::endl;    // 1 
}
