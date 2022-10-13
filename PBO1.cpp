#include <iostream>
using namespace std;

int main(){
	int jmlhTilangan ;
	
	int x=0;
	do {
            cout<<"=";
            x++;
        }
        while(x <= 46);
    cout<<"\n           Data Motor Tilangan Kepolisian        "<<endl;
    cout<<"========================================="<<endl;
    cout<<"Jumlah Tilangan : ";
	cin>>jmlhTilangan;
	
	string kendaraan[jmlhTilangan][3];
	
	cout<<"program data motor tilangan kepolisian :"<<endl;
	for (int g=0; g<jmlhTilangan; g++)
        {
			cout<<""<<endl;
            cout<<"Data tilangan-"<<g+1<<endl;
            for (int h=0; h<3; h++)
            {
                if (h==0)
                {
                    cout<<"tipe kendaraan : ";
                }
                else if(h==1)
                {
                    cout<<"nomer kendaraan : ";
                }
                else
                {
                    cout<<"pasal yang dilanggar : ";
                }
                cin>>kendaraan[g][h];
            }
        }
	cout<<"----------------------------------------"<<endl;
    cout<<"\ndata tilangan "<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"tipe kendaraan \t\tnomer kendaraan \t\tpasal yang dilanggar  \t"<<endl;
    for(int g=0; g<jmlhTilangan; g++)
    {
        for (int h=0; h<3; h++)
        {
            cout<<kendaraan[g][h]<<"\t\t\t\t";
        }
        cout<<endl;
    }
    return 0;
}
