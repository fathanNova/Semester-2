using System;

namespace FinalProject
{
    internal class Perabot : IBarang
    {
        public string Nama { get; set; } = ""; 
        public int Jumlah { get; set; }
        public int  Harga { get; set; }

        public  void Output()
        {
            Console.WriteLine("\n[Perabot]\t: {0}", Nama);
            Console.WriteLine("Harga\t\t: Rp{0:N0}", Harga);
            Console.WriteLine("Jumlah\t\t: {0}", Jumlah);
        }
    }
}