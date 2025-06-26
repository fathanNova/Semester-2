using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PolymorphismInterface 
{
    internal class ConvertToJson : IConvertObject
    {
        public void Convert(Mahasiswa mhs)
        {
            string json = JsonConvert.SerializeObject(mhs, Formatting.Indented);
            Console.WriteLine("Hasil konversi ke Json: \n");
            Console.WriteLine(json);
        }
    }
}
