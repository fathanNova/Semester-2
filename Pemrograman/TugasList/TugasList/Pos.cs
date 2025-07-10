using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TugasList
{
    internal class Pos : Pengiriman
    {
        public Pos(string nama, string tujuan, float jarak) : base(nama, tujuan, jarak)
        {

        }
        int harga = 1000;
        public override void KirimPaket()
        {
            Console.WriteLine("[Pos Indonesia] {0} mengirim ke {1} ({2} km)", NamaPengirim, Tujuan, Jarak);
        }
        public override void HitungBiaya()
        {
            Console.WriteLine("Biaya Pos: Rp{0:N0}\n", Jarak * harga);
        }
    }
}
