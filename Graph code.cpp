#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main()
{
    string station[20], name;
    int a[20][20] = {0};
    int n, e, x, y, found = -1;

    // Enter number of stations
    cout << "Enter number of stations: ";
    cin >> n;

    if (n <= 0 || n > 20)
    {
        cout << "Invalid number of stations!";
        return 0;
    }

    // Enter station names
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < n; i++)
    {
        cout << "Enter station name " << i << ": ";
        getline(cin, station[i]);
    }

    // Enter number of connections
    cout << "Enter number of connections: ";
    cin >> e;

    if (e < 0 || e > n * (n - 1) / 2)
    {
        cout << "Invalid number of connections!";
        return 0;
    }

    // Create adjacency matrix
    for (int i = 0; i < e; i++)
    {
        cout << "Enter station indexes (0 to " << n - 1 << "): ";
        cin >> x >> y;

        if (x < 0 || x >= n || y < 0 || y >= n || x == y)
        {
            cout << "Invalid indexes! Try again.\n";
            i--;
            continue;
        }

        a[x][y] = 1;
        a[y][x] = 1;
    }

    // Display adjacency matrix
    cout << "\nAdjacency Matrix:\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // Display station list
    cout << "\nRailway Stations:\n";

    for (int i = 0; i < n; i++)
    {
        cout << i << " - " << station[i] << endl;
    }

    // Search selected station
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nEnter station name to search: ";
    getline(cin, name);

    for (int i = 0; i < n; i++)
    {
        if (station[i] == name)
        {
            found = i;
            break;
        }
    }

    // Display directly connected stations
    if (found == -1)
    {
        cout << "Station not found!";
    }
    else
    {
        cout << "\nDirectly connected stations to "
             << station[found] << ":\n";

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[found][i] == 1)
            {
                cout << station[i] << endl;
                count++;
            }
        }

        if (count == 0)
        {
            cout << "No direct connections found.";
        }
    }

    return 0;
}
