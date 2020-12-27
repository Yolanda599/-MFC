
// MFCApplication1Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "MFCApplication1Dlg.h"
#include "afxdialogex.h"
#include "Resource.h"
#include "calculator.h"
#include <string>
#include  "stack"
#include <iostream>
#include "math.h"
using namespace std;


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMFCApplication1Dlg 对话框



CMFCApplication1Dlg::CMFCApplication1Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMFCApplication1Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCApplication1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT0e, str0);
	DDX_Text(pDX, IDC_EDIT1e, str1);
	DDX_Text(pDX, IDC_EDIT2e, str2);
	DDX_Text(pDX, IDC_EDIT3e, str3);
	DDX_Text(pDX, IDC_EDIT4e, str4);
	DDX_Text(pDX, IDC_EDIT5e, str5);
	DDX_Text(pDX, IDC_EDIT6e, str6);
	DDX_Text(pDX, IDC_EDIT7e, str7);
	DDX_Text(pDX, IDC_EDIT8e, str8);
	DDX_Text(pDX, IDC_EDIT9e, str9);
	DDX_Text(pDX, IDC_EDIT10e, str10);
	DDX_Text(pDX, IDC_EDIT11e, str11);
	DDX_Text(pDX, IDC_EDIT12e, str12);
	DDX_Text(pDX, IDC_EDIT13e, str13);
}

BEGIN_MESSAGE_MAP(CMFCApplication1Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON0, &CMFCApplication1Dlg::OnBnClickedButton0)
	ON_BN_CLICKED(IDC_BUTTON01, &CMFCApplication1Dlg::OnBnClickedButton01)
	ON_BN_CLICKED(IDC_BUTTON02, &CMFCApplication1Dlg::OnBnClickedButton02)
	ON_BN_CLICKED(IDC_BUTTON03, &CMFCApplication1Dlg::OnBnClickedButton03)
	ON_BN_CLICKED(IDC_BUTTON04, &CMFCApplication1Dlg::OnBnClickedButton04)
	ON_BN_CLICKED(IDC_BUTTON05, &CMFCApplication1Dlg::OnBnClickedButton05)
	ON_BN_CLICKED(IDC_BUTTON06, &CMFCApplication1Dlg::OnBnClickedButton06)
	ON_BN_CLICKED(IDC_BUTTON07, &CMFCApplication1Dlg::OnBnClickedButton07)
	ON_BN_CLICKED(IDC_BUTTON08, &CMFCApplication1Dlg::OnBnClickedButton08)
	ON_BN_CLICKED(IDC_BUTTON09, &CMFCApplication1Dlg::OnBnClickedButton09)
	ON_BN_CLICKED(IDC_BUTTONPOINT, &CMFCApplication1Dlg::OnBnClickedButtonpoint)
	ON_BN_CLICKED(IDC_BUTTONBACKSPACE, &CMFCApplication1Dlg::OnBnClickedButtonbackspace)
	ON_BN_CLICKED(IDC_BUTTONC, &CMFCApplication1Dlg::OnBnClickedButtonc)
	ON_BN_CLICKED(IDC_BUTTONCA, &CMFCApplication1Dlg::OnBnClickedButtonca)
	ON_BN_CLICKED(IDC_BUTTONDENGYU, &CMFCApplication1Dlg::OnBnClickedButtondengyu)
	ON_BN_CLICKED(IDC_BUTTONJIA, &CMFCApplication1Dlg::OnBnClickedButtonjia)
	ON_BN_CLICKED(IDC_BUTTONJIAN, &CMFCApplication1Dlg::OnBnClickedButtonjian)
	ON_BN_CLICKED(IDC_BUTTONCHENG, &CMFCApplication1Dlg::OnBnClickedButtoncheng)
	ON_BN_CLICKED(IDC_BUTTONCHU, &CMFCApplication1Dlg::OnBnClickedButtonchu)
	ON_BN_CLICKED(IDC_BUTTONLEFT, &CMFCApplication1Dlg::OnBnClickedButtonleft)
	ON_BN_CLICKED(IDC_BUTTONRIGHT01, &CMFCApplication1Dlg::OnBnClickedButtonright01)
END_MESSAGE_MAP()


// CMFCApplication1Dlg 消息处理程序

BOOL CMFCApplication1Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO:  在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CMFCApplication1Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMFCApplication1Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMFCApplication1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CMFCApplication1Dlg::Calculator()
{
	
	UpdateData(TRUE);
	tempStr = str0;
	a = "#";
	tempStr.Append(a);
	std::string str=CT2A(tempStr.GetBuffer(0));

	cout << str;
	//Caculate c("1+1#");
	Caculate c(str);
	double m = c.caculate();
	//cout << m << endl;
	//str0.Format(_T("%.4f"), m);
	if (m - int(m) <= 1e-5)
	{
		str0.Format(L"%d", (int)m);
	}
	else
	{
		str0.Format(L"%f", m);
	}
	tempStr= tempStr.Left(tempStr.GetLength() - 1);
	tempStr += L"=";
	tempStr += str0;
	str13 = str12;
	str12 = str11;
	str11 = str10;
	str10 = str9;
	str9 = str8;
	str8 = str7;
	str7 = str6;
	str6 = str5;
	str5 = str4;
	str4 = str3;
	str3 = str2;
	str2 = str1;
	str1 = tempStr;
	UpdateData(FALSE);
}

void CMFCApplication1Dlg::OnBnClickedButton0()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	str0 +=L"0";
	UpdateData(FALSE);
}

void CMFCApplication1Dlg::OnBnClickedButton01()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	str0 +=L"1";
	UpdateData(FALSE);
}


void CMFCApplication1Dlg::OnBnClickedButton02()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	str0 +=L"2";
	UpdateData(FALSE);
}


void CMFCApplication1Dlg::OnBnClickedButton03()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	str0 +=L"3";
	UpdateData(FALSE);
}


void CMFCApplication1Dlg::OnBnClickedButton04()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	str0 +=L"4";
	UpdateData(FALSE);
}


void CMFCApplication1Dlg::OnBnClickedButton05()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	str0 +=L"5";
	UpdateData(FALSE);
}


void CMFCApplication1Dlg::OnBnClickedButton06()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	str0 +=L"6";
	UpdateData(FALSE);
}


void CMFCApplication1Dlg::OnBnClickedButton07()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	str0 +=L"7";
	UpdateData(FALSE);
}


void CMFCApplication1Dlg::OnBnClickedButton08()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	str0 +=L"8";
	UpdateData(FALSE);
}


void CMFCApplication1Dlg::OnBnClickedButton09()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	str0 +=L"9";
	UpdateData(FALSE);
}
void CMFCApplication1Dlg::OnBnClickedButtonleft()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	str0 += L"(";
	UpdateData(FALSE);
}


void CMFCApplication1Dlg::OnBnClickedButtonpoint()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	//判断输入框内有小数点，若没有，加上小数点，若有，忽略
	if (-1 == str0.Find(L".")){
		str0 +=L".";
	}
	UpdateData(FALSE);
}


void CMFCApplication1Dlg::OnBnClickedButtonbackspace()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	if(!str0.IsEmpty()){
		str0 = str0.Left(str0.GetLength() - 1);
	}
	
	UpdateData(FALSE);
}

void CMFCApplication1Dlg::OnBnClickedButtonc()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	str0 = L"";
	UpdateData(FALSE);
}


void CMFCApplication1Dlg::OnBnClickedButtonca()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	str0 = L"";
	str1 = L"";
	str2 = L"";
	str3 = L"";
	str4 = L"";
	str5 = L"";
	str6 = L"";
	str7 = L"";
	str8 = L"";
	str9 = L"";
	str10 = L"";
	str11 = L"";
	str12 = L"";
	str13 = L"";
	UpdateData(FALSE);
}


void CMFCApplication1Dlg::OnBnClickedButtondengyu()
{
	// TODO:  在此添加控件通知处理程序代码
	Calculator();
}


void CMFCApplication1Dlg::OnBnClickedButtonjia()
{
	// TODO:  在此添加控件通知处理程序代码
	if (str0.GetLength() != 0){
		if (str0[str0.GetLength() - 1] == '+' || str0[str0.GetLength() - 1] == '-'
			|| str0[str0.GetLength() - 1] == '*'
			|| str0[str0.GetLength() - 1] == '/'){
			cout << "输入表达式有误";
		}
	}
	if (str0.GetLength() == 0){
		cout << "输入表达式有误";
	}
	UpdateData(TRUE);
	str0 += L"+";
	UpdateData(FALSE);
}


void CMFCApplication1Dlg::OnBnClickedButtonjian()
{
	// TODO:  在此添加控件通知处理程序代码
	if (str0[str0.GetLength() - 1] == '+' || str0[str0.GetLength() - 1] == '-'
		|| str0[str0.GetLength() - 1] == '*'
		|| str0[str0.GetLength() - 1] == '/'){
		cout << "输入表达式有误";
	}
	UpdateData(TRUE);
	str0 += L"-";
	UpdateData(FALSE);
}


void CMFCApplication1Dlg::OnBnClickedButtoncheng()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	str0 += L"*";
	UpdateData(FALSE);
}


void CMFCApplication1Dlg::OnBnClickedButtonchu()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	str0 += L"/";
	UpdateData(FALSE);
}



void CMFCApplication1Dlg::OnBnClickedButtonright01()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(TRUE);
	str0 += L")";
	UpdateData(FALSE);
}
