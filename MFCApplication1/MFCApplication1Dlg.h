
// MFCApplication1Dlg.h : ͷ�ļ�
//

#pragma once


// CMFCApplication1Dlg �Ի���
class CMFCApplication1Dlg : public CDialogEx
{
// ����
public:
	CMFCApplication1Dlg(CWnd* pParent = NULL);	// ��׼���캯��
	void SaveFirstNum();//�����һ������ֵ
	void Calculator();//����

// �Ի�������
	enum { IDD = IDD_MFCAPPLICATION1_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

private:
	CString str0;//��������ַ���
	CString str1;//��ʷ��¼�����ַ���
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
