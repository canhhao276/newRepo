#include <iostream>

using namespace std;
int map[11][11];
int number, x, y;

bool check3x3(){
    int blockX = x / 3;
    int blockY = y / 3;
    cout <<map[2][3]<<endl;
    for(int i = 1; i < 4; i++){
        for(int j = 1; j < 4; j++){
            if(map[blockX * 3 + i][blockY * 3 + j] == number){
                return false;
            }
        }
    }
    return true;
}

bool checkHorzontal(){
    for(int i = 1; i < 10; i++){
        if(number == map[x][i]){
            cout << "2" << endl;
            return false;
        } 
    }
    return true;
}

bool checkVertical(){
    for(int i = 1; i < 10; i++){
        if(number == map[i][y]){
            cout << "3" << endl;
             return false;
        }
    }
    return true;
}

int main(){
    freopen("input.txt", "r", stdin);
    for(int i = 1; i < 10; i++){
        for(int j = 1; j < 10; j++){
            cin >> map[i][j];
        }
        cin >> number >> x >> y;
    }
    if(check3x3() && checkHorzontal() && checkVertical()){
        cout << "Valid place." << endl;
    }
    else{
        cout << "invalid number." << endl;
    }
    cin.get();
    cin.ignore();
    return 0;
}