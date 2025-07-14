using System;

namespace FinalProject
{
    internal class Minuman : Barang
    {
        public override void Output()
        {
            Console.WriteLine("[Minuman] {0}", Nama);
            Console.WriteLine("Jumlah: {0}", Jumlah);
            Console.WriteLine("Harga: {0:N0}\n", Jumlah);
        }
    }
}