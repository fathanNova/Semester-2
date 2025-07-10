using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TugasList
{
    internal class GoSend : Pengiriman
    {
        public GoSend(string nama, string tujuan, float jarak) : base(nama, tujuan, jarak)
        { 
            
        }

        int harga = 2000;
        public override void KirimPaket()
        {
            Console.WriteLine("[GoSend] {0} mengirim ke {1} ({2} km)", NamaPengirim, Tujuan, Jarak);
        }
        public override void HitungBiaya()
        {
            Console.WriteLine("Biaya GoSend: Rp{0:N0}\n", Jarak*harga);
        }
    }
}
