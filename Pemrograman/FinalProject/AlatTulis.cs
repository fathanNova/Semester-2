using System;

namespace FinalProject
{
    public class AlatTulis : IBarang
    {
        public string Nama { get; set; } = "";
        public int Jumlah { get; set; }
        public int Harga { get; set; }
        public void Output()
        {
            Console.WriteLine("\n[Alat Tulis]\t: {0}", Nama);
            Console.WriteLine("Harga\t\t: Rp{0:N0}", Harga);
            Console.WriteLine("Jumlah\t\t: {0}", Jumlah);
        }
       
    }
}