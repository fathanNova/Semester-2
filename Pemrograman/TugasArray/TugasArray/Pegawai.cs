using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TugasArray
{
    abstract class Pegawai
    {
        public Pegawai(string nama, string jenis, int jumlah) 
        {
            Nama = nama;
            Jenis = jenis;
            JumlahJamKerja = jumlah;
            
        }

        public string Nama { get; set; }
        public string Jenis { get; set; }
        public int JumlahJamKerja { get; set; }

        public abstract void HitungGaji();
        public abstract void CetakSlipGaji();
    }
}
