using System;
using System.Collections.Generic;

namespace FinalProject
{
    internal class Program
    {
        // List menggunakan method static agar bisa diakses oleh fungsi lainnya 
        static List<Barang> daftarBarang = new List<Barang>(); 
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
                Console.Write("\nPilihan Anda [1-4]: ");
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
                    case 4:
                        Console.Clear();
                        break;
                    default:
                        Console.WriteLine("\nPilihan Anda Salah. Inputkan Kembali Pilihan dengan Benar.");
                        Console.ReadKey();
                        break;
                }
            } while (pilihan != 4);
        }

        static void TambahBarang()
        {
            int pilihan;
            do
            {
                Console.Clear();
                Console.WriteLine("Pilih Kategori Barang yang Akan Ditambahkan:");
                Console.WriteLine("1. Elektronik");
                Console.WriteLine("2. Makanan");
                Console.WriteLine("3. Minuman");
                Console.WriteLine("4. Alat Tulis");
                Console.WriteLine("5. Perabot");
                Console.WriteLine("6. Pakaian");
                Console.WriteLine("7. Kembali ke Menu Utama");
                Console.Write("\nPilihan Anda [1-7]: ");
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
                    case 7:
                        break;
                    default:
                        Console.WriteLine("\nPilihan Anda Salah. Inputkan Kembali Pilihan dengan Benar.");
                        Console.ReadKey();
                        break;
                }
            } while (pilihan != 7);
        }

        static void TampilkanBarang()
        {
            if (daftarBarang.Count == 0)
            {
                Console.WriteLine("\nBelum Ada Barang yang Tersimpan\n");
            }
            else
            {
                foreach (var barang in daftarBarang)
                {
                    barang.Output();
                }
            }
            Console.ReadKey();
        }
        static void HapusBarang()
        {
            if (daftarBarang.Count == 0)
            {
                Console.WriteLine("\nBelum Ada Barang yang Tersimpan\n");
            }
            else
            {
                string hapus;
                bool ada = false;
                Console.Write("\nInputkan Nama Barang yang Ingin Dihapus: ");
                hapus = Console.ReadLine()!;

                for (int i = 0; i < daftarBarang.Count; i++)
                {
                    if (daftarBarang[i].Nama == hapus)
                    {
                        daftarBarang.RemoveAt(i);
                        Console.WriteLine("\nBarang Berhasil Dihapus.");
                        ada = true;
                        break;
                    }
                }
                if (!ada)
                {
                    Console.WriteLine("\nBarang Tidak Ditemukan");
                }
            }
            Console.ReadKey();
        }
        static void TambahElektronik()
        {
            Elektronik elektronik = new Elektronik();
            Console.Write("\nNama Barang: ");
            elektronik.Nama = Console.ReadLine()!;
            Console.Write("Harga Barang: ");
            elektronik.Harga = Convert.ToInt32(Console.ReadLine());
            Console.Write("Jumlah Barang: ");
            elektronik.Jumlah = Convert.ToInt16(Console.ReadLine());

            daftarBarang.Add(elektronik);
            Console.WriteLine("\nBarang Elektronik Berhasil Ditambahkan.");
            Console.ReadKey();
        }
        static void TambahMakanan()
        {
            Makanan makanan = new Makanan();
            Console.Write("\nNama Barang: ");
            makanan.Nama = Console.ReadLine()!;
            Console.Write("Harga Barang: ");
            makanan.Harga = Convert.ToInt32(Console.ReadLine());
            Console.Write("Jumlah Barang: ");
            makanan.Jumlah = Convert.ToInt16(Console.ReadLine());

            daftarBarang.Add(makanan);
            Console.WriteLine("\nBarang Makanan Berhasil Ditambahkan.");
            Console.ReadKey();
        }
        static void TambahMinuman()
        {
            Minuman minuman = new Minuman();
            Console.Write("\nNama Barang: ");
            minuman.Nama = Console.ReadLine()!;
            Console.Write("Harga Barang: ");
            minuman.Harga = Convert.ToInt32(Console.ReadLine());
            Console.Write("Jumlah Barang: ");
            minuman.Jumlah = Convert.ToInt16(Console.ReadLine());

            daftarBarang.Add(minuman);
            Console.WriteLine("\nBarang Minuman Berhasil Ditambahkan.");
            Console.ReadKey();
        }
        static void TambahAlatTulis()
        {
            AlatTulis alatTulis = new AlatTulis();
            Console.Write("\nNama Barang: ");
            alatTulis.Nama = Console.ReadLine()!;
            Console.Write("Harga Barang: ");
            alatTulis.Harga = Convert.ToInt32(Console.ReadLine());
            Console.Write("Jumlah Barang: ");
            alatTulis.Jumlah = Convert.ToInt16(Console.ReadLine());

            daftarBarang.Add(alatTulis);
            Console.WriteLine("\nBarang Alat Tulis Berhasil Ditambahkan.");
            Console.ReadKey();
        }
        static void TambahPerabot()
        {
            Perabot perabot = new Perabot();
            Console.Write("\nNama Barang: ");
            perabot.Nama = Console.ReadLine()!;
            Console.Write("Harga Barang: ");
            perabot.Harga = Convert.ToInt32(Console.ReadLine());
            Console.Write("Jumlah Barang: ");
            perabot.Jumlah = Convert.ToInt16(Console.ReadLine());

            daftarBarang.Add(perabot);
            Console.WriteLine("\nBarang Perabot Berhasil Ditambahkan.");
            Console.ReadKey();
        }
        static void TambahPakaian()
        {
            Pakaian pakaian = new Pakaian();
            Console.Write("\nNama Barang: ");
            pakaian.Nama = Console.ReadLine()!;
            Console.Write("Harga Barang: ");
            pakaian.Harga = Convert.ToInt32(Console.ReadLine());
            Console.Write("Jumlah Barang: ");
            pakaian.Jumlah = Convert.ToInt16(Console.ReadLine());

            daftarBarang.Add(pakaian);
            Console.WriteLine("\nBarang Pakaian Berhasil Ditambahkan.");
            Console.ReadKey();
        }
    }
}