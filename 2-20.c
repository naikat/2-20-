习题

 在一个有序数组中查找具体得某个数字n。

#include<stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 5;
	//写一个代码，在arr数组（有序的）中找到7
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("找到了，下标是：%d\n", i);
			break;
		}

	}
	if (i == sz)
		printf("找不到\n");

	return 0;

	//逐个从 1-10 一个一个试验 效率较低
}


折半查找算法/二分查找算法


#include<stdio.h>


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	
	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	int left = 0;//左下标
	int right = sz - 1;//右下标

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;

		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
		if (left > right)
		{
			printf("找不到\n");

		}
		
			

	}
	return 0;


	

}


编写代码，演示多个字符从两端移动，向中汇聚。


 weclome come to guangdong!!!     arr1 
 ############################     arr2

每次将arr1的最左边和最右边下标 赋值给 aar2    每次 left++  right--    循环至无


#include<string.h>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char arr1[] = "weclome come to guangdong!!!";
	char arr2[] = "############################";
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0])-2;// 如 char arr[] = "abc"   其中包含下标有[a b c \0] 因此下标 是 0 1 2 3 但是 \0 不计入字符数内
	//如 char arr[] = "abc"   其中包含下标有[a b c \0] 因此下标 是 0 1 2 3 但是 \0 不计入字符长度内 因此 要 -2
	int right = strlen(arr1) - 1;
	//strlen 求字符串长度遇到\0 停止 个数不包含\0
	//因为 下标总比 元素个数少1 因此 -1

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//休息一秒  100单位是 毫秒
		system("cls");//执行系统命令的函数  cls  清空屏幕
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
	
}

编写代码实现，模拟用户登录情景，并且只能登录三次。




#include<string.h>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)// == 不能用于 两个字符串比较两个字符串是否相等 应该使用一个库函数-strcmp
		{
			printf("登陆成功\n");
			break;
		}


	}
	if (i == 3)
		printf("三次密码输入错误，退出程序\n");
	return 0;
}
