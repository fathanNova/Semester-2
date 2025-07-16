using System;


namespace FinalProject
{
    abstract class Barang
    {
        public string Nama { get; set; } = "";
        public int Jumlah { get; set; }
        public int Harga { get; set; }

        public abstract void Output();
    }
}