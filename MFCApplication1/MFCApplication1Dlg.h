
// MFCApplication1Dlg.h : 头文件
//

#pragma once


// CMFCApplication1Dlg 对话框
class CMFCApplication1Dlg : public CDialogEx
{
// 构造
public:
	CMFCApplication1Dlg(CWnd* pParent = NULL);	// 标准构造函数
	void SaveFirstNum();//保存第一个输入值
	void Calculator();//计算

// 对话框数据
	enum { IDD = IDD_MFCAPPLICATION1_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

private:
	CString str0;//输入框内字符串
	CString str1;//历史记录框内字符串
	CString str2;
	CString str3;
	CString str4;
	CString str5;
	CString str6;
	CString str7;
	CString str8;
	CString str9;
	CString str10;
	CString str11;
	CString str12; 
	CString str13;
	CString tempStr;
	CString a;
	CString expression;
	
public:
	afx_msg void OnBnClickedButton0();
	afx_msg void OnBnClickedButton01();
	afx_msg void OnBnClickedButton02();
	afx_msg void OnBnClickedButton03();
	afx_msg void OnBnClickedButton04();
	afx_msg void OnBnClickedButton05();
	afx_msg void OnBnClickedButton06();
	afx_msg void OnBnClickedButton07();
	afx_msg void OnBnClickedButton08();
	afx_msg void OnBnClickedButton09();
	afx_msg void OnBnClickedButtonpoint();
	afx_msg void OnBnClickedButtonbackspace();
	afx_msg void OnBnClickedButtonc();
	afx_msg void OnBnClickedButtonca();
	afx_msg void OnBnClickedButtondengyu();
	afx_msg void OnBnClickedButtonjia();
	afx_msg void OnBnClickedButtonjian();
	afx_msg void OnBnClickedButtoncheng();
	afx_msg void OnBnClickedButtonchu();
	afx_msg void OnBnClickedButtonleft();
	afx_msg void OnBnClickedButtonright01();
};
