using System;

namespace FinalProject
{
    internal class Pakaian : Barang
    {
        public override void Output()
        {
            Console.WriteLine("\n[Pakaian]\t: {0}", Nama);
            Console.WriteLine("Harga\t\t: Rp{0:N0}", Harga);
            Console.WriteLine("Jumlah\t\t: {0}", Jumlah);
        }
    }
}