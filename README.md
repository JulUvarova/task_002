# Task 002. Unusual geometry.
Добрый день, коллеги. Сегодня мы продолжаем решать задачи в нашем peer to peer канале Peer Education!

Правила: первое сообщение в канале.

#### Задание
Треугольник Паскаля (арифметический треугольник) — бесконечная таблица биномиальных коэффициентов, имеющая треугольную форму. В этом треугольнике на вершине и по бокам стоят единицы. Каждое число равно сумме двух расположенных над ним чисел. Строки треугольника симметричны относительно вертикальной оси. Назван в честь Блеза Паскаля. Числа, составляющие треугольник Паскаля, возникают естественным образом в алгебре, комбинаторике, теории вероятностей, математическом анализе, теории чисел.

> Первое упоминание треугольной последовательности биномиальных коэффициентов под названием meru-prastaara встречается в комментарии индийского математика X века Халаюдхи к трудам другого математика, Пингалы. Треугольник исследуется также Омаром Хайямом около 1100 года, поэтому в Иране эту схему называют треугольником Хайяма. В 1303 году была выпущена книга «Яшмовое зеркало четырёх элементов» китайского математика Чжу Шицзе, в которой был изображен треугольник Паскаля на одной из иллюстраций; считается, что изобрёл его другой китайский математик, Ян Хуэй (поэтому китайцы называют его треугольником Яна Хуэя).

 <image src="images/pascal_triangle.png" alt="pascal_triangle" width=500px>

###### Задача 1. Необходимо реализовать программу для вычисления и отображения основания треугольника Паскаля. На ввод подается число - количество линий в треугольнике, задача программы вычислить треугольник и вывести на экран основание. Сборка проекта должна осуществляться с использованием Makefile, стадия сборки pascal_triangle. Бинарник должен располагаться в папке bin и называться pascal_triangle. Необходимо проверить корректность ввода. В случае любой ошибки выводить на экран "Puck you, Verter!".

> Внимание: гарантировано, что число на вводе будет не больше 30.

> [Подсказка](https://foxford.ru/wiki/matematika/treugolnik-paskalya?utm_referrer=https%3A%2F%2Fwww.google.com%2F)

###### Бонус. Задача 2. Необходимо реализовать программу которая будет заполнять квадратную матрицу последовательно, значениями из треугольника Паскаля. На вход подается число - размерность матрицы. Программа сама должна вычислять значения треугольника необходимого для заполнения. Вся матрица должна быть заполнена числами из треугольника. В качестве ответа на экран должна выводиться матрица, без пробелов в конце строки. Сборка проекта должна осуществляться с использованием Makefile, стадия сборки pascal_matrix. Бинарник должен располагаться в папке bin и называться pascal_matrix. Необходимо проверить корректность ввода. В случае любой ошибки выводить на экран "Puck you, Verter!".
> Пример: \
> 3    
    1 1 1 \
    1 2 1 \
    1 3 3

> Внимание: гарантируется, что число на вводе будет не больше 10.

> Примечание: в случае использования динамической памяти, не забудьте воспользоваться утилитой **valgrind/leaks**.

Задачи направлены на умение работать с комбинаторными алгоритмами и матрицами. Задача 1 имеет сложность Easy на всем известной платформе, а задачу 2 я придумал. 

Дедлайн на эти задания: **Пятница 23:59 01.03.2024.**

Увидимся в понедельник!
