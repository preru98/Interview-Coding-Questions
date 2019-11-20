using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace arrayConvert
{
    class Program
    {
        static void Main(string[] args)
        {
           int temp,size;

            Console.Write("Enter size of array :");
            size = Int32.Parse(Console.ReadLine());

            int[] array = new int[size];
            for (int i = 0; i < size; i++)
            {
                array[i]=Int32.Parse(Console.ReadLine());
            }
            
            for (int i = 0; i < size; i++)
            {
                for (int j = i+1; j < size; j++)
                {
                    if (array[j] != array[i])
                    {
                        for (int k = j+1; k < size; k++)
                        {
                            if (array[k] == array[i])
                            {
                                temp = array[j];
                                array[j] = array[k];
                                array[k] = temp;
                            }
                        }

                    }

                }
            }
            for (int i = 0; i < size; i++)
            {
                Console.Write(array[i]+ " | ");
            }
            Console.Read();
        }
    }
}
