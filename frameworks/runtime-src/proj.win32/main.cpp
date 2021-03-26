/****************************************************************************
 Copyright (c) 2017-2018 Xiamen Yaji Software Co., Ltd.
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/
//#include "main.h"
//#include "cocos2d.h"
//#include "../Classes/AppDelegate.h"
//
//USING_NS_CC;
//
//// uncomment below line, open debug console
//#define USE_WIN32_CONSOLE
//
//int WINAPI _tWinMain(HINSTANCE hInstance,
//                       HINSTANCE hPrevInstance,
//                       LPTSTR    lpCmdLine,
//                       int       nCmdShow)
//{
//    UNREFERENCED_PARAMETER(hPrevInstance);
//    UNREFERENCED_PARAMETER(lpCmdLine);
//
//#ifdef USE_WIN32_CONSOLE
//    AllocConsole();
//    freopen("CONIN$", "r", stdin);
//    freopen("CONOUT$", "w", stdout);
//    freopen("CONOUT$", "w", stderr);
//#endif
//
//    // create the application instance
//    AppDelegate app;
//    int ret = Application::getInstance()->run();
//
//#ifdef USE_WIN32_CONSOLE
//    FreeConsole();
//#endif
//
//    return ret;
//}

#include "main.h"


class MyApp : public wxApp
{
public:
	virtual bool OnInit();
	void OnBtnClick(wxCommandEvent & WXUNUSED(event));
};

DECLARE_APP(MyApp)
IMPLEMENT_APP(MyApp)

void MyApp::OnBtnClick(wxCommandEvent & WXUNUSED(event))
{

}

bool MyApp::OnInit()
{
	/*wxFrame* frame = new wxFrame(NULL, wxID_ANY, wxT("Hello World"));
	wxPanel *panel = new wxPanel(frame, wxID_ANY);
	wxButton *button = new wxButton(panel, wxID_EXIT, wxT("Test"),
		wxPoint(20, 20));
	Connect(wxID_EXIT, wxEVT_COMMAND_BUTTON_CLICKED,
		wxCommandEventHandler(MyApp::OnBtnClick));
	button->SetFocus();
	frame->Show();*/

	/*return true;*/
	AppDelegate app;
	return cocos2d::Application::getInstance()->run();
}



