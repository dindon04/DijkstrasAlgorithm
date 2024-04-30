#include <iostream>
#include <vector>
#include <limits>


int main()
{
    int size;
    const int INF = std::numeric_limits<int>::max();

    std::cout << "size of matrix: ";
    std::cin >> size;

    std::vector<std::vector<int>> adjacencyMatrix(size, std::vector<int>(size));
    std::vector<int> shortestDistances(size, INF);
    std::vector<bool> visited(size, false);

    std::cout << "the adjacency matrix(add numbers):" << std::endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            std::cin >> adjacencyMatrix[i][j];
        }
    }

    shortestDistances[0] = 0;

    for (int count = 0; count < size - 1; count++)
    {
        int minDistance = INF;
        int minIndex;

        for (int i = 0; i < size; i++)
        {
            if (!visited[i] && shortestDistances[i] < minDistance)
            {
                minDistance = shortestDistances[i];
                minIndex = i;
            }
        }

        visited[minIndex] = true;

        for (int i = 0; i < size; i++)
        {
            if (!visited[i] && adjacencyMatrix[minIndex][i] && shortestDistances[minIndex] != INF &&
                shortestDistances[minIndex] + adjacencyMatrix[minIndex][i] < shortestDistances[i]) {
                shortestDistances[i] = shortestDistances[minIndex] + adjacencyMatrix[minIndex][i];
            }
        }
    }

    std::cout << "\nshortest distances:" << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << "distance " << i + 1 << ": " << shortestDistances[i] << std::endl;
    }

    return 0;
}
