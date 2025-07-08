using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ResponsiUAS
{
    abstract class Booking
    {
        public Booking(string nama, bool tersedia)
        {
            NamaLayanan = nama;
            Tersedia = tersedia;
        }
        public string NamaLayanan {  get; set; }
        public bool Tersedia { get; set; }

        public abstract void CekKetersediaan();
        public abstract void CetakHasil();
    }
}
