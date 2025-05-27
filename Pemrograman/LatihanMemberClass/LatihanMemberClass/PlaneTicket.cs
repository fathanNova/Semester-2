using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LatihanMemberClass
{
    public class PlaneTicket
    {
        const int money = 150000;
        public string Origin {  get; set; }
        public string Destination { get; set; }
        public int Cost { get; set; }
        public string Currency { get; set; }


        public void Ticket()
        {
            Console.WriteLine("Origin: {0}", Origin);
            Console.WriteLine("Destination: {0}", Destination);
            Console.WriteLine("Cost: {0} ({1})", Cost, Currency);

            if (Currency == "USD")
            {
                
                Console.WriteLine("Convert to Rupiah: {0}", Cost*money);
            }
            else
            {
                Console.WriteLine("Convert to Dolar: {0}", Cost/money);
            }
        }
    }
}
