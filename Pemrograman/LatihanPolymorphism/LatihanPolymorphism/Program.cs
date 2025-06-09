using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LatihanPolymorphism
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Hewan hewan = new Hewan();
            //hewan.Suara();

            Kucing kucing = new Kucing();
            hewan = kucing;
            hewan.Name = "Kitty";
            hewan.Suara();

            Anjing anjing = new Anjing();
            hewan = anjing;
            hewan.Name = "Black";
            hewan.Suara();

            Console.ReadKey();
        }
    }
}
