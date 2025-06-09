using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Polymorphism
{
    internal class Program
    {

        static void Main(string[] args)
        {
            int pilihan;
            Printer printer = null;
            do
            {
                Console.WriteLine("Pilih Printer: ");
                Console.WriteLine("1. Epson");
                Console.WriteLine("2. Canon");
                Console.WriteLine("3. LaserJet");
                Console.Write("Masukkan Pilihan Anda: ");

                pilihan = Convert.ToInt32(Console.ReadLine());

                switch (pilihan)
                {
                    case 1:
                        printer = new Epson();
                        break;
                    case 2:
                        printer = new Canon();
                        break;
                    case 3:
                        printer = new LaserJet();
                        break;
                    default:
                        printer = null;
                        Console.WriteLine("Pilihan Anda Tidak Ditemukan!");
                        break;
                }
                if (printer != null)
                {
                    printer.Print();
                    printer.Finish();
                }

                Console.ReadKey();
                Console.Clear();
            } while (pilihan <= 3);
            
        }
    }
}
