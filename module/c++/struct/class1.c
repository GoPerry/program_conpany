 /*
¹¦Ä£º²â×·ûÕµÄ¦Ó
עÒ×·ûÓ×·ûÕµÄø
×·ûÃÊ¸ö¬µĵØ·£¬ָÏÊ×µÄ׵Ø·£¨Ҳ¾ÍǵÚ»¸öصĵØ·£©
×·ûÕÔÊ¶¯̬µģ¬ҲָÏ×·ûÊµØ·
char * p;
p = "Hello" //ʵ¼ÊϾÍǽ«×·ûlloµÄ׵Ø·¸³¸ø±äP;
ÔÊ³öºcout<<p<<endl;//p´ú¸öû/
*/
// 
#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

class Character
{
private:
	char * p;
	char ch[6];
public :
	Character(char * p,char ch1[6])
	{
		this->p = p;
	    for(int i=0;i<6;i++)
		ch[i] = ch1[i];
	}
	
	void display()
	{
		cout<<"²âµÄַû:"<<p<<endl; // µ±Ϊ*pʱ£¬Ê³öµ±ΪP+1ʱÊ³öllo
		cout<<p<<endl;        //Ê³öºHello 
		cout<<&p<<endl;       //Ê³öºָÕ±äpµĵØ·
		cout<<*p<<endl;       //Ê³öºH 
		cout<<p+1<<endl;      //Ê³öºello£¬p+1 Ϊ´ӵڶþ¸öûַ
		cout<<&(*p)<<endl;    //Ê³öello &(*p)µȼÛÚ
        cout<<endl;
		//ÒÏ¾ù³öë×µÄ׵Ø·£¬ֻ²»¹ýĸñÐøµ«¶¼ÊÒʮÁ½ø³öprintf("%p\n",p);   //0046F01C //%pҲÊ´úʮÁ½ø³öprintf("%#X\n",p);  //0X46F01C
		printf("%0X\n",p);  //46F01C
		cout<<endl;
	}

	void display1()
	{
		cout<<"Ê³öû:\n";
		cout<<ch<<endl;
	}
};

int main(void)
{
	char * p = "Hello"; //´˱íʽ¾ÍǰÑַûµØ·¸³¸øÃָÏ³£×·ûlloµÄڴ浥Ԫ
	char ch[6] = "Hello";
	cout<<"×·ûµĳ¤¶Èª£º"<<strlen(ch)<<endl;
	Character string(p,ch);
    string.display();
	string.display1();
	return 0;
}

