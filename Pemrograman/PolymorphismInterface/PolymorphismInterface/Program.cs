using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PolymorphismInterface
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Mahasiswa mhs = new Mahasiswa();
            mhs.Npm = "24.11.6064";
            mhs.Nama = "Fathan Nova Arroyan";
            mhs.Email = "novaaroyan13@gmail.com";

            do
            {
                Console.Clear();
                Console.WriteLine("Pilih Format Konversi Data: ");
                Console.WriteLine("1. Json");
                Console.WriteLine("2. XML");
                Console.WriteLine("3. Csv");
                Console.Write("Pilihan Anda [1-3]: ");
                int pilihan = Convert.ToInt32(Console.ReadLine());

                IConvertObject convert;

                if (pilihan == 1)
                    convert = new ConvertToJson();
                else if (pilihan == 2)
                    convert = new ConvertToXml();
                else 
                    convert = new ConvertToCsv();

                convert.Convert(mhs);

                Console.ReadKey();
            }while(true);
        }
    }
}
