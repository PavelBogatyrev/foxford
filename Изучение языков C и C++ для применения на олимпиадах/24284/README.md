Класс currency - вывод
Добавьте к реализации класса 
currency
 перегруженный оператор вывода 
<<
.

Сумма выводится в виде числа рублей и числа копеек через знак "-", при этом количество копеек при выводе занимает ровно 2 цифры, незначащие разряды заполняются при необходимости нулями. Выводить конец строки не нужно.

Пример использования:

currency s(10, 5);
cout << s << endl;
должен вывести 
10-05
.

На проверку необходимо сдать только реализацию класса 
currency
, а также реализацию функций, при помощи перегружены операторы. Класс 
currency
 должен поддерживать ранее разработанную функциональность - конструкторы от двух целочисленных значений, методы 
rub()
 и 
cop()
.