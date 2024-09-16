using System;
using System.Runtime.CompilerServices;
using System.Text;

namespace project
{
    class Program
    {
        static void Main(string[] args)
        {

           /* //ввод и вывод всех переменных с# + конвертирование

            int a = Convert.ToInt32(Console.ReadLine());
            float b = float.Parse(Console.ReadLine());
            short c = short.Parse(Console.ReadLine());
            long d = long.Parse(Console.ReadLine());
            double e = Convert.ToDouble(Console.ReadLine());
            char f = Convert.ToChar(Console.ReadLine());
            string g = Console.ReadLine();
            byte s = Convert.ToByte(Console.ReadLine());

            Console.WriteLine("Вывод параметров: ");
            Console.WriteLine(a);
            Console.WriteLine(b);
            Console.WriteLine(c);
            Console.WriteLine(d);
            Console.WriteLine(e);
            Console.WriteLine(f);
            Console.WriteLine(g);
            Console.WriteLine(s);
           */
            //5 операций явного приведения
            double x = 10.75;
            int y = (int)x;
            Console.WriteLine(y);

            long largeNumber = 5000;
            int smallerNumber = (int)largeNumber;
            Console.WriteLine(smallerNumber);

            object obj = "Hello";
            string str = (string)obj;
            Console.WriteLine(str);

            float fop = 12.5F;
            int i = (int)fop;
            Console.WriteLine(i);

            decimal dell = 15.5m;
            double dbl = (double)dell;
            Console.WriteLine(dbl);

            //5 операций неявного приведения
            int muy = 10;
            double joy = muy;
            Console.WriteLine(muy);

            char cil = 'A';
            int ascii = cil;
            Console.WriteLine(ascii);

            int num = 1000;
            long bigNum = num;
            Console.WriteLine(num);

            float fse = 10.5F;
            double drt = fse;
            Console.WriteLine(drt);

            byte smallNum = 255;
            int largerNum = smallNum;
            Console.WriteLine(largerNum);

            //упаковку и распаковку значимых типов
            int upo = 580;
            object obupo = upo;
            int rasp = (int)obupo;
            Console.WriteLine(rasp);

            //неявно типизированная переменная
            var number = 54;
            var mess = "hello";
            Console.WriteLine("переменная int: " + number);
            Console.WriteLine("переменная int: " + mess);

            //Nullable переменная
            Nullable<double> nullDouble = null;
            Console.WriteLine("пустая переменная: " + nullDouble);

            //сокращенная форма nullable

            //переменная var
            //var variab = 10;
            //variab = "hello!!!";
            //Ошибка: нельзя присвоить строку переменной типа int

            //строковые литералы
            string str1 = "Hello, World!";
            string str2 = "HELLO, WORLD!";
            // Сравнение строк с учетом регистра
            bool areEqual = str1 == str2;
            Console.WriteLine("str1 == str2: " + areEqual);
            // Сравнение строк без учета регистра
            bool areEqualIgnoreCase = string.Equals(str1, str2, StringComparison.OrdinalIgnoreCase);
            Console.WriteLine("str1 equals str3 (ignore case): " + areEqualIgnoreCase);


            //сцепление, копирование, выделение подстроки, разделение строки на слова, вставки подстроки в заданную позицию, удаление заданной подстроки
            string strok1 = "Hello";
            string strok2 = "World";
            string strok3 = "I like C#";

            // 1. Сцепление строк
            string concatenatedString = strok1 + ", " + strok2 + "!";
            Console.WriteLine("Сцепление строк: " + concatenatedString);

            // 2. Копирование строки
            string copiedString = string.Copy(strok3);
            Console.WriteLine("Копирование строки: " + copiedString);

            // 3. Выделение подстроки
            string substring = strok3.Substring(1, 2); // извлекаем элементы
            Console.WriteLine("Выделение подстроки: " + substring);

            // 4. Разделение строки на слова
            string[] words = strok3.Split(' '); // разделение по пробелу
            Console.WriteLine("Разделение строки на слова:");
            foreach (string word in words)
            {
                Console.WriteLine(word);
            }

            // 5. Вставка подстроки в заданную позицию
            string insertedString = strok1.Insert(5, ", C#"); // Вставляем ", C#" после "Hello"
            Console.WriteLine("Вставка подстроки: " + insertedString);

            // 6. Удаление заданной подстроки
            string removedSubstring = strok3.Remove(2, 2);
            Console.WriteLine("Удаление подстроки: " + removedSubstring);

            // 7. Интерполирование строк
            int year = 2024;
            string interpolatedString = $"Welcome to {strok2}! The year is {year}.";
            Console.WriteLine("Интерполирование строк: " + interpolatedString);

            //пустая строка.string.IsNullOrEmpty
            string emptystr = "";
            string nullstr = null;
            // Проверка строк с использованием метода string.IsNullOrEmpty
            Console.WriteLine("emptystr is null or empty: " + string.IsNullOrEmpty(emptystr));
            Console.WriteLine("nullstr is null or empty: " + string.IsNullOrEmpty(nullstr));

            //StringBuilder
            StringBuilder sb = new StringBuilder("Hello, World!");
            Console.WriteLine("Исходная строка: " + sb.ToString());
            sb.Remove(5, 7); 
            Console.WriteLine("После удаления: " + sb.ToString());
            sb.Insert(0, "Start: ");
            Console.WriteLine("После добавления в начало: " + sb.ToString());
            sb.Append(" :End"); 
            Console.WriteLine("После добавления в конец: " + sb.ToString());

            //двумерный массив в виде матрицы
            int[,] matrix = {
            { 1, 2, 3, 4 },
            { 5, 6, 7, 8 },
            { 9, 10, 11, 12 }
        };

            Console.WriteLine("Матрица:");
            for (int ii = 0; ii < matrix.GetLength(0); ii++) // Перебор строк
            {
                for (int j = 0; j < matrix.GetLength(1); j++) // Перебор столбцов
                {
                    Console.Write(matrix[ii, j].ToString().PadLeft(4)); // Вывод элемента с отступом
                }
                Console.WriteLine(); // Переход на следующую строку
            }
            /*

            //одномерный массив строк. Выведите на консоль его содержимое, длину массива. Поменяйте произвольный элемент
            string[] stringArray = { "Apple", "Banana", "Cherry", "Date", "Elderberry" };
            Console.WriteLine("Содержимое массива:");
            for (int p = 0; p < stringArray.Length; p++)
            {
                Console.WriteLine($"Индекс {p}: {stringArray[p]}");
            }
            Console.WriteLine($"Длина массива: {stringArray.Length}");
            // Изменение произвольного элемента массива
            Console.Write("Введите индекс элемента для изменения (0 до {0}): ", stringArray.Length - 1);
            int index;
            while (!int.TryParse(Console.ReadLine(), out index) || index < 0 || index >= stringArray.Length)
            {
                Console.Write("Неверный индекс. Введите индекс снова (0 до {0}): ", stringArray.Length - 1);
            }
            Console.Write("Введите новое значение: ");
            string newValue = Console.ReadLine();

            // Замена элемента на новый
            stringArray[index] = newValue;

            // Вывод обновленного массива
            Console.WriteLine("Обновленное содержимое массива:");
            for (int p = 0; p < stringArray.Length; p++)
            {
                Console.WriteLine($"Индекс {p}: {stringArray[p]}");
            }
            */
            /*
            //ступечатый (не выровненный) массив вещественных чисел с 3-мя строками, в каждой из которых 2, 3 и 4 столбцов соответственно
            // В первой строке 2 столбца, во второй 3 столбца, в третьей 4 столбца
            double[][] jaggedArray = new double[3][];
            jaggedArray[0] = new double[2];
            jaggedArray[1] = new double[3];
            jaggedArray[2] = new double[4];

            // Ввод значений массива с консоли
            for (int p = 0; p < jaggedArray.Length; p++)
            {
                Console.WriteLine($"Введите значения для строки {p + 1} (количество значений: {jaggedArray[p].Length}):");
                for (int j = 0; j < jaggedArray[p].Length; j++)
                {
                    while (true)
                    {
                        Console.Write($"Введите значение для элемента [{p}, {j}]: ");
                        if (double.TryParse(Console.ReadLine(), out double value))
                        {
                            jaggedArray[p][j] = value;
                            break;
                        }
                        else
                        {
                            Console.WriteLine("Неверный ввод. Пожалуйста, введите вещественное число.");
                        }
                    }
                }
            }

            // Вывод ступенчатого массива
            Console.WriteLine("\nСтупенчатый массив:");
            for (int p = 0; p < jaggedArray.Length; p++)
            {
                Console.Write($"Строка {p + 1}: ");
                for (int j = 0; j < jaggedArray[p].Length; j++)
                {
                    Console.Write($"{jaggedArray[p][j],7:F2} "); // Форматирование значений до двух знаков после запятой
                }
                Console.WriteLine();
            }
            
            //неявно типизированные переменные для хранения массива и строки
            var intArray = new int[] { 1, 2, 3, 4, 5 };

            // для строки
            var message = "Hello, World!";

            // Вывод содержимого массива и строки
            Console.WriteLine("Массив:");
            foreach (var item in intArray)
            {
                Console.WriteLine(item);
            }

            Console.WriteLine("Строка:");
            Console.WriteLine(message);

            //кортеж из 5 элементов
            var tuple = (42, "Hello", 'A', "World", 12345678901234567890UL);

            //Выведите кортеж на консоль целиком и выборочно// Вывод всего кортежа на консоль
            Console.WriteLine($"Кортеж целиком: ({tuple.Item1}, {tuple.Item2}, {tuple.Item3}, {tuple.Item4}, {tuple.Item5})");

            // Вывод выборочных элементов (1-й, 3-й и 4-й элементы)
            Console.WriteLine($"1-й элемент: {tuple.Item1}");
            Console.WriteLine($"3-й элемент: {tuple.Item3}");
            Console.WriteLine($"4-й элемент: {tuple.Item4}");
            */
            /*
            //распаковка кортежа в переменные.различные способы распаковки кортежа
            // Способ 1: Распаковка кортежа в отдельные переменные
            var (intValue, stringValue1, charValue, stringValue2, ulongValue) = tuple;
            Console.WriteLine("Способ 1: Распаковка в отдельные переменные");
            Console.WriteLine($"intValue: {intValue}");
            Console.WriteLine($"stringValue1: {stringValue1}");
            Console.WriteLine($"charValue: {charValue}");
            Console.WriteLine($"stringValue2: {stringValue2}");
            Console.WriteLine($"ulongValue: {ulongValue}");

            // Способ 2: Использование переменной-заглушки (_) для игнорирования некоторых элементов
            var (ignored1, _, ignored3, _, _) = tuple;
            Console.WriteLine("\nСпособ 2: Использование переменной-заглушки (_) для игнорирования элементов");
            Console.WriteLine($"ignored1: {ignored1}"); // первый элемент
            Console.WriteLine($"ignored3: {ignored3}"); // третий элемент

            //Сравните два кортежа
            var tuple1 = (62, "Hello", 'A');
            var tuple2 = (42, "Hllo", 'A');

            Console.WriteLine("Сравнение кортежей:");
            // Сравнение кортежей на равенство
            Console.WriteLine($"tuple1 == tuple2: {tuple1 == tuple2}");
            // Сравнение кортежей на неравенство
            Console.WriteLine($"tuple1 != tuple2: {tuple1 != tuple2}");


            //функция с вызовом
            // Определение массива и строки
            int[] numbers = { 5, 3, 9, 1, 6 };
            string text = "Hello";

            // Вызов метода и получение результата
            var result = AnalyzeArrayAndString(numbers, text);

            // Вывод результата
            Console.WriteLine($"Максимальный элемент: {result.MaxValue}");
            Console.WriteLine($"Минимальный элемент: {result.MinValue}");
            Console.WriteLine($"Сумма элементов: {result.Sum}");
            Console.WriteLine($"Первая буква строки: {result.FirstChar}");
        }

        static (int MaxValue, int MinValue, int Sum, char FirstChar) AnalyzeArrayAndString(int[] arr, string str)
        {
            
            // Локальная функция для анализа массива и строки
            (int MaxValue, int MinValue, int Sum, char FirstChar) Analyze(int[] array, string text)
            {
                if (array.Length == 0)
                    throw new ArgumentException("Массив не должен быть пустым.");

                int max = array[0];
                int min = array[0];
                int sum = 0;

                foreach (var num in array)
                {
                    if (num > max) max = num;
                    if (num < min) min = num;
                    sum += num;
                }

                char firstChar = !string.IsNullOrEmpty(text) ? text[0] : throw new ArgumentException("Строка не должна быть пустой.");

                return (max, min, sum, firstChar);
            }

            return Analyze(arr, str);
            */

            //Определите две локальные функции
            // Определение двух локальных функций с использованием checked и unchecked
            int resultChecked = 0;
            int resultUnchecked = 0;

            // Локальная функция с использованием checked
            void CheckedAddition(int a=int.MaxValue, int b=1)
            {
                try
                {
                    resultChecked = checked(a + b);
                    Console.WriteLine($"Результат checked addition: {resultChecked}");
                }
                catch (OverflowException ex)
                {
                    Console.WriteLine($"Переполнение при checked addition: {ex.Message}");
                }
            }

            // Локальная функция с использованием unchecked
            void UncheckedAddition(int a = int.MaxValue, int b = 1)
            {
                resultUnchecked = unchecked(a + b);
                Console.WriteLine($"Результат unchecked addition: {resultUnchecked}");
            }

            // Примеры значений для демонстрации переполнения
            int a = int.MaxValue;
            int b = 1;

            // Вызов локальных функций
            CheckedAddition(a, b);       // Ожидается переполнение
            UncheckedAddition(a, b);     // Ожидается корректный результат с переполнением

            Console.WriteLine($"Результат проверки (checked): {resultChecked}");
            Console.WriteLine($"Результат проверки (unchecked): {resultUnchecked}");

            //Разместите в одной из них блок checked, в котором определите переменную типа int с максимальным возможным значением этого типа
            // Локальная функция с использованием checked
            void CheckedOperation()
            {
                try
                {
                    // Блок checked
                    int result;
                    checked
                    {
                        int maxValue = int.MaxValue;
                        Console.WriteLine($"Максимальное значение int: {maxValue}");
                        result = maxValue + 1; // Попытка переполнения
                        Console.WriteLine($"Результат checked addition: {result}");
                    }
                }
                catch (OverflowException ex)
                {
                    Console.WriteLine($"Переполнение при checked операции: {ex.Message}");
                }
            }

            // Локальная функция с использованием unchecked
           void UncheckedOperation()
            {
                // Блок unchecked
                unchecked
                {
                    int maxValue = int.MaxValue;
                    Console.WriteLine($"Максимальное значение int: {maxValue}");
                    int result = maxValue + 1; // Попытка переполнения
                    Console.WriteLine($"Результат unchecked addition: {result}");
                }
            }

            CheckedOperation();  // Ожидается исключение переполнения
            UncheckedOperation(); // Ожидается результат с переполнением

        }
    }
}
