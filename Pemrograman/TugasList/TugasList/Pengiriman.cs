using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TugasList
{
    abstract class Pengiriman
    {
        public Pengiriman(string nama, string tujuan, float jarak) 
        {
            NamaPengirim = nama;
            Tujuan = tujuan;
            Jarak = jarak;
        }

        public string NamaPengirim {  get; set; }
        public string Tujuan {  get; set; }
        public float Jarak { get; set; }

        public abstract void KirimPaket();
        public abstract void HitungBiaya();
    }
}
