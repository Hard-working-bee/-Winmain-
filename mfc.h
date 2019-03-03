 #include <afxwin.h>  //MFC需要包含的头文件
 
 class MyApp:public CWinApp  //CWinApp 应用程序类
{
public:
  //MFC程序入口
  virtual BOOL InitInstance();
};

class MyFrame:public CFrameWnd
{
public:
  MyFrame();//窗口构造函数
  //使用消息映射机制 必须引用声明宏
  DECLARE_MESSAGE_MAP()
  afx_msg void OnLButtonDown(UNIT,CPoint);//鼠标左键按下声明
  afx_msg void OnChar(UINT,UINT,UINT,UINT);//键盘函数
  afx_msg void OnPaint();//绘图
  
  
