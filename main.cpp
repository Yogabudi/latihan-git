#include <iostream>

using namespace std;

void angkaRandomNonRepetisi(int hasil[], int panjangArray) {
  srand(time(NULL));
  hasil[0] = (rand() % panjangArray);

  for(int i = 1; i < panjangArray; i++) {
    hasil[i] = -1;
  }

  for(int i = 1; i < panjangArray; i++) {
    bool valid = true;
    int r = 0;
    int angkaRandom = (rand() % panjangArray);

    while(hasil[r] != -1) {
      if(hasil[r] == angkaRandom) {
        valid = false;
        break;
      }
      r++;
    }

    if(valid) {
      hasil[i] = angkaRandom;
    }
    else {
      i--;
    }
  }
}

int main(int argc, char** argv) {
	int banyaknya = 10;
	int numbers[banyaknya];

	angkaRandomNonRepetisi(numbers, banyaknya);

	for(int i = 0; i < banyaknya; i++) {
		cout << numbers[i] + 1 << " ";
	}

	cout << endl;
	
	return 0;
}