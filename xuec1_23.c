#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char** argv) {
	
	int a=20;
	unsigned int b=-10;
	
	//a原码：00000000 00000000 00000000 00010100 
	//反码： 01111111 11111111 11111111 11101011
	//补码： 01111111 11111111 11111111 11101100
	//b原码：00000000 00000000 00000000 00001010  无符号数原码、反码、补码相同 
	//a+b和（补码）：01111111 11111111 11111111 11110110 
	//a+b反码：      01111111 11111111 11111111 11110101
	//a+b原码：      00000000 00000000 00000000 00001010             
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

