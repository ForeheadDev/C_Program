#include <stdio.h>

typedef struct {
	float deretNilai[255];
	int nElement;
} MAHASISWA;

int isPass (float x, float limitValue) {
  //fungsi untuk melakukan validasi apakah sebuah nilai (X) memenuhi nilai batas lulus,
  //Menghasilkan 1 jika  x >= limitValue, dan menghasilkan 0 jika berada dibawah nilai batas
  if(x >= limitValue)
  {
  	return 1;
  }else
  {
  	return 0;
  }
  
}


int isCountingIP (MAHASISWA deretIPMhs) {
// fungsi untuk menghitung jumlah mahasiswa yg diatas batas kelulusan berdasarkan nilai IP yg pass
    int i, count = 0;
    float limitValue = 2.75;
	for(i = 0; i < deretIPMhs.nElement; i++)
	{
		if(isPass(deretIPMhs.deretNilai[i], limitValue) == 1)
			count++;
	}
	
	return count;
}

int main()
{
	MAHASISWA deretIPMhs;
	int result, i;
	scanf("%d", &deretIPMhs.nElement);
	for(i = 0; i < deretIPMhs.nElement; i++)
		scanf("%f", &deretIPMhs.deretNilai[i]);
	
	result = isCountingIP(deretIPMhs);
	printf("%d", result);
	
	return 0;
}
