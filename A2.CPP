#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int obat,b;
	float x,diskon,biaya,total,c,d;
	char a;
	
	
	cout <<"\t\t****************************\n"
	     <<"\t\tSISTEM PERHITUNGAN RS AISYAH\n"
	     <<"\t\t****************************\n"
	     << endl;
	     
	cout <<"\n\n";
	
	
	cout <<"Pilih Kode Dokter :\n"
	     <<"A.de.Nilawati Sp.M\t\tC.dr.Ridwan Basri Sp.PD\n"
	     <<"B.dr.Aria Sukma \t\tD.dr.Siska Selvia Sp.OG\n"
	     << endl;
	     
	cout <<"Masukan Kode Dokter :";
	cin  >>a;
	
	switch (a)
	{
		case 'A' :
			x = 175000;
			break;
			
		case 'B' :
			x = 125000;
			break;
			
		case 'C' :
			x = 225000;
			break;
			
		case 'D' :
			x = 200000;
			break;
			
		default :
			cout <<"Anda Salah Memasukan Pilihan" << endl;
	}
	
	
	
	cout <<"Masukan Jumlah Obat :";
	cin  >> obat;
	
	if (obat <= 2)
	{
		b=35;
		diskon = 0.35;
	}
	else if (obat <= 4)
	{
		b=25;
		diskon = 0.25;
	}
	else if (obat > 4)
	{
		b=15;
		diskon = 0.15;
	}
	
	cout << endl;
	
	 
	total =x - (diskon * x );
	
	
	cout <<"Biaya Dokter Dan Obat =" << x << endl;
	cout <<"Diskon :" << b <<"%" << endl;
	cout <<"Total Bayar :" << total << endl;
	cout << endl;
	cout <<"Jumlah Uang :";
	cin  >> c;
	d = c - total;
	cout <<"Kembali :" << d << endl;
	    
getch();
}
