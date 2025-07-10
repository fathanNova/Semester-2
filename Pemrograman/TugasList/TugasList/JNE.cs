using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TugasList
{
    internal class JNE : Pengiriman
    {
        public JNE(string nama, string tujuan, float jarak) : base(nama, tujuan, jarak)
        {

        }
        int harga = 1500;
        public override void KirimPaket()
        {
            Console.WriteLine("[JNE] {0} mengirim ke {1} ({2} km)", NamaPengirim, Tujuan, Jarak);
        }
        public override void HitungBiaya()
        {
            Console.WriteLine("Biaya JNE: Rp{0:N0}\n", Jarak * harga);
        }
    }
}
