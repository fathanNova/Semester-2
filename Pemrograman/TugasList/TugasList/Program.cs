using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TugasList
{
    internal class Program
    {
        static void Main(string[] args)
        {
            List<Pengiriman> daftarPengiriman = new List<Pengiriman>();
            daftarPengiriman.Add(new GoSend("Rina", "Jakarta", 5));
            daftarPengiriman.Add(new JNE("Budi", "Surabaya", 15));
            daftarPengiriman.Add(new Pos("Andi", "Yogyakarta", 2));

            foreach(var layanan in daftarPengiriman)
            {
                layanan.KirimPaket();
                layanan.HitungBiaya();
            }
            Console.ReadKey();
        }
    }
}
