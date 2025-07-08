using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ResponsiUAS
{
    internal class Program
    {
        static void Main(string[] args)
        {
            List<Booking> bookings = new List<Booking>();
            bookings.Add(new BookingPesawat("Garuda Indonesia", true));
            bookings.Add(new BookingHotel("Hotel Ayem", false));
            bookings.Add(new BookingKereta("Kereta Argo Wilis", true));

            Console.WriteLine("===  ===\n");
            foreach (var layanan in bookings)
            {
                layanan.CekKetersediaan();
            }

            Console.WriteLine("\n=== ===\n");
            foreach(var layanan in bookings)
            {
                layanan.CetakHasil();
            }
            Console.ReadKey();
        }
    }
}
