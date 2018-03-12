#include <iostream>
#include <vector>
#include <algorithm>
using std::vector;
double value = 0.0;

class item
{
  public:
    int value, weight;

    //item(int v, int w){ value = v; weight = w; }
};
bool compare(item i1, item i2)
{
    double r1 = (double)i1.value / i1.weight;
    double r2 = (double)i2.value / i2.weight;
    return r1 > r2;
}

double get_optimal_value(int capacity, vector<item> items, int n)
{
    std::sort(items.begin(), items.end(), compare);
    int currentWeight = 0;
    double finalValue = 0.0;

    for (int i = 0; i < n; ++i)
    {
        if (currentWeight + items[i].weight <= capacity)
        {
            currentWeight += items[i].weight;
            finalValue += items[i].value;
        }
        else
        {
            int remainWeight = capacity - currentWeight;
            finalValue += items[i].value * ((double)remainWeight / items[i].weight);
            break;
        }
    }
    return finalValue;
}
int main()
{
    int n;
    int capacity;
    std::cin >> n >> capacity;
    vector<item> items(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> items[i].value >> items[i].weight;
    }

    double optimal_value = get_optimal_value(capacity, items, n);
    std::cout << optimal_value << std::endl;
    return 0;
}