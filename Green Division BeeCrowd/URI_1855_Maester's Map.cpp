#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int x, y; //x=col, y=row.
    cin >> x >> y;

    //create character type array, taking character input
    char arr[y][x];
    for(int r=0; r<y; r++)
    {
        for(int c=0; c<x; c++)
        {
            cin >> arr[r][c];
        }
    }

    //Create an int array for mark the visited index
    //Initialize all its value 0
    int visited[y][x];
    memset(visited, 0, sizeof(visited));

    int row = 0, col = 0;
    int right = 0, up = 0;
    bool check = false;

    /*while condition = if any symbol point outside the map
      then it is an invalid map. */
    while( (row>=0 && row<y) && (col>=0 && col<x) )
    {
        if(visited[row][col] == 1)
        {
            break;
        }

        visited[row][col] = 1;

        //check in which direction map indicates
        if(arr[row][col] == '>')//move towards right
        {
            right = 1;
            up = 0;
        }
        else if(arr[row][col] == '<')//move towards left
        {
            right = -1;
            up = 0;
        }
        else if(arr[row][col] == '^')//moving up
        {
            right = 0;
            up = 1;
        }
        else if(arr[row][col] == 'v')//moving down
        {
            right = 0;
            up = -1;
        }

        //take decission in which direction we should go
        if(right==1 && up==0) col++;
        else if(right ==-1 && up==0) col--;
        else if(right==0 && up==1) row--;
        else if(right==0 && up == -1) row++;

        //check whether we get * or not
        if(arr[row][col] == '*')
        {
            check = true;
            break;
        }
    }

    if(check)
    {
        cout<< "*" << endl;
    }
    else
    {
        cout << "!" << endl;
    }

    return 0;
}
