using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Polymorphism
{
    public class Canon : Printer
    {
        public override void Print()
        {
            Console.WriteLine("Printer Canon Sedang Mencetak...");
        }
        public override void Finish()
        {
            Console.WriteLine("Printer Canon Selesai Mencetak...");
        }
    }
}
