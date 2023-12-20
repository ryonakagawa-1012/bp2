#include <stdio.h>

int max(int *data) {
    int ans = data[0];
    
    for (int i = 1; i < 5; i++){
        if (ans < data[i]){
            ans = data[i];
        }
    }

    return ans;
}

int main() {
    int data[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &data[i]);
    }

    printf("max : %d\n", max(data));

    return 0;

}