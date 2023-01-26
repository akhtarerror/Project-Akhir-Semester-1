// Akhtar Faizi Putra
// 2207411002
// TI-1A

#include <iostream>

using namespace std;

int kodeBaju[10];
string namaBaju[10];
int stokBaju[10];
string lokasiBaju[10];

void user()
{
  string nama;
  int hasil;
  char ulang;

  do
  {
    cout << "masukkan nama anda = ";
    cin >> nama;
    cout << "Apakah sudah yakin ? [y/n] :\n";
    cin >> ulang;
  } while (ulang == 'n' || ulang == 'N');

  switch (ulang)
  {
  case 'y':
  case 'Y':
    cout << "Selamat datang di PT.Tar Aja, " << nama << "!\n";
  default:
    break;
  }
}

void label()
{
  cout << "\t\t======================= \n";
  cout << "\t\t|     PT. TAR AJA     | \n";
  cout << "\t\t|     GUDANG BAJU     | \n";
  cout << "\t\t|      Indonesia      | \n";
  cout << "\t\t======================= \n";
}

void inputData(int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "\n Data ke-" << i + 1 << ": \n";
    cout << "Masukkan kode baju : ";
    cin >> kodeBaju[i];
    cout << "Masukkan nama baju : ";
    cin >> namaBaju[i];
    cout << "Masukkan stock baju : ";
    cin >> stokBaju[i];
    cout << "Masukkan lokasi baju : ";
    cin >> lokasiBaju[i];
  }
}

void showData(int n)
{
  cout << "\n\t\t\t                      Data baju anda adalah                      \n";
  cout << "\t\t\t====================================================================\n";
  cout << "\t\t\t|   Kode baju,      Nama baju,      Stock baju,      Lokasi baju   |\n";
  cout << "\t\t\t====================================================================\n";

  for (int i = 0; i < n; i++)
  {
    cout << "\t\t\t|" << kodeBaju[i] << ",      " << namaBaju[i] << ",      " << stokBaju[i] << ",      " << lokasiBaju[i] << "   |\n";
  }

  cout << "\n\t\t\t====================================================================\n";
}

void sortData(int n)
{
  int tempKode;
  string tempNama;
  int tempStokBaju;
  string tempLokasiBaju;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - 1; j++)
    {
      if (kodeBaju[j] > kodeBaju[j + 1])
      {
        tempKode = kodeBaju[j];
        kodeBaju[j] = kodeBaju[j + 1];
        kodeBaju[j + 1] = tempKode;

        tempNama = namaBaju[j];
        namaBaju[j] = namaBaju[j + 1];
        namaBaju[j + 1] = tempNama;

        tempStokBaju = stokBaju[j];
        stokBaju[j] = stokBaju[j + 1];
        stokBaju[j + 1] = tempStokBaju;

        tempLokasiBaju = lokasiBaju[j];
        lokasiBaju[j] = lokasiBaju[j + 1];
        lokasiBaju[j + 1] = tempLokasiBaju;
      }
    }
  }

  cout << "\n\t\t\t         Setelah data diurutkan berdasarkan kode terkecil          \n";
  cout << "\t\t\t==================================================================== \n";
  cout << "\t\t\t|   Kode baju,      Nama baju,      Stock baju,      Lokasi baju   | \n";
  cout << "\t\t\t==================================================================== \n";

  for (int k = 0; k < n; k++)
  {
    cout << "\t\t\t|   " << kodeBaju[k] << ",      " << namaBaju[k] << ",      " << stokBaju[k] << ",      " << lokasiBaju[k] << "   |\n";
  }

  cout << "\n\t\t\t====================================================================\n";
}

void searchData(int n)
{
  int cari, ada = 0;
  char ulang, lagi;

  cout << "\t\t\tMasukkan kode barang untuk mencari : "
       << "\n\t\t\t";
  cin >> cari;

  for (int i = 0; i < n; i++)
  {
    if (kodeBaju[i] == cari)
    {
      ada = 1;

      cout << "\t\t\t====================================================================\n";
      cout << "\t\t\t|   Kode baju   |   Nama baju   |   Stock baju   |   Lokasi baju   |\n";
      cout << "\t\t\t====================================================================\n";
      cout << "\t\t\t|   " << kodeBaju[i] << "\t\t " << namaBaju[i] << "\t\t " << stokBaju[i] << "\t\t " << lokasiBaju[i] << "   |\n";
    }
  }

  if (ada == 0)
  {
    cout << "Data tidak ditemukan\n";
  }

  do
  {
    cout << "\t\t\tApakah anda ingin mencari barang ulang? (y/n) :\n\t\t\t";
    cin >> ulang;
  }while(ulang == ulang != 'y' && ulang != 'Y' && ulang != ulang != 'n' && ulang != 'N');
    if(ulang == ulang == 'y' || ulang == 'Y'){
    	cout << "\tMasukkan banyak data = ";
          cin >> n;
          inputData(n);
          showData(n);
          sortData(n);
	}
}

int main()
{
  int n;

  user();
  label();

  cout << "\tMasukkan banyak data = ";
  cin >> n;

  inputData(n);
  showData(n);
  sortData(n);
  searchData(n);
}
