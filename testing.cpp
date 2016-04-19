#include <iostream>

/* memset example */
#include <stdio.h>
#include <string.h>
#include <vector>
using namespace std;

int main ()
{
  //bool isUnique1(string s);
  //string s = "asfwrhrjtukmgfhgsdgdfhgfjghjukjsgagsdhdfjfgjfjf";
  //isUniquel(s);
  /*int nums[] = {1, 1, 2};
  int numsSize = 3;
  int removeDuplicates(int nums[], int numsSize);
  removeDuplicates(nums, numsSize);
  */
  bool isAnagram(string s, string t);
  string s = "anagram";
  string t = "nagaram";
  if(isAnagram(s, t))
   cout << "true" <<endl;
  else 
   cout << "false" << endl;
  system("PAUSE");

}
bool isAnagram(string s, string t) {  
      vector<int> charcount(26, 0);  
      for(int i =0; i< s.length(); i++) { 
              cout << s[i] << endl;
              cout << s[i] - 'a' << endl;
              cout << charcount[s[i] - 'a'] << endl; 
              cout << "aojiao de fengexian" << endl;
        charcount[s[i] - 'a'] ++;  
        cout << charcount[s[i] - 'a'] << endl; 
        cout << "youyi aojiao de fengexian" << endl;
      }        for(int i =0; i< t.length(); i++) {  
       charcount[t[i] - 'a'] --;  
      }  
      for(int i =0; i<charcount.size(); i++) {  
        if(charcount[i] != 0) {  
          return false;  
        }  
      }  
      return true;      
}    

/*int removeDuplicates(int nums[], int numsSize) {
    int j = 0;
    for(int i = 1; i < numsSize; i++){
        if(nums[j] != nums[i]){
            j++;
            nums[j] = nums[i];
        }
    }
    cout << j+1;
    return j+1;  
}*/

/*
bool isUnique1(string s)
{
    bool a[256];
    memset(a, 0, sizeof(a));
    int len = s.length();
    for(int i=0; i < len; ++i)
    {
        int v = (int)s[i];
        if(a[v]) return false;
        a[v] = true;
    }
    system("PAUSE");
    return true;
}
*/







/*
void swap(int x, int y);

int main()
{
	int a = 3;
	int b = 5;
	cout <<"Before swap: a="<< a << ", b="<<b<<"\n";
	swap(a,b);
	cout <<"After swap: a="<< a << ", b="<<b<<"\n";
	
	return 0;
}

void swap(int x, int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
*/
