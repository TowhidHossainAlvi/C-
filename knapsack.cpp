#include <iostream>
using namespace std;

struct Item
{
    char ItemsName[5];
    float value;
    float weight;
    float ratio;
};
void Knapsack(Item items[], int n, int W)
{
    float totalWeight = 0.0;
    float totalProfit = 0.0;
    int value;
    int wt;

    for (int i = 0; i < n; i++)
    {
        if (items[i].weight + totalWeight <= W)
        {
            totalWeight += items[i].weight;
            totalProfit += items[i].value;
        }
        else
        {
            wt = (W - totalWeight);
            value = wt * (items[i].value / items[i].weight);
            totalWeight += wt;
            totalProfit += value;
        }
    }
    cout << "Total weight: " << totalWeight << endl;
    cout << "Maximum Profit: " << totalProfit << endl;
}

int main()
{
    Item items[2] = {
        {"A", 280.0, 40.0, 0.0},
        {"B", 100.0, 10.0, 0.0},
        // {"C", 120.0, 20.0, 0.0},
        // {"D", 120.0, 24.0, 0.0},

    };
    Item temp;
    int n = 2;
    int W = 60;
    for (int i = 0; i < n; i++)
    {
        items[i].ratio = items[i].value / items[i].weight;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (items[j + 1].ratio > items[j].ratio)
            {
                temp = items[j + 1];
                items[j + 1] = items[j];
                items[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << items[i].ratio << " " ;
    }
    cout << endl;
    Knapsack(items, n, W);
    return 0;
}
