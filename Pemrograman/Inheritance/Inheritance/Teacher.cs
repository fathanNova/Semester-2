using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Inheritance
{
    public class Teacher : Person
    {
        public string TeacherID { get; set; }
        public string Subject { get; set; }

        public void GetTeacher()
        {
            Console.WriteLine("Teacher Name: {0}, Age: {1}, ID: {2}, Subject: {3}", Name, Age, TeacherID, Subject);
            Console.WriteLine();
        }

        public Teacher(string name, int age, string teacherId, string subject) : base (name, age)
        {
            TeacherID = teacherId;
            Subject = subject;
        }
    }
}
