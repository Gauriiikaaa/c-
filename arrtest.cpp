#include <iostream>
using namespace std;
int main(int input[], int size, int x) {
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size;j++){
            if(i!=j){
                if((input[i] + input[j]) ==0){
					if(input[i] < input[j]){
                        cout << input[i]<<" "<< input[j] << endl;
                       
                    }
                    else{
                        cout << input[j]<<" "<< input[i] << endl;
                    }
				}
            }
        }
    }
}