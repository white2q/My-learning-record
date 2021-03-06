#include <stdio.h>
#include <stdlib.h>
/**
* 可变数组 
*/

const BLOCK_SIZE = 20;							//增加固定长度 

typedef struct {
	int *array;
	int size; 
}Array; 

Array array_create(int init_size)				//molloc一个初始数组 
{
	Array a;
	a.size = init_size;
	a.array = (int *)malloc(sizeof(int) * a.size);
	return a;
}
void array_free(Array *a)						//释放数组 
{
	free(a->array);
	a->array = NULL;
	a->size = 0;
}					
int array_size(const Array *a)					//封装-数组长度 
{
	return a->size;
}	
int* array_at(Array *a, int index)				//读取指定数组元素并判断是否执行加长数组操作 
{
	if( index >= a->size ) 
	{
		array_inflate(a, (index / BLOCK_SIZE + 1) * BLOCK_SIZE - a->size);
	}
	return &(a->array[index]);
}			
void array_inflate(Array *a, int more_size)		//加长函数 
{
	int i;
	int *p = (int *)malloc(sizeof(int) * (a->size + more_size));
	for(i = 0; i < a->size; i++)
	{
		p[i] = a->array[i];
	}
	free(a->array);
	a->array = p;
	a->size += more_size;
} 

int main()
{
	Array a = array_create(5);
	int number = 0;
	int cnt = 0;
	while(number != -1)
	{
		scanf("%d",&number);
		if(number != -1)
			*array_at(&a, cnt++) = number;
			printf("%d ",*array_at(&a,cnt - 1));
	}
	array_free(&a);
	
	return 0;
}
