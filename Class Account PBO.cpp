#include<iostream>
#include <string>
using namespace std;

class Account{
	public:
		Account(int);
		void DebitAnggt(int);
		void KreditAnggt(int);
		int getSaldoAccount();
	private:
		int saldoAccount;
};

Account::Account(int saldo){
	if(saldo >= 0){
		saldoAccount= saldo;
	}
	else {
		saldoAccount=0;
			cout<<"Inisialisasi saldo tidak valid."<<endl;
	}
}

void Account::KreditAnggt(int saldo){
	saldoAccount = saldoAccount + saldo;
}
void Account::DebitAnggt(int saldo){
	if(saldoAccount >= saldo){
		saldoAccount = saldoAccount - saldo;
	}
	else{
		cout<<"Jumlah saldo account tidak seimbang."<<endl;
	}
}


int Account::getSaldoAccount()
{
 return saldoAccount;
}
int main()
{
 Account Account1(170);
 Account Account2(97);
 cout << "Account-account yang seimbang adalah: "<< Account1.getSaldoAccount()<< "\nAccount-account yang seimbang adalah: "<< Account2.getSaldoAccount() << endl;
 Account1.KreditAnggt(321);
 Account2.KreditAnggt(89);
 cout << "Account-account yang seimbang adalah: "<< Account1.getSaldoAccount()<< "\nAccount-account yang seimbang adalah: "<< Account2.getSaldoAccount() << endl;
 Account1.DebitAnggt(239);
 Account2.DebitAnggt(72);
 cout << "\nAccount-account yang seimbang adalah: "<< Account1.getSaldoAccount()<< "\nAccount-account yang seimbang adalah: "<< Account2.getSaldoAccount() << endl;
}
