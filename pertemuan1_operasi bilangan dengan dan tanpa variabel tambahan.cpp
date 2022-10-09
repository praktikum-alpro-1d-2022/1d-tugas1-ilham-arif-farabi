#include <iostream>
using namespace std;
int main(){
	int		a = 17,
			b = 20;
	int		z = a;
			a = b;
			b = z;
 cout 	<< "Menggunakan variabel sementara \na = " << a 
		<< "\nb = " << b << endl;
			a = 17;
			b = 20;
			a = a + b;
			b = a - b;
			a = a - b;
 cout 	<< "Tanpa menggunakan variabel sementara \na = " << a 
		<< "\nb = " << b << endl;

 return 0;
}