#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for (i = 0; i <= 12; i++)    //��ӡhehe��ѭ������arr[12]��ʱ��i��Ϊ0
//	{
//		printf("hehe\n");   //��Ϊarr[12]��i�ĵ�ַһ�����ֲ�������ջ�ڴ洢��ջ�洢�Ӹߵ��ͣ�
//		arr[i] = 0;         //��forѭ��Խ�����ʱ�ͳ�������ѭ���Ŀ���
//	}
//	return 0;
//}

//
//void my_strcpy(char* dest,char*  src)
//{
//	while (*src!='\0')    //��*str='\0'ʱֹͣѭ��
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;        //ǰ��ѭ���а�bit�Ѿ��Ž�dest���ˣ�����ֻʣ��һ��'\0',Ҳ���Ž�ȥ
//}
//
//int main()
//{
//	//strcpy
//	//�ַ�������
//	char arr1[] = "%########";
//	char arr2[] = "bit";
//	//int sz = sizeof(arr2) / sizeof(arr1[0]);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);       //��Ϊ��'b' 'i' 't' '\0'������arr1�У�arr1������'\0'��ֹͣ������
//								//�����####�Ͳ��ô�ӡ��
//}





//�Ż�   1
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)    //����һ���ǿ�ָ��ʱ�������д���
//	{
//		while (*dest++ = *src++)    //������'\0'ʱֹͣ��'\0'ASCLL��ֵ��0
//		{
//			;     //���ú��
//		}
//		//*dest = *src;        //ǰ��ѭ���а�bit�Ѿ��Ž�dest���ˣ�����ֻʣ��һ��'\0',Ҳ���Ž�ȥ
//	}
//}



//�Ż�   2
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);     //��Ϊ��ָ�뱨�����ǵĻ�������,�ж���
//	while (*dest++ = *src++)    //������'\0'ʱֹͣ��'\0'ASCLL��ֵ��0
//	{
//		;     //���ú��
//	}
//		//*dest = *src;        //ǰ��ѭ���а�bit�Ѿ��Ž�dest���ˣ�����ֻʣ��һ��'\0',Ҳ���Ž�ȥ
//}
//int main()
//{
//	//strcpy
//	//�ַ�������
//	char arr1[] = "%########";
//	char arr2[] = "bit";
//	//int sz = sizeof(arr2) / sizeof(arr1[0]);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);       //��Ϊ��'b' 'i' 't' '\0'������arr1�У�arr1������'\0'��ֹͣ������
//								//�����####�Ͳ��ô�ӡ��
//}
//
//
//
////�Ż�   3
//void my_strcpy(char* dest, const char* src) //���ж������෴�Ǳ���
//{
//	assert(dest != NULL);
//	assert(src != NULL);     //��Ϊ��ָ�뱨�����ǵĻ�������,�ж���
//	while (*dest++ = *src++)    //������'\0'ʱֹͣ
//	{
//		;     //���ú��
//	}
//	//*dest = *src;        //ǰ��ѭ���а�bit�Ѿ��Ž�dest���ˣ�����ֻʣ��һ��'\0',Ҳ���Ž�ȥ
//}
//int main()
//{
//	//strcpy
//	//�ַ�������
//	char arr1[] = "%########";
//	char arr2[] = "bit";
//	//int sz = sizeof(arr2) / sizeof(arr1[0]);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);       //��Ϊ��'b' 'i' 't' '\0'������arr1�У�arr1������'\0'��ֹͣ������
//								//�����####�Ͳ��ô�ӡ��
//}




//int main()
//{
//	const int num = 10;   //������ı�num��ֵ
//	int n = 100;
//
//	int*const p = &num;   //const
//	//*p = &num;
//	p = n;
//	printf("%d\n", num);
//}


int main()
{

	return 0;

}