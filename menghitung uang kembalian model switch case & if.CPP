#include <iostream>
#include <conio.h>


int main()

{
       char *udud , kodene , pilih;
       int jumlah,regane,bayar,jujul,total,discon;

awal:

       cout << "            ---------------------------------------              \n";
       cout << "            ||         TOKO STMIK KHARISMA       ||              \n";
       cout << "            ---------------------------------------              \n\n\n";
       cout << "--------------------------------------------------------------\n";
       cout << "|KODE |     PRODUK BARANG                       |    HARGA      |\n";
       cout << "--------------------------------------------------------------\n";
       cout << "| A   | Kursi                                   | RP. 1.000.000 |\n";
       cout << "| B   | Meja                                    | Rp. 2.000.000 |\n";
       cout << "| C   | Lemari                                  | RP. 2.500.000 |\n";
       cout << "--------------------------------------------------------------\n\n\n";

paket:
       cout << " Masukan Kode Barang : "; cin >> kodene;
       cout << " Jumlah Beli : "; cin >> jumlah;
       cout << "\t--------------------------------------------\n";


       if (kodene=='A')
       {
           udud="Kursi";
           regane=1000000;
       }


       else if (kodene=='B')
       {
           udud="Meja";
     regane=2000000;
       }

       else if (kodene=='C')
       {
           udud="Lemari";
     regane=2500000;
       }


bayar:
       cout << "Nama Barang                   : "<<udud<<"\n";
       cout << "Jumlah barang yang anda pesan : "<<jumlah<<" Unit\n";
       cout << "Harga                         : Rp "<<regane<<"\n";
       cout << "_________________________________________\n";


       total=jumlah*regane;
       cout << "Total Harga : Rp "<<total<<"\n";
      if(jumlah > 10000000)
      discon = 0.2*jumlah;
      else
      discon = 0;
       cout<<"Jumlah Discon = Rp."<<discon<<endl;
       cout << "_________________________________________\n";


       cout << "Bayar       : Rp "; cin >> bayar;"\n";
       cout << "Total Bayar : Rp "<<total<<"\n";

       if (bayar < total)
       {
           cout << "_________________________________________\n";
           cout << "\tDiute Kurang Mbah!"<<endl;
           cout << "_________________________________________\n";

           getch();
           goto bayar;
       }

       cout << "_________________________________________\n";
       jujul=bayar-total;

       cout << "Jujule : Rp "<<jujul<<"\n";
       cout << endl<<endl<<endl;


       cout << "\t\t=========================================\n";
       cout << endl;
       cout << "\t\t    TERIMA KASIH ATAS KUNJUNGANNYA  \n";
       cout << endl;

       {
           cout << "\t\t=========================================\n";
           cout << "\nApakah ingin menghitung ulang ? [Y/N] : ";

           cin >> pilih;
           switch(pilih)
           {

           case 'Y':
           case 'y' :

               goto awal;
               break;

           case'N':
           case 'n' :
               cout << endl << endl;
               cout << "\t\t===TERIMA KASIH ANDA TELAH DATANG KE TOKO KAMI===";

               getch();
               break;
           default:
               cout << "Masukan pilihan dengan benar!";
           }

           getch();
           return 0;
       }
}

