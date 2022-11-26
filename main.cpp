#include <iostream>

using namespace std;
class kisi{
	public:
static int sayi;
int sayi2=7;
	kisi(){
		cout<<"sayimiz :"<<sayi2<<endl;
	}
};
int kisi::sayi=5;

int main(int argc, char** argv) {
	kisi::sayi=100;
cout<<kisi::sayi<<endl;
kisi n2;
//n2.sayi2;
//n2.sayi;


	return 0;
}
