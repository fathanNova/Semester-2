using System;
using System.Collections.Generic;

namespace FinalProject
{
    internal class Program
    {
        bool exist = false;
        List<Barang> daftarBarang = new List<Barang>();
        static void Main(string[] args)
        {
            int pilihan;
            do
            {
                Console.Clear();
                Console.WriteLine("==== Program Pendataan Barang ====\n");
                Console.WriteLine("1. Tambahkan Barang");
                Console.WriteLine("2. Tampilkan Barang");
                Console.WriteLine("3. Hapus Barang");
                Console.WriteLine("4. Keluar");
                pilihan = Convert.ToInt16(Console.ReadLine());

                switch (pilihan)
                {
                    case 1:
                        TambahBarang();
                        break;
                    case 2:
                        TampilkanBarang();
                        break;
                    case 3:
                        HapusBarang();
                        break;
                    default:
                        Console.WriteLine("Pilihan Anda Salah. Inputkan Kembali Pilihan dengan Benar.");
                        break;
                }
            } while (pilihan != 4);
        }

        static void TambahBarang()
        {
            int pilihan;
            do
            {

                Console.WriteLine("Pilih Kategori Barang yang Akan Ditambahkan:");
                Console.WriteLine("1. Elektronik");
                Console.WriteLine("2. Makanan");
                Console.WriteLine("3. Minuman");
                Console.WriteLine("4. Alat Tulis");
                Console.WriteLine("5. Perabot");
                Console.WriteLine("6. Pakaian");
                Console.WriteLine("7. Kembali ke Menu Utama");
                pilihan = Convert.ToInt16(Console.ReadLine());

                switch (pilihan)
                {
                    case 1:
                        TambahElektronik();
                        break;
                    case 2:
                        TambahMakanan();
                        break;
                    case 3:
                        TambahMinuman();
                        break;
                    case 4:
                        TambahAlatTulis();
                        break;
                    case 5:
                        TambahPerabot();
                        break;
                    case 6:
                        TambahPakaian();
                        break;
                    default:
                        Console.WriteLine("Pilihan Anda Salah. Inputkan Kembali Pilihan dengan Benar.");
                        break;
                }
            } while (pilihan != 7);
        }
        static void TambahElektronik()
        {

        }
        static void TambahMakanan()
        {

        }
        static void TambahMinuman()
        {

        }
        static void TambahAlatTulis()
        {

        }
        static void TambahPerabot()
        {

        }
        static void TambahPakaian()
        {

        }
        static void TampilkanBarang()
        {

        }
        static void HapusBarang()
        {
            
        }
    }
}
