
// Homework8Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "Homework8.h"
#include "Homework8Dlg.h"
#include "afxdialogex.h"
#include <cmath>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
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


// CHomework8Dlg dialog



CHomework8Dlg::CHomework8Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CHomework8Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CHomework8Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, MyInput);
	DDX_Control(pDX, IDC_LIST1, MyOutput);
	DDX_Control(pDX, IDC_CHECK1, cb);
}

BEGIN_MESSAGE_MAP(CHomework8Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_CHANGE(IDC_EDIT1, &CHomework8Dlg::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON4, &CHomework8Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON3, &CHomework8Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_CHECK1, &CHomework8Dlg::OnBnClickedCheck1)
	ON_LBN_SELCHANGE(IDC_LIST1, &CHomework8Dlg::OnLbnSelchangeList1)
	ON_BN_CLICKED(IDC_BUTTON5, &CHomework8Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON2, &CHomework8Dlg::OnBnClickedButton2)
END_MESSAGE_MAP()


// CHomework8Dlg message handlers

BOOL CHomework8Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
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

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CHomework8Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CHomework8Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CHomework8Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CHomework8Dlg::OnEnChangeEdit1()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.



	// TODO:  Add your control notification handler code here
}


void CHomework8Dlg::OnBnClickedButton4()
{
	// TODO: Add your control notification handler code here

	// it is 0 button it adds to 0 
	CString c = _T("0");
	CString a = _T("");
	MyInput.GetWindowTextW(a);
	CString result = a+c;
	MyInput.SetWindowTextW(result);
}


void CHomework8Dlg::OnBnClickedButton3()
{
	// TODO: Add your control notification handler code here
	// clear button it clears the text box
	CString clear = _T("");
	MyInput.SetWindowTextW(clear);
}


void CHomework8Dlg::OnBnClickedCheck1()
{
	// TODO: Add your control notification handler code here

	// check box when it is clicked it makes enable to text box to the keybord
	if (cb.GetCheck()) 
	{
		MyInput.EnableWindow(FALSE);
	}
	else // it ables to use keyboard
	{
		MyInput.EnableWindow(TRUE);
	}
}


void CHomework8Dlg::OnLbnSelchangeList1()
{
	// TODO: Add your control notification handler code here
	
}

void CHomework8Dlg::OnBnClickedButton5() // 1 button
{
	// TODO: Add your control notification handler code here
	// adds 1's to text box when it is clicked
	CString c = _T("1");
	CString a = _T("");
	MyInput.GetWindowTextW(a);
	CString result = a+c;
	MyInput.SetWindowTextW(result);
}

int Max = 0;
void CHomework8Dlg::OnBnClickedButton2() // calculation button
{
	// TODO: Add your control notification handler code here
	CString binary, decimal, output;
	MyInput.GetWindowTextW(binary);
	int result = 0;
	bool inputCheck = TRUE;
	if (binary.GetLength() < 2) // first input check if lebgth is shorter than 2
	{
		output = _T("Please insert minimum of 2 bits in the input box");
		MyOutput.AddString(output);
		inputCheck = FALSE;
	}
	else if (binary.GetLength() > 32) // second input check for the length
	{
		output = _T("Please insert maximum of 32 bits in the input box");
		MyOutput.AddString(output);
		inputCheck = FALSE;
	}
	else // last input check for the string if it has another char except from 0 and 1 
	{
		for (int i = 0; i < binary.GetLength(); i++)
		{
			if (binary[i] != '1' && binary[i] != '0')
			{
				output = _T("You have entered an illegal character");
				MyOutput.AddString(output);
				inputCheck = FALSE;
				break;
			}
		}
	}
	if (binary[0] == '0' && inputCheck) // makes the convertation according to most significant bit
	{
		for (int i = 0; i < binary.GetLength(); i++)
		{
			if (binary[i] == '1')
			{
				result = result + pow(2, binary.GetLength() - (i+1)); 
			}
		}
		decimal.Format(_T("%d"), result);
		output = _T("The number ") + binary +_T(" in binary is ") + decimal + _T(" in decimal"); 
		MyOutput.AddString(output); 
	}
	else if (binary[0] == '1' && inputCheck) // it makes the calculation for the minus decimals
	{
		
		for (int k = 1; k < binary.GetLength(); k++)
		{
			if (binary[k] == '0')
			{
				result = result + pow(2, binary.GetLength() - (k+1));
			}
		}
		result = -(result + 1);
		decimal.Format(_T("%d"), result);
		output = _T("The number ") + binary +_T(" in binary is ") + decimal + _T(" in decimal"); 
		MyOutput.AddString(output);
	}

	/*--------- The code below taken from the pdf documant -----------*/
	CDC *pDC = GetDC();
	CSize cz;
	cz = pDC->GetTextExtent(output);
	if(cz.cx > Max)
		Max = cz.cx; 
	MyOutput.SetHorizontalExtent(Max);
}
