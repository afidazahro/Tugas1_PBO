#include <iostream>
#include <string>
using namespace std;

class Employee{
	public:
		Employee(string, string, int);
		void setNamaDepan(string);
			string getNamaDepan();
		void setNamaBlkng(string);
			string getNamaBlkng();
		void setGajiBulanan(int);
			int getGajiBulanan();
			
	private:
		string NamaDepan;
		string NamaBlkng;
		int GajiBulanan;
};

Employee::Employee(string depan, string blkng, int gaji){
	NamaDepan = depan;
	NamaBlkng = blkng;
	if(gaji > 0)
		GajiBulanan=gaji;	
	else{
		GajiBulanan=0;
		cout<<"Inisialisasi gaji tidak valid."<<endl;
	}
}

void Employee::setNamaDepan(string depan){
	if(depan.length() <= 20)
		NamaDepan= depan;
}

void Employee::setNamaBlkng(string blkng){
	if(blkng.length() <= 17)
			NamaBlkng= blkng;
			
	if(blkng.length() >17){
		NamaBlkng = blkng.substr(0, 17);
			cout << "Nama \"" << blkng <<"\" exceeds maximum length (17).\n"<< "Limiting NamaDepan to first 17 characters.\n" << endl;
	}
} 

void Employee::setGajiBulanan(int gaji){
	if(gaji > 0){
		GajiBulanan = gaji;
	}
		else{
			GajiBulanan= 0;
				cout<<"Inisialisasi gaji tidak valid"<<endl;
		}
}

string Employee::getNamaDepan(){
	return NamaDepan;
}
string Employee::getNamaBlkng(){
	return NamaBlkng;
}
int Employee::getGajiBulanan(){
	return GajiBulanan;
}

int main(){
		
       Employee Employee1("Melani","Budi",27000); 
            Employee Employee2("Zifa","Olma",19000); 
            cout << "Employee1 : "<< Employee1.getNamaDepan()<<" "<< Employee1.getNamaBlkng()<<endl; 
            cout<< "Gaji Bulanan : "<< Employee1.getGajiBulanan()<< endl;
            cout<< "Gaji Selama Setahun: "<< Employee1.getGajiBulanan()*12<< endl; 
            cout<<"Setelah dikalikan 10 % gaji"<<endl; 
            
            int incrementedgaji1=Employee1.getGajiBulanan(); 
                incrementedgaji1=incrementedgaji1+(incrementedgaji1*0.1); 
                Employee1.setGajiBulanan(incrementedgaji1); 
                cout<< "Gaji Bulanan : "<< Employee1.getGajiBulanan()<< endl;
                cout<<"Gaji Selama Setahun : "<< Employee1.getGajiBulanan()*12<<endl<<endl;
                
                cout << "Employee2' : "<< Employee2.getNamaDepan()<<" "<< Employee2.getNamaBlkng()<<endl; 
                cout<< "Gaji BUlanan : "<< Employee2.getGajiBulanan()<<endl;
                cout<<"Gaji Selama Setahun : "<< Employee2.getGajiBulanan()*12<<endl; 
                cout<<"Setelah dikalikan 10 % gaji"<<endl; 
                
            int incrementedgaji2=Employee1.getGajiBulanan(); 
                incrementedgaji2=incrementedgaji2+(incrementedgaji2*0.1); 
                Employee2.setGajiBulanan(incrementedgaji2); 
                cout<<"Gaji Bulanan : "<< Employee1.getGajiBulanan()<<endl;
                cout<<"Gaji Selama Setahun : "<< Employee1.getGajiBulanan()*12<< endl; 
}
