using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Polymorphism
{
    public class LaserJet : Printer
    {
        public override void Print()
        {
            Console.WriteLine("Printer LaserJet Sedang Mencetak...");
        }

        public override void Finish()
        {
            Console.WriteLine("Printer LaserJet Selesai Mencetak...");
        }
    }
}
