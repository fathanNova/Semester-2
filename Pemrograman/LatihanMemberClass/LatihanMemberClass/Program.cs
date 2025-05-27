using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LatihanMemberClass
{
    internal class Program
    {
        static void Main(string[] args)
        {
            PlaneTicket ticket1 = new PlaneTicket();
            ticket1.Origin = "JOGJA";
            ticket1.Destination = "PKU";
            ticket1.Cost = 100;
            ticket1.Currency = "USD";
            ticket1.Ticket();

            Console.WriteLine();

            PlaneTicket ticket2 = new PlaneTicket();
            ticket2.Origin = "JKT";
            ticket2.Destination = "PKU";
            ticket2.Cost = 7500000;
            ticket2.Currency = "IDR";
            ticket2.Ticket();

            Console.ReadKey();
        }
    }
}
