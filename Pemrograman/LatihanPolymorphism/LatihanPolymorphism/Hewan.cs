﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LatihanPolymorphism
{
    public class Hewan
    {
        public string Name { get; set; }

        public virtual void Suara()
        {
            Console.WriteLine("...");
        }
    }
}
