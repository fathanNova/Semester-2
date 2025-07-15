using System;

namespace FinalProject
{
    internal class AlatTulis : Barang
    {
        public override void Output()
        {
            Console.WriteLine("\n[Alat Tulis]\t: {0}", Nama);
            Console.WriteLine("Harga\t\t: Rp{0:N0}", Harga);
            Console.WriteLine("Jumlah\t\t: {0}", Jumlah);
        }
    }
}