using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Polymorphism
{
    public class Epson : Printer
    {
        public override void Print()
        {
            Console.WriteLine("Printer Epson Sedang Mencetak...");
        }

        public override void Finish()
        {
            Console.WriteLine("Printer Epson Selesai Mencetak...");
        }
    }
}
