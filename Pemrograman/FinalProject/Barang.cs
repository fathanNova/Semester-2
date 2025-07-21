using System;


namespace FinalProject
{
    public interface IBarang
    {
        public string Nama { get; set; }
        public int Jumlah { get; set; }
        public int Harga { get; set; }

        void Output();
    }
}