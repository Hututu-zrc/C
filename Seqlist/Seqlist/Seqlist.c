#include"Seqlist.h"
//这里的文件我们用来详细的编写具体的函数内容

//这里我们将接受顺序标的地址，并修改顺序表。
void SeqlistInit(SL* ps)
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}
void SeqlistDestory(SL* ps)
{
	free(ps->a);
	ps -> a = NULL;
	ps->capacity = ps->size = 0;
}
void SeqlistCheckCapacity(SL* ps)
{
	if (ps->size == ps->capacity)//首先判断两者是否相等，相等的时候我们选择扩容
	{
		//如果我们的capacity为0，扩容无效，我们首先判断，在扩容时按照2倍扩容
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		//这里只是将数值上面进行了更改，下面我们将对空间进行扩容
		//realloc用来检查我们空间，如果我们的空间为空，realloc和malloc一样的效果将其扩容
		SLdatatype* tmp = (SLdatatype*)realloc(ps->a, newcapacity * sizeof(SLdatatype));
		if (tmp == NULL)//这里检查我们的空间时候扩容是否成功
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;//将我们扩容成功地址赋给地址a
		ps->capacity = newcapacity;//更新我们的capacity的数值
	}
}

void SeqlistPushBack(SL* ps, SLdatatype x)//尾插一个数据
//三种情况
//1，顺序表没有空间
//2，空间不够，扩容
//3，空间足够，直接插入
{	
	SeqlistCheckCapacity(ps);
	ps->a[ps->size] = x;//扩容完毕，直接在size上面插入数据
	//最后一个元素位序是size，但是实际储存的地址是ps->a[ps->size-1]
	// 我们尾插数据在最后一个元素的后面尾插，也就是ps->a[ps->size]
	//我们使用的是顺序表，所以将x的地址给第一个size的地址
	//顺序表的地址的按照顺序来的，不可以断开，所以size++即可
	ps->size++;//表长加一
}
void Seqlistprint(SL* ps)
{
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}


void SeqlistPopBack(SL* ps)//删除最后一个数据
{
	//方法一：
	if (ps->size > 0)//这里必须对pa->size--;进行控制，否则最后会减成负值，最后会越界出问题
	{
		
		ps->a[ps->size - 1]=0;//实际上是数组，我们需要将下标减1
		ps->size--;
	}
	////方法二：
	//assert(ps->size > 0);//这里出问题会直接终止程序，并且会报错断言问题出现的地方
	//ps->size--;
	
}
void SeqlistPushFront(SL* ps, SLdatatype x)//头部插入一个数据
{
	//检查增容
	SeqlistCheckCapacity(ps);
	//挪动数据
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	//插入数据
	ps->a[0] = x;
	ps->size++;
}
void SeqlistPopFront(SL* ps)//头部删除一个数据
{
	if (ps->size > 0)
	{
		//挪动数据
		int begin = 1;
		while (begin < ps->size)
		{
			ps->a[begin - 1] = ps->a[begin];
			++begin;
		}
	}
	//覆盖一个数据后，长度减一
	ps->size--;
}

void SeqlistInsert(SL* ps, int pos, SLdatatype x)
{
	//检查增容
	SeqlistCheckCapacity(ps);
	int end = ps->size;//end是最后一个空元素的地址
	while(end>=pos-1)//这里的在pos位置插入，pos的地址为pos-1
	//end的最小缩减到pos-1
	{
		ps->a[end] = ps->a[end-1];
		--end;
	}
	ps->a[pos - 1] = x;
	ps->size++;
}
void SeqlistErase(SL* ps, int pos)
{
	int erase = pos;//这里采用的思路是将pos位置的数据直接覆盖掉
	while (erase <ps->size )
	{
		ps->a[erase - 1] = ps->a[erase];
		++erase;
	}
	ps->size--;
}