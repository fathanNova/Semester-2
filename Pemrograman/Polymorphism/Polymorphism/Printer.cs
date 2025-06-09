using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Polymorphism
{
    public class Printer
    {
        public virtual void Print() 
        {
            Console.WriteLine("Printer Sedang Mencetak...");
        }

        public virtual void Finish()
        {
            Console.WriteLine("Selesai Mencetak...");
        }
        
    }
}
