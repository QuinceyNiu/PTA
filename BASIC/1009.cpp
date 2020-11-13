//https://pintia.cn/problem-sets/994805260223102976/problems/994805314941992960

#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main()
{
	vector<string> v;
	string str;
	getline(cin,str);//读取字符串，\n也读取了
	string tmp="";
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='\n')//如果发现\n,退出循环（最后一个单词）
			break;
		if(str[i]!=' ')///如果不是空格，说明仍然是当前单词里面的字母
			tmp += str[i];
		else                      // 如果是空格，这个单词提取完毕，将其保存到vector尾部
		{
			v.push_back(tmp);
			tmp="";
		}
	}
	v.push_back(tmp);   //最后一个单词没有空格，是从\n跳转过来的  所以最后需要加上
	for(int i=v.size()-1;i>=0;i--)
	{
		if(i!=0)
			cout<<v[i]<<" ";
		else
			cout<<v[i];
	}

	return 0;
}

