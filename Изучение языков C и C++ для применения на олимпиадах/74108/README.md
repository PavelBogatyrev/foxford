Банковские счета
У банка есть клиенты. Каждый клиент имеет ровно один счёт. Напишите программу (обязательно с использованием ассоциативного массива), которая будет выполнять последовательность запросов таких двух видов: 1) начинается с числа , затем через пробел следует имя клиента (слово из латинских букв), далее через пробел идет сумма денег, которая добавляется к счёту текущего клиента (целое число, не превышает по модулю ). 2) начинается с числа , через пробел следует имя клиента. На каждый такой запрос программа должна ответить, какая сумма в данный момент есть на счету заданного клиента. Если такое имя клиента пока ни разу не упоминалось в запросах вида , выводите вместо числа слово ERROR. В начале работы программы у всех клиентов на счету . Затем суммы могут становиться как положительными, так и отрицательными. Обратите внимание, что в ситуации, когда клиент снял суммарно ровно столько же денег, сколько положил, сумма на счете становится равной ; но, раз его имя уже встречалось, нулевое значение не является основанием выводить ERROR.

Входные данные
Первая строка стандартного входного потока — количество запросов . Далее следуют  строк, в каждой из которых описан один из двух описанных выше видов запроса.

Выходные данные
На каждый запрос -го вида нужно вывести текущее значение на счету заданного клиента (или слово ERROR).

ввод	вывод
7
1 asdf 3
1 zxcv 5
2 asdf
1 asdf -2
2 asdf
2 lalala
2 zxcv
3
1
ERROR
5
