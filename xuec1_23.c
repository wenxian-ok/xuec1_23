#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char** argv) {
	
	int a=20;
	unsigned int b=-10;
	
	//aԭ�룺00000000 00000000 00000000 00010100 
	//���룺 01111111 11111111 11111111 11101011
	//���룺 01111111 11111111 11111111 11101100
	//bԭ�룺00000000 00000000 00000000 00001010  �޷�����ԭ�롢���롢������ͬ 
	//a+b�ͣ����룩��01111111 11111111 11111111 11110110 
	//a+b���룺      01111111 11111111 11111111 11110101
	//a+bԭ�룺      00000000 00000000 00000000 00001010             
	printf("%d",a+b);//10 
	return 0;
}*/
/*unsigned char i=0;
int main(){
	int count=0;
	for(i=0;i<=255;i++){
		
		printf("hello world\n");
		count++;
	}
	printf("%d",count);
	return 0;
} */

/*int main(){
	char* p = "abcdef";
	//*p='w';
	printf("%s",p);
	return 0;
	
}*/

int main(){
	int arr1[]={1,2,3,4,5,6};
	int arr2[]={2,3,4,5,6,7};
	int arr3[]={3,4,5,6,7,8};

	int* prr[]={arr1, arr2,arr3};
	
	int i=0;
	for(i;i<3;i++){
		int j=0;
		for(j;j<6;j++){
			printf("%d",*(prr[i]+j));
		}
		printf("\n");
	}
	return 0;
}

