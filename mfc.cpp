#include "mfc.h"
MyApp app;//应用程序对象，有且仅有一个
BOOL MyAPP::InitInstance()
{
   //创建窗口
   m_pMainWnd=new MyFrame;
   //显示和更新
   m_pMainWnd->ShowWindow(SW_SHOWNORMAL)；
   m_pMainWnd->UpdateWindow();
   //m_pMainWnd=frame;//保存指向应用程序的主窗口的指针
   return TRUE;//返回正常初始化
  
  }
  //窗口框架的默认构造函数
  
MyFrame::MyFrame()
{
    Create(NULL,TEXT("MFC WINDOW"));
}
//鼠标左键按下
void MyFrame::OnLButtpnDown(UINT,CPoint point)
{
   TCHAR buf[1024];
   //wsprintf(buf,TEXT("x=%d,y=%d"),point x,point y);
   MessageBox(buf);
   
   CString str;//MFC使用的字符串
   //格式化字符串
   str.Format(TEXT("::::x=%d,y=%d"),point x,point y);
   MessageBox(str);
   }
//键盘实现
void MyFrame::OnChar(UINT,UINT,UINT)
{
   TCHAR buf[1024];
   wsprintf(buf,TEXT("按下了%c"),key);
   MessageBox(buf); 
   
    CString str;//MFC使用的字符串
   //格式化字符串
   str.Format(TEXT("按下了%c键"),key);
   MessageBox(str);
}
void MyFrame::OnPaint()
{
  CPaintDC dc(this);//画家 画到当前窗口中
  dc.TextOutW(100,100,TEXT("为了王国"));
  dc.Ellipse(10,10,100,100);
  }
  //Window字符集
  //多字节转宽字节
  //Message(L"aaa");
  //Message(TEXT("aaa"));  //TEXT  TCHAR自动编码转换
  //统计宽字节字符的长度
  /*
  char *p ="aaa"
  int n=0;
  m=strlen(p);
  wchar_y *p2=L"bbb"
  n=wcslen(p2);  
  */
  //string 互相转换char * c_str()
  //CString 互相转换 char *
  //char*->CString
  char *p3="aa"
  CString str=CString(p3);
  // CString->char*
  CString str2=TEXT("abc");
  CStringA tmp;
  tmp=str2;
  char *pp=tmp.GetBuffer();
  MessageBox(CString(pp));
  
 }
  
  
  
  
  
  
  
  
   
