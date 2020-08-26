#include "stdafx.h" 
#include<iostream> 
#include<fstream> 
#include<string>
#include <stdio.h> 

using namespace std;
int secim,secim2,k=0,i=0;
double vize, fiinal, devamsizlik,vizeBasari,ortalama,finalBasari;
char cevap;

class ogrenci
{
public:
	string Ogrenci_TC;
	string Ogrenci_Adi;
	string Ogrenci_Soyadi;					/*DEÐÝÞKENLER*/
	string Ogrenci_OkulNo;
	string Ogrenci_TelefonNo;
	string Ogrenci_DogumTarihi;

	void menu();
	void ogrenciekle();
	void ogrenciduzenle();					/*FONKSÝYONLAR*/
	void ogrencisil();
	void ogrencilistele();
	void ogrencisorgula();
}a;
void ogrenci::menu()
{
	if (k==1)
	{
		system("cls");            /*OGRENCÝ ÝÞLERÝ OTOMASYONU YAZSIN DÝYE YAPILDI*/
	}
	do
	{
devam:
		if (i!=0)
		{
			system("cls");
			cout<<endl<<" Yanlis secim !!!"<<endl			/*YANLIÞ BÝR SECÝM YAPILINCA YENÝDEN DENEMEK ÝCÝN YAPILDI*/
				<<" Lutfen Yeniden Seciniz. "<<endl<<endl;
		}
		cout << " 1) Ogrenci Kayit Ekleme " << endl
			<< " 2) Ogrenci Kayit Duzenleme " << endl
			<< " 3) Ogrenci Kaydi Silme " << endl
			<< " 4) Ogrenci Listesi Alma " << endl
			<< " 5) Ogrenci Sorgulama " << endl
			<< " 6) Cikis " << endl

			<<"_________________________________________________"<<endl;
		cout << endl<<" Secim : ";
		cin >> secim; 
		if (!(secim==1||secim==2||secim==3||secim==4||secim==5||secim==6))
		{
			i++;					/*YANLIÞ SECÝM YAPILINCA YUKARIDAKÝ ÝF'E GÝDER*/
			goto devam;
		}
		k++;
	} while (secim != 1 && secim != 2 && secim != 3 && secim != 4 && secim != 5 && secim != 6);
}
void ogrenci::ogrenciekle()

{

	system("cls");
	cout << " - + - + - + Ogrenci Okul ekleme + - + - + -" << endl
		<<" ___________________________________________"<<endl;

	ofstream DosyaYaz; 
	DosyaYaz.open("Ogrenci.txt", ios::app);

	do
	{
		system("cls");
		cout << "\n Ogrenci Tc No : ";
		cin >> Ogrenci_TC;
		cout << "\n Ogrenci Adi : "; 
		cin >> Ogrenci_Adi;
		cout << "\n Ogrenci Soyadi : "; 
		cin >> Ogrenci_Soyadi;
		cout << "\n Ogrenci Dogum Tarihini : ";
		cin >> Ogrenci_DogumTarihi;
		cout << "\n Ogrenci Telefon Numarasi : "; 
		cin >> Ogrenci_TelefonNo;
		cout << "\n Ogrenci Okul Numarasi : "; 
		cin >> Ogrenci_OkulNo;

		DosyaYaz << "\n" << Ogrenci_TC << "        " 
			<< Ogrenci_Adi << "        " 
			<< Ogrenci_Soyadi << "        " 
			<< Ogrenci_DogumTarihi << "        " 
			<< Ogrenci_TelefonNo << "        " 
			<< Ogrenci_OkulNo;

		cout  << endl << " - + - + - + Ogrenci Kayidi Tamamlandi + - + - + -" << endl
			<<" _________________________________________________"<<endl<< endl;

		cout << " Kayit Yapma Devam Icin (E/e)"<<endl
			<<" Cikmak Icin (H/h)"<<endl
			<<" Menuye Gitmek Icin (M/m)";
		cout<<endl<<" Secim : ";
		cin >> cevap;
	} while (cevap == 'e' || cevap=='E'); 

	if (cevap == 'h' || cevap == 'H') 
		DosyaYaz.close();
	else {
		system("cls");
		system("C:\\Users\\gybya\\Desktop\\Yasin-AYDIN-172113062\\Yasin_Aydýn_172113062\\Debug\\Yasin_Aydýn_172113062.exe");}
	
}
void ogrenci::ogrenciduzenle()
{
	 i=0;
	string sorgu_TC;
	system("cls"); 

	cout << " - + - + - + Ogrenci Kayit Duzenleme + - + - + -" << endl
		<<" ______________________________________________"<<endl;

	ifstream DosyaOku("Ogrenci.txt"); 
	ofstream DosyaYaz("gecici.tmp");


	cout <<endl<< " Duzenlenecek Ogrencinin TC. Kimlik Numarasi : "; 
	cin >> sorgu_TC;


	while (!(DosyaOku.eof())) 
	{
		DosyaOku >> Ogrenci_TC >> Ogrenci_Adi >> Ogrenci_Soyadi >> Ogrenci_DogumTarihi >> Ogrenci_TelefonNo >> Ogrenci_OkulNo;

		if (sorgu_TC == Ogrenci_TC)
		{
			cout <<endl<<endl<< " - + - + - + Ogrenci Bilgileri + - + - + -" << endl 
				<<" _________________________________________"<<endl<< endl;

			cout << " Ogrenci Tc :" << Ogrenci_TC << endl;
			cout << " Ogrenci Adi :" << Ogrenci_Adi << endl;
			cout << " Ogrencin Soyadi :" << Ogrenci_Soyadi << endl;
			cout << " Ogrenci Dogum Taihi :" << Ogrenci_DogumTarihi << endl;
			cout << " Ogrenci Telefon Numarasi :" << Ogrenci_TelefonNo << endl;
			cout << " Ogrenci Okul Numarasi :" << Ogrenci_OkulNo << endl << endl;

			cout << endl << " Ogrenci Bilgilerini Yenileyiniz..." << endl 
				<<" _________________________________________"<<endl;
			cout << "\n Ogrenci Adi Giriniz :"; cin >> Ogrenci_Adi;
			cout << "\n Ogrenci Soyadi Giriniz. :"; cin >> Ogrenci_Soyadi;
			cout << "\n Ogrenci Dogum Tarihini Giriniz :"; cin >> Ogrenci_DogumTarihi;
			cout << "\n Ogrenci Telefon Numarasi :"; cin >> Ogrenci_TelefonNo;
			cout << "\n Ogrenci Okul Numarasi :"; cin >> Ogrenci_OkulNo;

			DosyaYaz << "\n" << Ogrenci_TC << "        " 
				<< Ogrenci_Adi << "        " 
				<< Ogrenci_Soyadi << "        " 
				<< Ogrenci_DogumTarihi << "        " 
				<< Ogrenci_TelefonNo << "        " 
				<< Ogrenci_OkulNo;

			i++;
		}
		else if (Ogrenci_TC!=sorgu_TC)
		{
			DosyaYaz << "\n" << Ogrenci_TC << "        " 
				<< Ogrenci_Adi << "        " 
				<< Ogrenci_Soyadi << "        " 
				<< Ogrenci_DogumTarihi << "        " 
				<< Ogrenci_TelefonNo << "        " 
				<< Ogrenci_OkulNo;
		}
		else
		{
			DosyaYaz << "\n" << Ogrenci_TC << "        " 
				<< Ogrenci_Adi << "        " 
				<< Ogrenci_Soyadi << "        " 
				<< Ogrenci_DogumTarihi << "        " 
				<< Ogrenci_TelefonNo << "        " 
				<< Ogrenci_OkulNo;
		}
	}

	if (i == 0)
	{
		cout << endl << " Boyle Bir Kayit Bulunamamistir." << endl << endl
			<<" Yeniden Denemek Icin (E/e) "<<endl;
	}

	cout<<endl<<" Cikmak Icin (H/h)"<<endl
		<<" Menuye Gitmek Icin (M/m)"<<endl;
	cout<<" Secim : ";
	cin>>cevap;
	if (cevap =='e' || cevap =='E')	
		a.ogrenciduzenle();
	else if(cevap =='h' || cevap =='H')
	{
		DosyaYaz.close();
		DosyaOku.close();
	}
	else {
		system("cls");
		system("C:\\Users\\gybya\\Desktop\\Yasin-AYDIN-172113062\\Yasin_Aydýn_172113062\\Debug\\Yasin_Aydýn_172113062.exe");}

	DosyaYaz.close();
	DosyaOku.close();
	remove("Ogrenci.txt");
	rename("gecici.tmp", "Ogrenci.txt");

}
void ogrenci::ogrencisil()
{
	i = 0;
	system("cls"); 
	cout << "- + - + - + Ogrenci Kaydi Silme + - + - + -" << endl
		<<"___________________________________________"<<endl;
	string silogr_TC;
	cout <<endl<< " Silinecek Ogrenci Tc Numarasini Giriniz :"; 
	cin >> silogr_TC;

	ifstream DosyaOku("Ogrenci.txt");
	ofstream DosyaYaz("gecici.tmp");

	while (!(DosyaOku.eof())) 
	{
		DosyaOku >> Ogrenci_TC >> Ogrenci_Adi >> Ogrenci_Soyadi >> Ogrenci_DogumTarihi >> Ogrenci_TelefonNo >> Ogrenci_OkulNo;

		if (Ogrenci_TC == silogr_TC)
		{

			cout << "- + - + - + Ogrenci Bilgileri + - + - + -" << endl 
				<<"_________________________________________"<<endl<< endl;

			cout << " Ogrenci Tc :" << silogr_TC << endl;
			cout << " Ogrenci Adi :" << Ogrenci_Adi << endl;
			cout << " Ogrencin Soyadi :" << Ogrenci_Soyadi << endl;
			cout << " Ogrenci Dogum Tarihi :" << Ogrenci_DogumTarihi << endl;
			cout << " Ogrenci Telefon Numarasi :" << Ogrenci_TelefonNo << endl;
			cout << " Ogrenci Okul Numarasi :" << Ogrenci_OkulNo << "\n";
			i++;

			cout << endl<< endl << " Silme Isleminiz Gerceklesmistir..." << endl<< endl;

		}
		if (Ogrenci_TC!=silogr_TC)
		{
			DosyaYaz << "\n" << Ogrenci_TC << "        " 
				<< Ogrenci_Adi << "        " 
				<< Ogrenci_Soyadi << "        " 
				<< Ogrenci_DogumTarihi << "        " 
				<< Ogrenci_TelefonNo << "        " 
				<< Ogrenci_OkulNo;
		}

	}
	if (i==0)
	{
		cout<<endl<<" Boyle Bir Kayit Bulunamamistir"<<endl;
		cout<<endl<<" Yeniden Denemek Icin (E/e) "<<endl
			<<" Cikmak Icin (H/h)"<<endl
			<<" Menuye Gitmek Icin (M/m)"<<endl;
		cout<<" Secim : ";
		cin>>cevap;
		if (cevap =='e' || cevap =='E')	
			a.ogrencisil();
		else if(cevap =='h' || cevap =='H')
		{
			DosyaYaz.close();
			DosyaOku.close();
		}
		else{
			system("cls");
			system("C:\\Users\\gybya\\Desktop\\Yasin-AYDIN-172113062\\Yasin_Aydýn_172113062\\Debug\\Yasin_Aydýn_172113062.exe");}
	}
	DosyaYaz.close();
	DosyaOku.close();

	remove("Ogrenci.txt");//dosyayi sildim.
	rename("gecici.tmp", "Ogrenci.txt");//Gecici dosyalar kayit silindikten tmp dosyasi txt dosyasina aktarilir.

}        
void ogrenci::ogrencilistele()
{
	 i = 0;
	system("cls"); 
	cout<<" - + - + - + Ogrenci Listesi + - + - + -"<<endl;

	ifstream DosyaOku("Ogrenci.txt");
	while (!(DosyaOku.eof()))
	{
		DosyaOku >> Ogrenci_TC >> Ogrenci_Adi >> Ogrenci_Soyadi >> Ogrenci_DogumTarihi >> Ogrenci_TelefonNo >> Ogrenci_OkulNo;
		cout<<" _________________________________________"<<endl<<endl;
		cout << " Ogrenci Tc :" << Ogrenci_TC << endl;
		cout << " Ogrencinin Adi :" << Ogrenci_Adi << endl;
		cout << " Ogrenci Soyadi :" << Ogrenci_Soyadi << endl;
		cout << " Ogrenci Dogum Gunu :" << Ogrenci_DogumTarihi << endl;
		cout << " Ogrenci Telefon Numarasi :" << Ogrenci_TelefonNo << endl;
		cout << " Ogrenci Okul Numarasi :" << Ogrenci_OkulNo << endl;
		i++;
	}
	cout<<"_________________________________________"<<endl;
	cout<<endl<<" Toplam Ogrenci Sayisi : "<<i<<endl<<endl;

	cout <<" Cikmak Icin (H/h)"<<endl
		<<" Menuye Gitmek Icin (M/m)";
	cout<<endl<<" Secim : ";
	cin >> cevap;
	if (cevap == 'h' || cevap == 'H') 
		DosyaOku.close();
	else {
		system("cls");
		system("C:\\Users\\gybya\\Desktop\\Yasin-AYDIN-172113062\\Yasin_Aydýn_172113062\\Debug\\Yasin_Aydýn_172113062.exe");}
}
void ogrenci::ogrencisorgula()
{
	int i=0;
	string sorguTC;
	system("cls");
	cout <<"- + - + - + Ogrenci Sorgulama + - + - + -"<< endl
		<<"_________________________________________"<<endl<<endl;

	cout << "Sorgusu Istenen Ogrencinin Tc'sini Giriniz : ";
	cin >> sorguTC;

	ifstream DosyaOku("Ogrenci.txt");
	while (!(DosyaOku.eof()))
	{
		DosyaOku >> Ogrenci_TC >> Ogrenci_Adi >> Ogrenci_Soyadi >> Ogrenci_DogumTarihi >> Ogrenci_TelefonNo >> Ogrenci_OkulNo;

		if (sorguTC == Ogrenci_TC)
		{
			cout <<endl<<endl << "- + - + - + Ogrenci Bilgileri + - + - + -" << endl
				<<"_________________________________________"<<endl<<endl;
			i++;
			cout << "Ogrenci Tc :" << sorguTC << endl;
			cout << "Ogrencinin Adi :" << Ogrenci_Adi << endl;
			cout << "Ogrenci Soyadi : " << Ogrenci_Soyadi << endl;
			cout << "Ogrenci Dogum Tarihi :" << Ogrenci_DogumTarihi << endl;
			cout << "Ogrenci Telefon Numarasi :" << Ogrenci_TelefonNo << endl;
			cout << "Ogrenci Okul Numarasi :" << Ogrenci_OkulNo <<endl<<endl;

			DosyaOku.close();

			break;
		}
	}
	if (i==0)
	{
		cout << endl << "Boyle Bir Kayit Bulunamamistir." << endl << endl
			<<"Yeniden Denemek Icin (E/e) "<<endl
			<<"Cikmak Icin (H/h)"<<endl
			<<"Menuye Gitmek Icin (M/m)"<<endl;
		cout<<endl<<" Secim : ";
		cin>>cevap;
		if (cevap =='e' || cevap =='E')	
			a.ogrencisorgula();
		else if(cevap =='h' || cevap =='H')
		{
			DosyaOku.close();
		}
		else {
		system("cls");
	system("C:\\Users\\gybya\\Desktop\\Yasin-AYDIN-172113062\\Yasin_Aydýn_172113062\\Debug\\Yasin_Aydýn_172113062.exe");}
	}
	cout <<" Cikmak Icin (C/c)"<<endl
		<<" Menuye Gitmek Icin (M/m)";
	cout<<endl<<" Secim : ";
	cin >> cevap;
	if (cevap == 'C' || cevap == 'c') 
		DosyaOku.close();
	else {
		system("cls");
		system("C:\\Users\\gybya\\Desktop\\Yasin-AYDIN-172113062\\Yasin_Aydýn_172113062\\Debug\\Yasin_Aydýn_172113062.exe");}

}
int main()
{
yeniden:
	cout<<" 1 - YONETICI GIRISI "<<endl
		<<" 2 - OGRENCI GIRISI"<<endl
		<<endl<<" Secim : ";
	cin>>secim2;
	switch (secim2)
	{
	case 1:
		system("cls");
		cout<<" - + - + - + OGRENCI ISLERI OTOMASYONU + - + - + -"<<endl
			<<" _________________________________________________"<<endl<<endl;
		a.menu();
		switch (secim)
		{
		case 1:a.ogrenciekle(); break;
		case 2:a.ogrenciduzenle(); break;
		case 3:a.ogrencisil(); break;
		case 4:a.ogrencilistele(); break;
		case 5:a.ogrencisorgula(); break;
		case 6:break;
		}
		break;
	case 2:
		system("cls");
bastanbir:
		cout<<endl<<" Ogrencinin Vize notunu giriniz: ";
		cin>>vize;
		if (vize<0 || vize>100)
		{system("cls");
			cout<<endl<<" Yanlis Giris !!! Lutfen yeniden not giriniz."<<endl;	
			goto bastanbir;
		}       
		else
		{
			vizeBasari = vize * 0.35;						
bastaniki:
			cout<<endl<<" Ogrencinin Final notunu giriniz: ";
			cin>>fiinal;
			if (fiinal<0 || fiinal>100)
			{
				cout<<endl<<" Yanlis Giris !!! Lutfen yeniden not giriniz."<<endl;	
				goto bastaniki;
			} 
			finalBasari = fiinal * 0.65;
			cout<<endl<<" Ogrencinin devamsiz gun sayisini giriniz(Sinir 15 gundur): ";
			cin>>devamsizlik;            
			if(devamsizlik>15)
			{
				cout<<endl<<" Ogrenci devamsizliktan KALDI !!!"<<endl;
			}
			else
			{
				ortalama = vizeBasari + finalBasari;
				if(0 <= ortalama && ortalama <= 44) cout<<endl<<"Ortalama = "<<ortalama<<endl<<"Ogrencinin basari harf notu FF.. Ogrenci KALDI"<<endl<<endl;
				else if(45 <= ortalama && ortalama <= 54) cout<<endl<<"Ortalama = "<<ortalama<<endl<<"Ogrencinin basari harf notu DD.. Ogrenci GECTI"<<endl<<endl;
				else if(55 <= ortalama && ortalama <= 69)  cout<<endl<<"Ortalama = "<<ortalama<<endl<<"Ogrencinin basari harf notu CC.. Ogrenci GECTI"<<endl<<endl;
				else if(70 <= ortalama && ortalama <= 84) cout<<endl<<"Ortalama = "<<ortalama<<endl<<"Ogrencinin basari harf notu BB.. Ogrenci GECTI"<<endl<<endl;
				else if(85 <= ortalama && ortalama <= 100)  cout<<endl<<"Ortalama = "<<ortalama<<endl<<"Ogrencinin basari harf notu AA.. Ogrenci GECTI"<<endl<<endl;
			}
		}
		cout<<endl<<" Cikmak Icin (C/c)"<<endl
			<<" Menuye Gitmek Icin (M/m)"<<endl;
		cout<<" secim : ";
		cin>>cevap;
		if (cevap =='c' || cevap =='C')	
			break;
		else {
			system("cls");
			system("C:\\Users\\gybya\\Desktop\\Yasin-AYDIN-172113062\\Yasin_Aydýn_172113062\\Debug\\Yasin_Aydýn_172113062.exe");}
		break;
	default:
		system("cls");
		cout<<" Yanlis secim "<<endl<<endl;
		goto yeniden;
		break;
	}

	system("pause");

	return 0; 

}