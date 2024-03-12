#include<iostream>
#include <string>
using namespace std;
//class Solution {
//public:
//    bool repeatedSubstringPattern(string s) {
//        int slow = 0;
//        string strmin;
//        int flag = 0;
//        for (int fast = 1; fast < s.size(); fast++)
//        {
//            if (s[fast] == s[slow] && flag != 1)
//            {
//                strmin = s.substr(slow, fast - slow);
//                flag = 1;
//            }
//            if (flag == 1)
//            {
//                string temp;
//                if (fast + strmin.size() < s.size())
//                    temp.append(s, fast, fast + strmin.size());
//
//                if (strmin.compare(temp) != 0)
//                {
//                    flag = 0;
//       
//                }
//                else
//                    fast += strmin.size() - 1;
//            }
//
//        }
//        if (strmin.compare(s) == 0)
//            return false;
//        return true;
//    }
//};
//
//class Solution {
//public:
//    string reverseWords(string s) {
//        int left = 0;
//        while (s[left] == ' ')
//            s.erase(left, 1);
//        int right = s.size() - 1;
//        while (s[right] == ' ')
//        {
//            s.erase(right, 1);
//            right = s.size() - 1;
//        }
//        int start = 0;
//        int cur = 0;
//        while (cur < s.size())
//        {
//            if (cur < s.size() && s[cur] == ' ' && s[cur + 1] != ' ')
//            {
//                reverse(s.begin() + start, s.begin() + cur);
//                start = cur + 1;
//            }
//            else if (cur < s.size() && s[cur] == ' ' && s[cur + 1] == ' ')
//            {
//                s.erase(cur, 1);
//                cur--;
//
//            }
//            cur++;
//        }
//        reverse(s.begin() + start, s.end());
//        reverse(s.begin(), s.end());
//        return s;
//    }
//};
//
//int main()
//{
//    Solution solu;
//    cout << solu.reverseWords("  hello world  ") << endl;
//    return 0;
//
//}


//#include <iostream>
//#include <cctype>
//#include <string>
//using namespace std;
//int main()
//{
//    string s;
//    cin >> s;
//    int count = 0;
//    for (int i = 0; i < s.size(); i++)
//    {
//        if (isdigit(s[i]))
//            count++;
//    }
//    int slow = s.size() - 1;
//    s.resize(s.size() + count * 6 - count);
//    for (int fast = s.size() - 1; fast >= 0; fast--)
//    {
//        if (slow >= 0 && fast >= 0 && isdigit(s[slow]))
//        {
//            s.insert(fast - 5, "number");
//            fast -= 5;
//            slow--;
//        }
//            
//        else
//        {
//            s[fast]=s[slow--]  ;
//        }
//    }
//    cout << s << endl;
//    return 0;
//}

//#include <iostream>
//#include <cctype>
//#include <string>
//using namespace std;
//int main()
//{
//    string s;
//    cin >> s;
//    int count = 0;
//    for (int i = 0; i < s.size(); i++)
//    {
//        if (isdigit(s[i]))
//            count++;
//    }
//    int slow = s.size() - 1;
//    s.resize(s.size() + count * 6 - count);
//    for (int fast = s.size() - 1; fast >= 0; fast--)
//    {
//        if (slow >= 0 && fast >= 0 && isdigit(s[slow]))
//        {
//            s[fast - 5] = 'n';
//            s[fast - 4] = 'u';
//            s[fast - 3] = 'm';
//            s[fast - 2] = 'b';
//            s[fast - 1] = 'e';
//            s[fast] = 'r';
//            fast -= 5;
//            slow--;
//        }
//
//        else
//        {
//            s[fast] = s[slow--];
//        }
//    }
//    cout << s << endl;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//#include <vector> 
//#include <list>
//#include <algorithm>
//class Solution {
//public:
//    int removeDuplicates(vector<int>& nums) {
//        int slow = 0;
//        int flag = 0;
//        for (int fast = slow + 1; fast < nums.size(); fast++)
//        {
//            if (nums[fast] == nums[slow] && flag != 1)
//            {
//                slow++;
//                flag = 1;
//            }
//            else if(nums[fast] > nums[slow-1])
//            {
//                nums[slow++] = nums[fast];
//            }
//        }
//        return slow;
//    }
//};
//
//void print(int val)
//{
//    cout << val << " ";
//}
//int main()
//{
//    vector<int>nums;
//
//    nums.push_back(0);
//    nums.push_back(0);
//    nums.push_back(1);
//    nums.push_back(1);
//    nums.push_back(1);
//    nums.push_back(2);
//    nums.push_back(2);
//    nums.push_back(3);
//    nums.push_back(3);
//    nums.push_back(4);
//    Solution s;
//    int ret = s.removeDuplicates(nums);
//    cout << ret << endl;
//    for_each(nums.begin(), nums.end(), print);
//    return 0;
//}


int main()
{
	cout << "我成功了" << endl;
	cout << "3.11" << endl;
	return 0;
}