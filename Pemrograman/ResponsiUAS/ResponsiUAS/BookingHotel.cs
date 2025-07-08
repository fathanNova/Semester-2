using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ResponsiUAS
{
    internal class BookingHotel : Booking
    {
        public BookingHotel(string nama, bool tersedia) : base(nama, tersedia)
        {

        }

        public override void CekKetersediaan()
        {
            Console.WriteLine("{0} penuh. Tidak bisa reservasi.", NamaLayanan);
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
