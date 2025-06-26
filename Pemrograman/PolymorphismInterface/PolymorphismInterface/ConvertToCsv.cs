using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PolymorphismInterface
{
    public class ConvertToCsv : IConvertObject
    {
        public void Convert(Mahasiswa mhs) 
        {
            string csv = string.Format("{0}, {1}. {2}", mhs.Npm, mhs.Nama, mhs.Email);

            Console.WriteLine("Hasil konversi ke Csv: \n");
            Console.WriteLine(csv);
        }
    }
}
