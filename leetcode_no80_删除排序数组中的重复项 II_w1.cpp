/* ------------------------------------------------------------------|
给定一个排序数组，你需要在原地删除重复出现的元素，使得每个元素最多出现两次，返回移除后数组的新长度。

不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。

示例 1:

给定 nums = [1,1,1,2,2,3],

函数应返回新长度 length = 5, 并且原数组的前五个元素被修改为 1, 1, 2, 2, 3 。

你不需要考虑数组中超出新长度后面的元素。
示例 2:

给定 nums = [0,0,1,1,1,1,2,3,3],

函数应返回新长度 length = 7, 并且原数组的前五个元素被修改为 0, 0, 1, 1, 2, 3, 3 。

你不需要考虑数组中超出新长度后面的元素。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。|
------------------------------------------------------------------*/

/*	双指针法
*
*	执行用时：4 ms, 在所有 C++ 提交中击败了99.92%的用户
*	内存消耗：6.3 MB, 在所有 C++ 提交中击败了57.29%的用户
*/

#include <iostream>
#include <string> 
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>

using namespace std;

int removeDuplicates(vector<int>& nums) {
	int i = 0;
	for (int j = 0; j < nums.size(); j++) {
		if (i < 2 || nums[i - 2] < nums[j]) {
			nums[i] = nums[j];
			i++;
		}
	}
	return i;

	//int i = 0;
	//for (int x : nums) {
	//	if (i < 2 || x > nums[i - 2]) {				/*	如果重复个数大于2，那么nums[i-2] < x就是不成立的	*/
	//		nums[i] = x;
	//		i++;
	//	}
	//}
	//return i;
}

int main() {
	vector<int> nums = { 1,1,1,2,2,3 };
	removeDuplicates(nums);
}