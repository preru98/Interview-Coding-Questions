using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Binary
{
    class Decimal
    {   string[] octalLookUp = { "000", "001", "010", "011", "100", "101", "110", "111" };
        string[] hexLookUp = { "0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111", "1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111" };
        
        
        public string oToB(long num)
        {
            string Binary = ""; string part; long rem;
            while (num > 0)
            {
                rem = num % 10;
                part = octalLookUp[rem];
                Binary = part + " " + Binary;
                num /= 10;
            }
            return Binary;
        }

        public string hToB(long num)
        {
            string Binary = ""; string part; long rem;
            while (num > 0)
            {
                rem = num % 10;
                part = hexLookUp[rem];
                Binary = part + " " + Binary;
                num /= 10;
            }
            return Binary;
        }

        public string dToB(long num)
        {
            string Binary = ""; long rem;
            while (num > 0)
            {
                rem = num % 2;
                Binary = rem+Binary;
                num =num/ 2;
            }
            return Binary;
        }
        public long bToD(long num)
        {
            long rem; int partial = 1;
            long pow = 0; long sum;
            long retNum = 0;
            while (num > 0)
            {
                rem = num % 10;
                partial = 1;
                if (pow == 0)
                    partial = 1;
                for (int i = 1; i <= pow; i++)
                    partial *= 2;
                sum = partial * rem;
                retNum+=  sum;
                num = num / 10;
                pow++;
            }
            return retNum;
        }

    }
    class Program
    {
        static void Main(string[] args)
        {
            Decimal D = new Decimal();
            Console.WriteLine("Decimal to Binary");
            
            Console.WriteLine(D.dToB(10));
            Console.WriteLine("");
            Console.WriteLine("Binary to Decimal");
            Console.WriteLine(D.bToD(10101));
            Console.WriteLine("");
            Console.WriteLine("Octal to Binary");
            Console.WriteLine(D.oToB(34));
            Console.WriteLine("");
            Console.WriteLine("Hexadecimal to Binary");
            Console.WriteLine(D.hToB(34));
            Console.WriteLine("");
            Console.Read();
        }
    }
}

