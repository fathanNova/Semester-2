using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ResponsiUAS
{
    internal class BookingPesawat : Booking
    {
        public BookingPesawat(string nama, bool tersedia) : base(nama, tersedia) 
        {
            
        }

        public override void CekKetersediaan()
        {
            Console.WriteLine("{0} tersedia. Berhasil dipesan.", NamaLayanan);
        }
        public override void CetakHasil()
        {
            if (Tersedia)
            {
                Console.WriteLine("Booking {0} berhasil.", NamaLayanan);
            }
            else
            {
                Console.WriteLine("Booking {0} gagal. Coba lain waktu.", NamaLayanan);
            }
            
        }
    }
}
