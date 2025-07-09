using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TugasArray
{
    internal class PegawaiTetap : Pegawai
    {
        public PegawaiTetap(string nama, string jenis, int jumlah) : base(nama, jenis, jumlah)
        {
        
        }

        public override void HitungGaji()
        {
            Console.WriteLine("Nama: {0}", Nama);
            Console.WriteLine("Jenis: {0}", Jenis);
            Console.WriteLine("Jam Kerja: {0}", JumlahJamKerja);

        }
        public override void CetakSlipGaji()
        {
            if(Jenis == "Tetap")
            {
                int gaji = 75000;
                Console.WriteLine("Gaji Total: Rp{0:N0}", JumlahJamKerja*gaji);
            } else if(Jenis == "Kontrak")
            {
                int gaji = 50000;
                Console.WriteLine("Gaji Total: Rp{0:N0}", JumlahJamKerja * gaji);
            }else
            {
                int gaji = 35000;
                Console.WriteLine("Gaji Total: Rp{0:N0}", JumlahJamKerja * gaji);
            }
            Console.WriteLine();
        }
    }
}
