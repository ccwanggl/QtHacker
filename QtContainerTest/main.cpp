#include <iostream>
#include <QVector>

int main()
{
    QVector<int> vals{1, 3, 4, 5};

    std::cout << "The size of the vector is: " << vals.size() << std::endl;
    std::cout << "The first item is: " << vals.first() << std::endl;
    std::cout << "The last item is: " << vals.last() << std::endl;

    vals.append(2);
    vals.prepend(93);

    for(auto item : vals)
    {
        std::cout << item << " ";
    }

    std::cout << std::endl;
}
