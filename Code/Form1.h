#pragma once

#include"CubeSurface.h"
#include<Windows.h>
#include<gl\glut.h>
#include<cstdlib>
#include<ctime>
#pragma comment(lib,"gdi32.lib")//Windows GDI图形用户界面相关程序，包含的函数用来绘制图像和显示文字
#pragma comment(lib,"User32.lib")//Windows用户界面相关应用程序接口，用于包括Windows处理，基本用户界面等特性，如创建窗口和发送消息

namespace magiccube {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Form1 摘要
	/// </summary>
    HDC dc;//设备描述表句柄//Windows平台下，所有的图形操作都是利用DC来完成的

	CubeSurface F5(0,0,255);//蓝色的前面
	CubeSurface F1(0,0,255);
	CubeSurface F2(0,0,255);
	CubeSurface F3(0,0,255);
	CubeSurface F4(0,0,255);
	CubeSurface F6(0,0,255);
	CubeSurface F7(0,0,255);
	CubeSurface F8(0,0,255);
	CubeSurface F9(0,0,255);
	CubeSurface B5(0,128,0);//绿色的后面
	CubeSurface B1(0,128,0);
	CubeSurface B2(0,128,0);
	CubeSurface B3(0,128,0);
	CubeSurface B4(0,128,0);
	CubeSurface B6(0,128,0);
	CubeSurface B7(0,128,0);
	CubeSurface B8(0,128,0);
	CubeSurface B9(0,128,0);
	CubeSurface L5(255,69,0);//橙色的左面
	CubeSurface L1(255,69,0);
	CubeSurface L2(255,69,0);
	CubeSurface L3(255,69,0);
	CubeSurface L4(255,69,0);
	CubeSurface L6(255,69,0);
	CubeSurface L7(255,69,0);
	CubeSurface L8(255,69,0);
	CubeSurface L9(255,69,0);
	CubeSurface R5(255,0,0);//红色的右面
	CubeSurface R1(255,0,0);
	CubeSurface R2(255,0,0);
	CubeSurface R3(255,0,0);
	CubeSurface R4(255,0,0);
	CubeSurface R6(255,0,0);
	CubeSurface R7(255,0,0);
	CubeSurface R8(255,0,0);
	CubeSurface R9(255,0,0);
	CubeSurface U5(255,255,0);//黄色的上面
	CubeSurface U1(255,255,0);
	CubeSurface U2(255,255,0);
	CubeSurface U3(255,255,0);
	CubeSurface U4(255,255,0);
	CubeSurface U6(255,255,0);
	CubeSurface U7(255,255,0);
	CubeSurface U8(255,255,0);
	CubeSurface U9(255,255,0);
	CubeSurface D5(255,255,255);//白色的下面
	CubeSurface D1(255,255,255);
	CubeSurface D2(255,255,255);
	CubeSurface D3(255,255,255);
	CubeSurface D4(255,255,255);
	CubeSurface D6(255,255,255);
	CubeSurface D7(255,255,255);
	CubeSurface D8(255,255,255);
	CubeSurface D9(255,255,255);

	GLint F1R=0;//记录涂色版颜色分量
	GLint F1G=0;
	GLint F1B=255;
	GLint F2R=0;
	GLint F2G=0;
	GLint F2B=255;
	GLint F3R=0;
	GLint F3G=0;
	GLint F3B=255;
	GLint F4R=0;
	GLint F4G=0;
	GLint F4B=255;
	GLint F5R=0;
	GLint F5G=0;
	GLint F5B=255;
	GLint F6R=0;
	GLint F6G=0;
	GLint F6B=255;
	GLint F7R=0;
	GLint F7G=0;
	GLint F7B=255;
	GLint F8R=0;
	GLint F8G=0;
	GLint F8B=255;
	GLint F9R=0;
	GLint F9G=0;
	GLint F9B=255;

	GLint B1R=0;
	GLint B1G=128;
	GLint B1B=0;
	GLint B2R=0;
	GLint B2G=128;
	GLint B2B=0;
	GLint B3R=0;
	GLint B3G=128;
	GLint B3B=0;
	GLint B4R=0;
	GLint B4G=128;
	GLint B4B=0;
	GLint B5R=0;
	GLint B5G=128;
	GLint B5B=0;
	GLint B6R=0;
	GLint B6G=128;
	GLint B6B=0;
	GLint B7R=0;
	GLint B7G=128;
	GLint B7B=0;
	GLint B8R=0;
	GLint B8G=128;
	GLint B8B=0;
	GLint B9R=0;
	GLint B9G=128;
	GLint B9B=0;

	GLint L1R=255;
	GLint L1G=69;
	GLint L1B=0;
	GLint L2R=255;
	GLint L2G=69;
	GLint L2B=0;
	GLint L3R=255;
	GLint L3G=69;
	GLint L3B=0;
	GLint L4R=255;
	GLint L4G=69;
	GLint L4B=0;
	GLint L5R=255;
	GLint L5G=69;
	GLint L5B=0;
	GLint L6R=255;
	GLint L6G=69;
	GLint L6B=0;
	GLint L7R=255;
	GLint L7G=69;
	GLint L7B=0;
	GLint L8R=255;
	GLint L8G=69;
	GLint L8B=0;
	GLint L9R=255;
	GLint L9G=69;
	GLint L9B=0;

	GLint R1R=255;
	GLint R1G=0;
	GLint R1B=0;
	GLint R2R=255;
	GLint R2G=0;
	GLint R2B=0;
	GLint R3R=255;
	GLint R3G=0;
	GLint R3B=0;
	GLint R4R=255;
	GLint R4G=0;
	GLint R4B=0;
	GLint R5R=255;
	GLint R5G=0;
	GLint R5B=0;
	GLint R6R=255;
	GLint R6G=0;
	GLint R6B=0;
	GLint R7R=255;
	GLint R7G=0;
	GLint R7B=0;
	GLint R8R=255;
	GLint R8G=0;
	GLint R8B=0;
	GLint R9R=255;
	GLint R9G=0;
	GLint R9B=0;

	GLint U1R=255;
	GLint U1G=255;
	GLint U1B=0;
	GLint U2R=255;
	GLint U2G=255;
	GLint U2B=0;
	GLint U3R=255;
	GLint U3G=255;
	GLint U3B=0;
	GLint U4R=255;
	GLint U4G=255;
	GLint U4B=0;
	GLint U5R=255;
	GLint U5G=255;
	GLint U5B=0;
	GLint U6R=255;
	GLint U6G=255;
	GLint U6B=0;
	GLint U7R=255;
	GLint U7G=255;
	GLint U7B=0;
	GLint U8R=255;
	GLint U8G=255;
	GLint U8B=0;
	GLint U9R=255;
	GLint U9G=255;
	GLint U9B=0;

	GLint D1R=255;
	GLint D1G=255;
	GLint D1B=255;
	GLint D2R=255;
	GLint D2G=255;
	GLint D2B=255;
	GLint D3R=255;
	GLint D3G=255;
	GLint D3B=255;
	GLint D4R=255;
	GLint D4G=255;
	GLint D4B=255;
	GLint D5R=255;
	GLint D5G=255;
	GLint D5B=255;
	GLint D6R=255;
	GLint D6G=255;
	GLint D6B=255;
	GLint D7R=255;
	GLint D7G=255;
	GLint D7B=255;
	GLint D8R=255;
	GLint D8G=255;
	GLint D8B=255;
	GLint D9R=255;
	GLint D9G=255;
	GLint D9B=255;

	GLint xRot=15;//魔方整体旋转的变量
	GLint yRot=-45;
	GLint zRot=-15;

	void CubeRot(GLint x,GLint y,GLint z)//整体旋转魔方
	{
		if(y>360)
		{
			y-=360;
		}
		if(y<-360)
		{
			y+=360;
		}
		if(x>360)
		{
			x-=360;
		}
		if(x<-360)
		{
			x-=360;
		}
		if(z>360)
		{
			z-=360;
		}
		if(z<-360)
		{
			z-=360;
		}
		glRotatef(y,0,1,0);
		glRotatef(x,1,0,0);
		glRotatef(z,0,0,1);
	}

	void R()
	{
		GLint r1=U3.getR();
		GLint g1=U3.getG();
		GLint b1=U3.getB();
		GLint r2=U6.getR();
		GLint g2=U6.getG();
		GLint b2=U6.getB();
		GLint r3=U9.getR();
		GLint g3=U9.getG();
		GLint b3=U9.getB();

		U3.setR(F3.getR());
		U3.setG(F3.getG());
		U3.setB(F3.getB());
		U6.setR(F6.getR());
		U6.setG(F6.getG());
		U6.setB(F6.getB());
		U9.setR(F9.getR());
		U9.setG(F9.getG());
		U9.setB(F9.getB());

		F3.setR(D9.getR());
		F3.setG(D9.getG());
		F3.setB(D9.getB());
		F6.setR(D6.getR());
		F6.setG(D6.getG());
		F6.setB(D6.getB());
		F9.setR(D3.getR());
		F9.setG(D3.getG());
		F9.setB(D3.getB());

		D9.setR(B9.getR());
		D9.setG(B9.getG());
		D9.setB(B9.getB());
		D6.setR(B6.getR());
		D6.setG(B6.getG());
		D6.setB(B6.getB());
		D3.setR(B3.getR());
		D3.setG(B3.getG());
		D3.setB(B3.getB());

		B9.setR(r1);
		B9.setG(g1);
		B9.setB(b1);
		B6.setR(r2);
		B6.setG(g2);
		B6.setB(b2);
		B3.setR(r3);
		B3.setG(g3);
		B3.setB(b3);

		GLint rr1=R3.getR();
		GLint gg1=R3.getG();
		GLint bb1=R3.getB();
		GLint rr2=R2.getR();
		GLint gg2=R2.getG();
		GLint bb2=R2.getB();

		R3.setR(R9.getR());
		R3.setG(R9.getG());
		R3.setB(R9.getB());
		R2.setR(R6.getR());
		R2.setG(R6.getG());
		R2.setB(R6.getB());

		R9.setR(R7.getR());
		R9.setG(R7.getG());
		R9.setB(R7.getB());
		R6.setR(R8.getR());
		R6.setG(R8.getG());
		R6.setB(R8.getB());

		R7.setR(R1.getR());
		R7.setG(R1.getG());
		R7.setB(R1.getB());
		R8.setR(R4.getR());
		R8.setG(R4.getG());
		R8.setB(R4.getB());

		R1.setR(rr1);
		R1.setG(gg1);
		R1.setB(bb1);
		R4.setR(rr2);
		R4.setG(gg2);
		R4.setB(bb2);
	}

	void _R()
	{
		R();
		R();
		R();
	}

	void R180()
	{
		R();
		R();
	}

	void L()
	{
		GLint r1=U1.getR();
		GLint g1=U1.getG();
		GLint b1=U1.getB();
		GLint r2=U4.getR();
		GLint g2=U4.getG();
		GLint b2=U4.getB();
		GLint r3=U7.getR();
		GLint g3=U7.getG();
		GLint b3=U7.getB();

		U1.setR(B7.getR());
		U1.setG(B7.getG());
		U1.setB(B7.getB());
		U4.setR(B4.getR());
		U4.setG(B4.getG());
		U4.setB(B4.getB());
		U7.setR(B1.getR());
		U7.setG(B1.getG());
		U7.setB(B1.getB());

		B7.setR(D7.getR());
		B7.setG(D7.getG());
		B7.setB(D7.getB());
		B4.setR(D4.getR());
		B4.setG(D4.getG());
		B4.setB(D4.getB());
		B1.setR(D1.getR());
		B1.setG(D1.getG());
		B1.setB(D1.getB());

		D7.setR(F1.getR());
		D7.setG(F1.getG());
		D7.setB(F1.getB());
		D4.setR(F4.getR());
		D4.setG(F4.getG());
		D4.setB(F4.getB());
		D1.setR(F7.getR());
		D1.setG(F7.getG());
		D1.setB(F7.getB());

		F1.setR(r1);
		F1.setG(g1);
		F1.setB(b1);
		F4.setR(r2);
		F4.setG(g2);
		F4.setB(b2);
		F7.setR(r3);
		F7.setG(g3);
		F7.setB(b3);

		GLint rr1=L1.getR();
		GLint gg1=L1.getG();
		GLint bb1=L1.getB();
		GLint rr2=L2.getR();
		GLint gg2=L2.getG();
		GLint bb2=L2.getB();

		L1.setR(L7.getR());
		L1.setG(L7.getG());
		L1.setB(L7.getB());
		L2.setR(L4.getR());
		L2.setG(L4.getG());
		L2.setB(L4.getB());

		L7.setR(L9.getR());
		L7.setG(L9.getG());
		L7.setB(L9.getB());
		L4.setR(L8.getR());
		L4.setG(L8.getG());
		L4.setB(L8.getB());

		L9.setR(L3.getR());
		L9.setG(L3.getG());
		L9.setB(L3.getB());
		L8.setR(L6.getR());
		L8.setG(L6.getG());
		L8.setB(L6.getB());

		L3.setR(rr1);
		L3.setG(gg1);
		L3.setB(bb1);
		L6.setR(rr2);
		L6.setG(gg2);
		L6.setB(bb2);
	}

	void _L()
	{
		L();
		L();
		L();
	}

	void L180()
	{
		L();
		L();
	}

	void U()
	{
		GLint r1=F1.getR();
		GLint g1=F1.getG();
		GLint b1=F1.getB();
		GLint r2=F2.getR();
		GLint g2=F2.getG();
		GLint b2=F2.getB();
		GLint r3=F3.getR();
		GLint g3=F3.getG();
		GLint b3=F3.getB();

		F1.setR(R3.getR());
		F1.setG(R3.getG());
		F1.setB(R3.getB());
		F2.setR(R2.getR());
		F2.setG(R2.getG());
		F2.setB(R2.getB());
		F3.setR(R1.getR());
		F3.setG(R1.getG());
		F3.setB(R1.getB());

		R3.setR(B3.getR());
		R3.setG(B3.getG());
		R3.setB(B3.getB());
		R2.setR(B2.getR());
		R2.setG(B2.getG());
		R2.setB(B2.getB());
		R1.setR(B1.getR());
		R1.setG(B1.getG());
		R1.setB(B1.getB());

		B3.setR(L1.getR());
		B3.setG(L1.getG());
		B3.setB(L1.getB());
		B2.setR(L2.getR());
		B2.setG(L2.getG());
		B2.setB(L2.getB());
		B1.setR(L3.getR());
		B1.setG(L3.getG());
		B1.setB(L3.getB());

		L1.setR(r1);
		L1.setG(g1);
		L1.setB(b1);
		L2.setR(r2);
		L2.setG(g2);
		L2.setB(b2);
		L3.setR(r3);
		L3.setG(g3);
		L3.setB(b3);

		GLint rr1=U1.getR();
		GLint gg1=U1.getG();
		GLint bb1=U1.getB();
		GLint rr2=U2.getR();
		GLint gg2=U2.getG();
		GLint bb2=U2.getB();

		U1.setR(U7.getR());
		U1.setG(U7.getG());
		U1.setB(U7.getB());
		U2.setR(U4.getR());
		U2.setG(U4.getG());
		U2.setB(U4.getB());

		U7.setR(U9.getR());
		U7.setG(U9.getG());
		U7.setB(U9.getB());
		U4.setR(U8.getR());
		U4.setG(U8.getG());
		U4.setB(U8.getB());

		U9.setR(U3.getR());
		U9.setG(U3.getG());
		U9.setB(U3.getB());
		U8.setR(U6.getR());
		U8.setG(U6.getG());
		U8.setB(U6.getB());

		U3.setR(rr1);
		U3.setG(gg1);
		U3.setB(bb1);
		U6.setR(rr2);
		U6.setG(gg2);
		U6.setB(bb2);
	}

	void _U()
	{
		U();
		U();
		U();
	}

	void U180()
	{
		U();
		U();
	}

	void D()
	{
		GLint r1=F7.getR();
		GLint g1=F7.getG();
		GLint b1=F7.getB();
		GLint r2=F8.getR();
		GLint g2=F8.getG();
		GLint b2=F8.getB();
		GLint r3=F9.getR();
		GLint g3=F9.getG();
		GLint b3=F9.getB();

		F7.setR(L7.getR());
		F7.setG(L7.getG());
		F7.setB(L7.getB());
		F8.setR(L8.getR());
		F8.setG(L8.getG());
		F8.setB(L8.getB());
		F9.setR(L9.getR());
		F9.setG(L9.getG());
		F9.setB(L9.getB());

		L7.setR(B9.getR());
		L7.setG(B9.getG());
		L7.setB(B9.getB());
		L8.setR(B8.getR());
		L8.setG(B8.getG());
		L8.setB(B8.getB());
		L9.setR(B7.getR());
		L9.setG(B7.getG());
		L9.setB(B7.getB());

		B9.setR(R9.getR());
		B9.setG(R9.getG());
		B9.setB(R9.getB());
		B8.setR(R8.getR());
		B8.setG(R8.getG());
		B8.setB(R8.getB());
		B7.setR(R7.getR());
		B7.setG(R7.getG());
		B7.setB(R7.getB());

		R9.setR(r1);
		R9.setG(g1);
		R9.setB(b1);
		R8.setR(r2);
		R8.setG(g2);
		R8.setB(b2);
		R7.setR(r3);
		R7.setG(g3);
		R7.setB(b3);

		GLint rr1=D3.getR();
		GLint gg1=D3.getG();
		GLint bb1=D3.getB();
		GLint rr2=D2.getR();
		GLint gg2=D2.getG();
		GLint bb2=D2.getB();

		D3.setR(D9.getR());
		D3.setG(D9.getG());
		D3.setB(D9.getB());
		D2.setR(D6.getR());
		D2.setG(D6.getG());
		D2.setB(D6.getB());

		D9.setR(D7.getR());
		D9.setG(D7.getG());
		D9.setB(D7.getB());
		D6.setR(D8.getR());
		D6.setG(D8.getG());
		D6.setB(D8.getB());

		D7.setR(D1.getR());
		D7.setG(D1.getG());
		D7.setB(D1.getB());
		D8.setR(D4.getR());
		D8.setG(D4.getG());
		D8.setB(D4.getB());

		D1.setR(rr1);
		D1.setG(gg1);
		D1.setB(bb1);
		D4.setR(rr2);
		D4.setG(gg2);
		D4.setB(bb2);
	}

	void _D()
	{
		D();
		D();
		D();
	}

	void D180()
	{
		D();
		D();
	}

	void F()
	{
		GLint r1=U7.getR();
		GLint g1=U7.getG();
		GLint b1=U7.getB();
		GLint r2=U8.getR();
		GLint g2=U8.getG();
		GLint b2=U8.getB();
		GLint r3=U9.getR();
		GLint g3=U9.getG();
		GLint b3=U9.getB();

		U7.setR(L9.getR());
		U7.setG(L9.getG());
		U7.setB(L9.getB());
		U8.setR(L6.getR());
		U8.setG(L6.getG());
		U8.setB(L6.getB());
		U9.setR(L3.getR());
		U9.setG(L3.getG());
		U9.setB(L3.getB());

		L9.setR(D9.getR());
		L9.setG(D9.getG());
		L9.setB(D9.getB());
		L6.setR(D8.getR());
		L6.setG(D8.getG());
		L6.setB(D8.getB());
		L3.setR(D7.getR());
		L3.setG(D7.getG());
		L3.setB(D7.getB());

		D9.setR(R3.getR());
		D9.setG(R3.getG());
		D9.setB(R3.getB());
		D8.setR(R6.getR());
		D8.setG(R6.getG());
		D8.setB(R6.getB());
		D7.setR(R9.getR());
		D7.setG(R9.getG());
		D7.setB(R9.getB());

		R3.setR(r1);
		R3.setG(g1);
		R3.setB(b1);
		R6.setR(r2);
		R6.setG(g2);
		R6.setB(b2);
		R9.setR(r3);
		R9.setG(g3);
		R9.setB(b3);

		GLint rr1=F1.getR();
		GLint gg1=F1.getG();
		GLint bb1=F1.getB();
		GLint rr2=F2.getR();
		GLint gg2=F2.getG();
		GLint bb2=F2.getB();

		F1.setR(F7.getR());
		F1.setG(F7.getG());
		F1.setB(F7.getB());
		F2.setR(F4.getR());
		F2.setG(F4.getG());
		F2.setB(F4.getB());

		F7.setR(F9.getR());
		F7.setG(F9.getG());
		F7.setB(F9.getB());
		F4.setR(F8.getR());
		F4.setG(F8.getG());
		F4.setB(F8.getB());

		F9.setR(F3.getR());
		F9.setG(F3.getG());
		F9.setB(F3.getB());
		F8.setR(F6.getR());
		F8.setG(F6.getG());
		F8.setB(F6.getB());

		F3.setR(rr1);
		F3.setG(gg1);
		F3.setB(bb1);
		F6.setR(rr2);
		F6.setG(gg2);
		F6.setB(bb2);
	}

	void _F()
	{
		F();
		F();
		F();
	}

	void F180()
	{
		F();
		F();
	}

	void B()
	{
		GLint r1=U1.getR();
		GLint g1=U1.getG();
		GLint b1=U1.getB();
		GLint r2=U2.getR();
		GLint g2=U2.getG();
		GLint b2=U2.getB();
		GLint r3=U3.getR();
		GLint g3=U3.getG();
		GLint b3=U3.getB();

		U1.setR(R1.getR());
		U1.setG(R1.getG());
		U1.setB(R1.getB());
		U2.setR(R4.getR());
		U2.setG(R4.getG());
		U2.setB(R4.getB());
		U3.setR(R7.getR());
		U3.setG(R7.getG());
		U3.setB(R7.getB());

		R1.setR(D3.getR());
		R1.setG(D3.getG());
		R1.setB(D3.getB());
		R4.setR(D2.getR());
		R4.setG(D2.getG());
		R4.setB(D2.getB());
		R7.setR(D1.getR());
		R7.setG(D1.getG());
		R7.setB(D1.getB());

		D3.setR(L7.getR());
		D3.setG(L7.getG());
		D3.setB(L7.getB());
		D2.setR(L4.getR());
		D2.setG(L4.getG());
		D2.setB(L4.getB());
		D1.setR(L1.getR());
		D1.setG(L1.getG());
		D1.setB(L1.getB());

		L7.setR(r1);
		L7.setG(g1);
		L7.setB(b1);
		L4.setR(r2);
		L4.setG(g2);
		L4.setB(b2);
		L1.setR(r3);
		L1.setG(g3);
		L1.setB(b3);

		GLint rr1=B3.getR();
		GLint gg1=B3.getG();
		GLint bb1=B3.getB();
		GLint rr2=B2.getR();
		GLint gg2=B2.getG();
		GLint bb2=B2.getB();

		B3.setR(B9.getR());
		B3.setG(B9.getG());
		B3.setB(B9.getB());
		B2.setR(B6.getR());
		B2.setG(B6.getG());
		B2.setB(B6.getB());

		B9.setR(B7.getR());
		B9.setG(B7.getG());
		B9.setB(B7.getB());
		B6.setR(B8.getR());
		B6.setG(B8.getG());
		B6.setB(B8.getB());

		B7.setR(B1.getR());
		B7.setG(B1.getG());
		B7.setB(B1.getB());
		B8.setR(B4.getR());
		B8.setG(B4.getG());
		B8.setB(B4.getB());

		B1.setR(rr1);
		B1.setG(gg1);
		B1.setB(bb1);
		B4.setR(rr2);
		B4.setG(gg2);
		B4.setB(bb2);
	}

	void _B()
	{
		B();
		B();
		B();
	}

	void B180()
	{
		B();
		B();
	}

	void x()
	{
		GLint r1=U1.getR();
		GLint g1=U1.getG();
		GLint b1=U1.getB();
		GLint r2=U2.getR();
		GLint g2=U2.getG();
		GLint b2=U2.getB();
		GLint r3=U3.getR();
		GLint g3=U3.getG();
		GLint b3=U3.getB();
		GLint r4=U4.getR();
		GLint g4=U4.getG();
		GLint b4=U4.getB();
		GLint r5=U5.getR();
		GLint g5=U5.getG();
		GLint b5=U5.getB();
		GLint r6=U6.getR();
		GLint g6=U6.getG();
		GLint b6=U6.getB();
		GLint r7=U7.getR();
		GLint g7=U7.getG();
		GLint b7=U7.getB();
		GLint r8=U8.getR();
		GLint g8=U8.getG();
		GLint b8=U8.getB();
		GLint r9=U9.getR();
		GLint g9=U9.getG();
		GLint b9=U9.getB();

		U1.setR(F1.getR());
		U1.setG(F1.getG());
		U1.setB(F1.getB());
		U2.setR(F2.getR());
		U2.setG(F2.getG());
		U2.setB(F2.getB());
		U3.setR(F3.getR());
		U3.setG(F3.getG());
		U3.setB(F3.getB());
		U4.setR(F4.getR());
		U4.setG(F4.getG());
		U4.setB(F4.getB());
		U5.setR(F5.getR());
		U5.setG(F5.getG());
		U5.setB(F5.getB());
		U6.setR(F6.getR());
		U6.setG(F6.getG());
		U6.setB(F6.getB());
		U7.setR(F7.getR());
		U7.setG(F7.getG());
		U7.setB(F7.getB());
		U8.setR(F8.getR());
		U8.setG(F8.getG());
		U8.setB(F8.getB());
		U9.setR(F9.getR());
		U9.setG(F9.getG());
		U9.setB(F9.getB());

		F1.setR(D7.getR());
		F1.setG(D7.getG());
		F1.setB(D7.getB());
		F2.setR(D8.getR());
		F2.setG(D8.getG());
		F2.setB(D8.getB());
		F3.setR(D9.getR());
		F3.setG(D9.getG());
		F3.setB(D9.getB());
		F4.setR(D4.getR());
		F4.setG(D4.getG());
		F4.setB(D4.getB());
		F5.setR(D5.getR());
		F5.setG(D5.getG());
		F5.setB(D5.getB());
		F6.setR(D6.getR());
		F6.setG(D6.getG());
		F6.setB(D6.getB());
		F7.setR(D1.getR());
		F7.setG(D1.getG());
		F7.setB(D1.getB());
		F8.setR(D2.getR());
		F8.setG(D2.getG());
		F8.setB(D2.getB());
		F9.setR(D3.getR());
		F9.setG(D3.getG());
		F9.setB(D3.getB());

		D1.setR(B1.getR());
		D1.setG(B1.getG());
		D1.setB(B1.getB());
		D2.setR(B2.getR());
		D2.setG(B2.getG());
		D2.setB(B2.getB());
		D3.setR(B3.getR());
		D3.setG(B3.getG());
		D3.setB(B3.getB());
		D4.setR(B4.getR());
		D4.setG(B4.getG());
		D4.setB(B4.getB());
		D5.setR(B5.getR());
		D5.setG(B5.getG());
		D5.setB(B5.getB());
		D6.setR(B6.getR());
		D6.setG(B6.getG());
		D6.setB(B6.getB());
		D7.setR(B7.getR());
		D7.setG(B7.getG());
		D7.setB(B7.getB());
		D8.setR(B8.getR());
		D8.setG(B8.getG());
		D8.setB(B8.getB());
		D9.setR(B9.getR());
		D9.setG(B9.getG());
		D9.setB(B9.getB());

		B7.setR(r1);
		B7.setG(g1);
		B7.setB(b1);
		B8.setR(r2);
		B8.setG(g2);
		B8.setB(b2);
		B9.setR(r3);
		B9.setG(g3);
		B9.setB(b3);
		B4.setR(r4);
		B4.setG(g4);
		B4.setB(b4);
		B5.setR(r5);
		B5.setG(g5);
		B5.setB(b5);
		B6.setR(r6);
		B6.setG(g6);
		B6.setB(b6);
		B1.setR(r7);
		B1.setG(g7);
		B1.setB(b7);
		B2.setR(r8);
		B2.setG(g8);
		B2.setB(b8);
		B3.setR(r9);
		B3.setG(g9);
		B3.setB(b9);

		GLint rr1=R3.getR();
		GLint gg1=R3.getG();
		GLint bb1=R3.getB();
		GLint rr2=R2.getR();
		GLint gg2=R2.getG();
		GLint bb2=R2.getB();

		R3.setR(R9.getR());
		R3.setG(R9.getG());
		R3.setB(R9.getB());
		R2.setR(R6.getR());
		R2.setG(R6.getG());
		R2.setB(R6.getB());

		R9.setR(R7.getR());
		R9.setG(R7.getG());
		R9.setB(R7.getB());
		R6.setR(R8.getR());
		R6.setG(R8.getG());
		R6.setB(R8.getB());

		R7.setR(R1.getR());
		R7.setG(R1.getG());
		R7.setB(R1.getB());
		R8.setR(R4.getR());
		R8.setG(R4.getG());
		R8.setB(R4.getB());

		R1.setR(rr1);
		R1.setG(gg1);
		R1.setB(bb1);
		R4.setR(rr2);
		R4.setG(gg2);
		R4.setB(bb2);

		GLint rr3=L3.getR();
		GLint gg3=L3.getG();
		GLint bb3=L3.getB();
		GLint rr4=L2.getR();
		GLint gg4=L2.getG();
		GLint bb4=L2.getB();

		L3.setR(L9.getR());
		L3.setG(L9.getG());
		L3.setB(L9.getB());
		L2.setR(L6.getR());
		L2.setG(L6.getG());
		L2.setB(L6.getB());

		L9.setR(L7.getR());
		L9.setG(L7.getG());
		L9.setB(L7.getB());
		L6.setR(L8.getR());
		L6.setG(L8.getG());
		L6.setB(L8.getB());

		L7.setR(L1.getR());
		L7.setG(L1.getG());
		L7.setB(L1.getB());
		L8.setR(L4.getR());
		L8.setG(L4.getG());
		L8.setB(L4.getB());

		L1.setR(rr3);
		L1.setG(gg3);
		L1.setB(bb3);
		L4.setR(rr4);
		L4.setG(gg4);
		L4.setB(bb4);
	}

	void _x()
	{
		x();
		x();
		x();
	}

	void x180()
	{
		x();
		x();
	}

	void y()
	{
		GLint r1=F1.getR();
		GLint g1=F1.getG();
		GLint b1=F1.getB();
		GLint r2=F2.getR();
		GLint g2=F2.getG();
		GLint b2=F2.getB();
		GLint r3=F3.getR();
		GLint g3=F3.getG();
		GLint b3=F3.getB();
		GLint r4=F4.getR();
		GLint g4=F4.getG();
		GLint b4=F4.getB();
		GLint r5=F5.getR();
		GLint g5=F5.getG();
		GLint b5=F5.getB();
		GLint r6=F6.getR();
		GLint g6=F6.getG();
		GLint b6=F6.getB();
		GLint r7=F7.getR();
		GLint g7=F7.getG();
		GLint b7=F7.getB();
		GLint r8=F8.getR();
		GLint g8=F8.getG();
		GLint b8=F8.getB();
		GLint r9=F9.getR();
		GLint g9=F9.getG();
		GLint b9=F9.getB();

		F1.setR(R3.getR());
		F1.setG(R3.getG());
		F1.setB(R3.getB());
		F2.setR(R2.getR());
		F2.setG(R2.getG());
		F2.setB(R2.getB());
		F3.setR(R1.getR());
		F3.setG(R1.getG());
		F3.setB(R1.getB());
		F4.setR(R6.getR());
		F4.setG(R6.getG());
		F4.setB(R6.getB());
		F5.setR(R5.getR());
		F5.setG(R5.getG());
		F5.setB(R5.getB());
		F6.setR(R4.getR());
		F6.setG(R4.getG());
		F6.setB(R4.getB());
		F7.setR(R9.getR());
		F7.setG(R9.getG());
		F7.setB(R9.getB());
		F8.setR(R8.getR());
		F8.setG(R8.getG());
		F8.setB(R8.getB());
		F9.setR(R7.getR());
		F9.setG(R7.getG());
		F9.setB(R7.getB());

		R3.setR(B3.getR());
		R3.setG(B3.getG());
		R3.setB(B3.getB());
		R2.setR(B2.getR());
		R2.setG(B2.getG());
		R2.setB(B2.getB());
		R1.setR(B1.getR());
		R1.setG(B1.getG());
		R1.setB(B1.getB());
		R6.setR(B6.getR());
		R6.setG(B6.getG());
		R6.setB(B6.getB());
		R5.setR(B5.getR());
		R5.setG(B5.getG());
		R5.setB(B5.getB());
		R4.setR(B4.getR());
		R4.setG(B4.getG());
		R4.setB(B4.getB());
		R9.setR(B9.getR());
		R9.setG(B9.getG());
		R9.setB(B9.getB());
		R8.setR(B8.getR());
		R8.setG(B8.getG());
		R8.setB(B8.getB());
		R7.setR(B7.getR());
		R7.setG(B7.getG());
		R7.setB(B7.getB());

		B3.setR(L1.getR());
		B3.setG(L1.getG());
		B3.setB(L1.getB());
		B2.setR(L2.getR());
		B2.setG(L2.getG());
		B2.setB(L2.getB());
		B1.setR(L3.getR());
		B1.setG(L3.getG());
		B1.setB(L3.getB());
		B6.setR(L4.getR());
		B6.setG(L4.getG());
		B6.setB(L4.getB());
		B5.setR(L5.getR());
		B5.setG(L5.getG());
		B5.setB(L5.getB());
		B4.setR(L6.getR());
		B4.setG(L6.getG());
		B4.setB(L6.getB());
		B9.setR(L7.getR());
		B9.setG(L7.getG());
		B9.setB(L7.getB());
		B8.setR(L8.getR());
		B8.setG(L8.getG());
		B8.setB(L8.getB());
		B7.setR(L9.getR());
		B7.setG(L9.getG());
		B7.setB(L9.getB());

		L1.setR(r1);
		L1.setG(g1);
		L1.setB(b1);
		L2.setR(r2);
		L2.setG(g2);
		L2.setB(b2);
		L3.setR(r3);
		L3.setG(g3);
		L3.setB(b3);
		L4.setR(r4);
		L4.setG(g4);
		L4.setB(b4);
		L5.setR(r5);
		L5.setG(g5);
		L5.setB(b5);
		L6.setR(r6);
		L6.setG(g6);
		L6.setB(b6);
		L7.setR(r7);
		L7.setG(g7);
		L7.setB(b7);
		L8.setR(r8);
		L8.setG(g8);
		L8.setB(b8);
		L9.setR(r9);
		L9.setG(g9);
		L9.setB(b9);

		GLint rr1=U1.getR();
		GLint gg1=U1.getG();
		GLint bb1=U1.getB();
		GLint rr2=U2.getR();
		GLint gg2=U2.getG();
		GLint bb2=U2.getB();

		U1.setR(U7.getR());
		U1.setG(U7.getG());
		U1.setB(U7.getB());
		U2.setR(U4.getR());
		U2.setG(U4.getG());
		U2.setB(U4.getB());

		U7.setR(U9.getR());
		U7.setG(U9.getG());
		U7.setB(U9.getB());
		U4.setR(U8.getR());
		U4.setG(U8.getG());
		U4.setB(U8.getB());

		U9.setR(U3.getR());
		U9.setG(U3.getG());
		U9.setB(U3.getB());
		U8.setR(U6.getR());
		U8.setG(U6.getG());
		U8.setB(U6.getB());

		U3.setR(rr1);
		U3.setG(gg1);
		U3.setB(bb1);
		U6.setR(rr2);
		U6.setG(gg2);
		U6.setB(bb2);

		GLint rr3=D1.getR();
		GLint gg3=D1.getG();
		GLint bb3=D1.getB();
		GLint rr4=D2.getR();
		GLint gg4=D2.getG();
		GLint bb4=D2.getB();

		D1.setR(D7.getR());
		D1.setG(D7.getG());
		D1.setB(D7.getB());
		D2.setR(D4.getR());
		D2.setG(D4.getG());
		D2.setB(D4.getB());

		D7.setR(D9.getR());
		D7.setG(D9.getG());
		D7.setB(D9.getB());
		D4.setR(D8.getR());
		D4.setG(D8.getG());
		D4.setB(D8.getB());

		D9.setR(D3.getR());
		D9.setG(D3.getG());
		D9.setB(D3.getB());
		D8.setR(D6.getR());
		D8.setG(D6.getG());
		D8.setB(D6.getB());

		D3.setR(rr3);
		D3.setG(gg3);
		D3.setB(bb3);
		D6.setR(rr4);
		D6.setG(gg4);
		D6.setB(bb4);
	}

	void _y()
	{
		y();
		y();
		y();
	}

	void y180()
	{
		y();
		y();
	}

	void z()
	{
		GLint r1=U1.getR();
		GLint g1=U1.getG();
		GLint b1=U1.getB();
		GLint r2=U2.getR();
		GLint g2=U2.getG();
		GLint b2=U2.getB();
		GLint r3=U3.getR();
		GLint g3=U3.getG();
		GLint b3=U3.getB();
		GLint r4=U4.getR();
		GLint g4=U4.getG();
		GLint b4=U4.getB();
		GLint r5=U5.getR();
		GLint g5=U5.getG();
		GLint b5=U5.getB();
		GLint r6=U6.getR();
		GLint g6=U6.getG();
		GLint b6=U6.getB();
		GLint r7=U7.getR();
		GLint g7=U7.getG();
		GLint b7=U7.getB();
		GLint r8=U8.getR();
		GLint g8=U8.getG();
		GLint b8=U8.getB();
		GLint r9=U9.getR();
		GLint g9=U9.getG();
		GLint b9=U9.getB();

		U1.setR(L7.getR());
		U1.setG(L7.getG());
		U1.setB(L7.getB());
		U2.setR(L4.getR());
		U2.setG(L4.getG());
		U2.setB(L4.getB());
		U3.setR(L1.getR());
		U3.setG(L1.getG());
		U3.setB(L1.getB());
		U4.setR(L8.getR());
		U4.setG(L8.getG());
		U4.setB(L8.getB());
		U5.setR(L5.getR());
		U5.setG(L5.getG());
		U5.setB(L5.getB());
		U6.setR(L2.getR());
		U6.setG(L2.getG());
		U6.setB(L2.getB());
		U7.setR(L9.getR());
		U7.setG(L9.getG());
		U7.setB(L9.getB());
		U8.setR(L6.getR());
		U8.setG(L6.getG());
		U8.setB(L6.getB());
		U9.setR(L3.getR());
		U9.setG(L3.getG());
		U9.setB(L3.getB());

		L7.setR(D3.getR());
		L7.setG(D3.getG());
		L7.setB(D3.getB());
		L4.setR(D2.getR());
		L4.setG(D2.getG());
		L4.setB(D2.getB());
		L1.setR(D1.getR());
		L1.setG(D1.getG());
		L1.setB(D1.getB());
		L8.setR(D6.getR());
		L8.setG(D6.getG());
		L8.setB(D6.getB());
		L5.setR(D5.getR());
		L5.setG(D5.getG());
		L5.setB(D5.getB());
		L2.setR(D4.getR());
		L2.setG(D4.getG());
		L2.setB(D4.getB());
		L9.setR(D9.getR());
		L9.setG(D9.getG());
		L9.setB(D9.getB());
		L6.setR(D8.getR());
		L6.setG(D8.getG());
		L6.setB(D8.getB());
		L3.setR(D7.getR());
		L3.setG(D7.getG());
		L3.setB(D7.getB());

		D3.setR(R1.getR());
		D3.setG(R1.getG());
		D3.setB(R1.getB());
		D2.setR(R4.getR());
		D2.setG(R4.getG());
		D2.setB(R4.getB());
		D1.setR(R7.getR());
		D1.setG(R7.getG());
		D1.setB(R7.getB());
		D6.setR(R2.getR());
		D6.setG(R2.getG());
		D6.setB(R2.getB());
		D5.setR(R5.getR());
		D5.setG(R5.getG());
		D5.setB(R5.getB());
		D4.setR(R8.getR());
		D4.setG(R8.getG());
		D4.setB(R8.getB());
		D9.setR(R3.getR());
		D9.setG(R3.getG());
		D9.setB(R3.getB());
		D8.setR(R6.getR());
		D8.setG(R6.getG());
		D8.setB(R6.getB());
		D7.setR(R9.getR());
		D7.setG(R9.getG());
		D7.setB(R9.getB());

		R1.setR(r1);
		R1.setG(g1);
		R1.setB(b1);
		R4.setR(r2);
		R4.setG(g2);
		R4.setB(b2);
		R7.setR(r3);
		R7.setG(g3);
		R7.setB(b3);
		R2.setR(r4);
		R2.setG(g4);
		R2.setB(b4);
		R5.setR(r5);
		R5.setG(g5);
		R5.setB(b5);
		R8.setR(r6);
		R8.setG(g6);
		R8.setB(b6);
		R3.setR(r7);
		R3.setG(g7);
		R3.setB(b7);
		R6.setR(r8);
		R6.setG(g8);
		R6.setB(b8);
		R9.setR(r9);
		R9.setG(g9);
		R9.setB(b9);

		GLint rr1=F1.getR();
		GLint gg1=F1.getG();
		GLint bb1=F1.getB();
		GLint rr2=F2.getR();
		GLint gg2=F2.getG();
		GLint bb2=F2.getB();

		F1.setR(F7.getR());
		F1.setG(F7.getG());
		F1.setB(F7.getB());
		F2.setR(F4.getR());
		F2.setG(F4.getG());
		F2.setB(F4.getB());

		F7.setR(F9.getR());
		F7.setG(F9.getG());
		F7.setB(F9.getB());
		F4.setR(F8.getR());
		F4.setG(F8.getG());
		F4.setB(F8.getB());

		F9.setR(F3.getR());
		F9.setG(F3.getG());
		F9.setB(F3.getB());
		F8.setR(F6.getR());
		F8.setG(F6.getG());
		F8.setB(F6.getB());

		F3.setR(rr1);
		F3.setG(gg1);
		F3.setB(bb1);
		F6.setR(rr2);
		F6.setG(gg2);
		F6.setB(bb2);

		GLint rr3=B1.getR();
		GLint gg3=B1.getG();
		GLint bb3=B1.getB();
		GLint rr4=B2.getR();
		GLint gg4=B2.getG();
		GLint bb4=B2.getB();

		B1.setR(B7.getR());
		B1.setG(B7.getG());
		B1.setB(B7.getB());
		B2.setR(B4.getR());
		B2.setG(B4.getG());
		B2.setB(B4.getB());

		B7.setR(B9.getR());
		B7.setG(B9.getG());
		B7.setB(B9.getB());
		B4.setR(B8.getR());
		B4.setG(B8.getG());
		B4.setB(B8.getB());

		B9.setR(B3.getR());
		B9.setG(B3.getG());
		B9.setB(B3.getB());
		B8.setR(B6.getR());
		B8.setG(B6.getG());
		B8.setB(B6.getB());

		B3.setR(rr3);
		B3.setG(gg3);
		B3.setB(bb3);
		B6.setR(rr4);
		B6.setG(gg4);
		B6.setB(bb4);
	}

	void _z()
	{
		z();
		z();
		z();
	}

	void z180()
	{
		z();
		z();
	}

	void r()
	{
		x();
		L();
	}

	void _r()
	{
		r();
		r();
		r();
	}

	void r180()
	{
		r();
		r();
	}

	void l()
	{
		_x();
		R();
	}

	void _l()
	{
		l();
		l();
		l();
	}

	void l180()
	{
		l();
		l();
	}

	void u()
	{
		y();
		D();
	}

	void _u()
	{
		u();
		u();
		u();
	}

	void u180()
	{
		u();
		u();
	}

	void d()
	{
		_y();
		U();
	}

	void _d()
	{
		d();
		d();
		d();
	}

	void d180()
	{
		d();
		d();
	}

	void f()
	{
		z();
		B();
	}

	void _f()
	{
		f();
		f();
		f();
	}

	void f180()
	{
		f();
		f();
	}

	void b()
	{
		_z();
		F();
	}

	void _b()
	{
		b();
		b();
		b();
	}

	void b180()
	{
		b();
		b();
	}

	void M180()
	{
		R180();
		L180();
		x180();
	}

	bool isCross()
	{
		if(F8.getR()==F5.getR()&&F8.getG()==F5.getG()&&F8.getB()==F5.getB()&&
			D8.getR()==D5.getR()&&D8.getG()==D5.getG()&&D8.getB()==D5.getB()&&
			R8.getR()==R5.getR()&&R8.getG()==R5.getG()&&R8.getB()==R5.getB()&&
			D6.getR()==D5.getR()&&D6.getG()==D5.getG()&&D6.getB()==D5.getB()&&
			L8.getR()==L5.getR()&&L8.getG()==L5.getG()&&L8.getB()==L5.getB()&&
			D4.getR()==D5.getR()&&D4.getG()==D5.getG()&&D4.getB()==D5.getB()&&
			B8.getR()==B5.getR()&&B8.getG()==B5.getG()&&B8.getB()==B5.getB()&&
			D2.getR()==D5.getR()&&D2.getG()==D5.getG()&&D2.getB()==D5.getB()
			)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool isF2LRF()
	{
		if(F9.getR()==F5.getR()&&F9.getG()==F5.getG()&&F9.getB()==F5.getB()&&
			R9.getR()==R5.getR()&&R9.getG()==R5.getG()&&R9.getB()==R5.getB()&&
			D9.getR()==D5.getR()&&D9.getG()==D5.getG()&&D9.getB()==D5.getB()&&
			F6.getR()==F5.getR()&&F6.getG()==F5.getG()&&F6.getB()==F5.getB()&&
			R6.getR()==R5.getR()&&R6.getG()==R5.getG()&&R6.getB()==R5.getB()
			)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool isF2LLF()
	{
		if(F7.getR()==F5.getR()&&F7.getG()==F5.getG()&&F7.getB()==F5.getB()&&
			L9.getR()==L5.getR()&&L9.getG()==L5.getG()&&L9.getB()==L5.getB()&&
			D7.getR()==D5.getR()&&D7.getG()==D5.getG()&&D7.getB()==D5.getB()&&
			F4.getR()==F5.getR()&&F4.getG()==F5.getG()&&F4.getB()==F5.getB()&&
			L6.getR()==L5.getR()&&L6.getG()==L5.getG()&&L6.getB()==L5.getB()
			)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool isF2LRB()
	{
		if(R7.getR()==R5.getR()&&R7.getG()==R5.getG()&&R7.getB()==R5.getB()&&
			B9.getR()==B5.getR()&&B9.getG()==B5.getG()&&B9.getB()==B5.getB()&&
			D3.getR()==D5.getR()&&D3.getG()==D5.getG()&&D3.getB()==D5.getB()&&
			R4.getR()==R5.getR()&&R4.getG()==R5.getG()&&R4.getB()==R5.getB()&&
			B6.getR()==B5.getR()&&B6.getG()==B5.getG()&&B6.getB()==B5.getB()
			)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool isF2LLB()
	{
		if(L7.getR()==L5.getR()&&L7.getG()==L5.getG()&&L7.getB()==L5.getB()&&
			B7.getR()==B5.getR()&&B7.getG()==B5.getG()&&B7.getB()==B5.getB()&&
			D1.getR()==D5.getR()&&D1.getG()==D5.getG()&&D1.getB()==D5.getB()&&
			L4.getR()==L5.getR()&&L4.getG()==L5.getG()&&L4.getB()==L5.getB()&&
			B4.getR()==B5.getR()&&B4.getG()==B5.getG()&&B4.getB()==B5.getB()
			)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool isF2L()
	{		
		if(isF2LRF()&&isF2LLF()&&isF2LRB()&&isF2LLB())
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool isOLL()
	{
		if(U1.getR()==U5.getR()&&U1.getG()==U5.getG()&&U1.getB()==U5.getB()&&
			U2.getR()==U5.getR()&&U2.getG()==U5.getG()&&U2.getB()==U5.getB()&&
			U3.getR()==U5.getR()&&U3.getG()==U5.getG()&&U3.getB()==U5.getB()&&
			U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
			U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
			U7.getR()==U5.getR()&&U7.getG()==U5.getG()&&U7.getB()==U5.getB()&&
			U8.getR()==U5.getR()&&U8.getG()==U5.getG()&&U8.getB()==U5.getB()&&
			U9.getR()==U5.getR()&&U9.getG()==U5.getG()&&U9.getB()==U5.getB()
			)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool isPLL()
	{
		if(F1.getR()==F3.getR()&&F1.getG()==F3.getG()&&F1.getB()==F3.getB()&&
			F2.getR()==F3.getR()&&F2.getG()==F3.getG()&&F2.getB()==F3.getB()&&
			L1.getR()==L3.getR()&&L1.getG()==L3.getG()&&L1.getB()==L3.getB()&&
			L2.getR()==L3.getR()&&L2.getG()==L3.getG()&&L2.getB()==L3.getB()&&
			R1.getR()==R3.getR()&&R1.getG()==R3.getG()&&R1.getB()==R3.getB()&&
			R2.getR()==R3.getR()&&R2.getG()==R3.getG()&&R2.getB()==R3.getB()&&
			B1.getR()==B3.getR()&&B1.getG()==B3.getG()&&B1.getB()==B3.getB()&&
			B2.getR()==B3.getR()&&B2.getG()==B3.getG()&&B2.getB()==B3.getB()
			)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool isOK()
	{
		if(F1.getR()==F5.getR()&&F1.getG()==F5.getG()&&F1.getB()==F5.getB()&&
			L1.getR()==L5.getR()&&L1.getG()==L5.getG()&&L1.getB()==L5.getB()&&
			R1.getR()==R5.getR()&&R1.getG()==R5.getG()&&R1.getB()==R5.getB()&&
			B1.getR()==B5.getR()&&B1.getG()==B5.getG()&&B1.getB()==B5.getB()
			)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	int ii=0;
	int formulalength=0;
	bool F2L=false;
	bool OLL=false;
	bool PLL=false;
	bool OK=false;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
			dc=GetDC((HWND)paper->Handle.ToInt32());
			Init(dc);
			InitOpenGL();
		}

		bool Init(HDC hdc)//设置窗口
		{
			PIXELFORMATDESCRIPTOR pfd;
			memset(&pfd,0,sizeof(PIXELFORMATDESCRIPTOR));//对较大的结构体进行清零操作
			pfd.nSize=sizeof(PIXELFORMATDESCRIPTOR);//象素格式描述子结构的大小
			pfd.nVersion=1;//PIXELFORMATDESCRIPTOR结构的版本，一般设为1
			pfd.dwFlags=PFD_DRAW_TO_WINDOW|PFD_SUPPORT_OPENGL|PFD_DOUBLEBUFFER;//可以在窗口上绘图|支持OpenGL|双缓冲
			pfd.iPixelType=PFD_TYPE_RGBA;//像素数据类型是RGBA
			pfd.cColorBits=32;//每个颜色缓冲区中颜色位平面的数目
			pfd.cDepthBits=32;//Z(深度)缓冲区的深度;
			pfd.iLayerType=PFD_MAIN_PLANE;//选择主层面
			int cpf=ChoosePixelFormat(hdc,&pfd);//比较传过来的像素格式描述和OpenGL支持的像素格式，返回一个最佳匹配的像素格式索引
			//该索引值可传给SetPixelFormat为DC设置像素格式。
			//返回值为0表示失败
			if(cpf==0)
			{
				return false;
			}
			SetPixelFormat(hdc,cpf,&pfd);
			HGLRC m_rc=wglCreateContext(hdc);//创建RC//OpenGL应用程序也必须应用DC，不过，我们将其称为着色描述表
			wglMakeCurrent(hdc,m_rc);
			return true;

		}

		void InitOpenGL()//opengl 初始化函数
		{
			glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA);
			glClearColor(0,0,0,0);
			glMatrixMode(GL_PROJECTION);
			glLoadIdentity();
			glOrtho(0,300,0,300,-1000,1000);//设置视景体
			glMatrixMode(GL_MODELVIEW);
			glLoadIdentity();
		}

		void display()//绘图区域
		{   
			GLfloat a=50;//边长
			GLfloat b=6;//空隙
			GLfloat x,y,z;//位置增量
			glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
			glEnable(GL_DEPTH_TEST);

			glTranslatef(150,150,0);
			CubeRot(xRot,yRot,zRot);

			x=0;//F5
			y=0;
			z=0;
			F5.draw(-0.5*a+x,0.5*a+y,1.5*a+b+z,-0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,0.5*a+y,1.5*a+b+z);

			x=-a-b;//F1
			y=a+b;
			z=0;
			F1.draw(-0.5*a+x,0.5*a+y,1.5*a+b+z,-0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,0.5*a+y,1.5*a+b+z);

			x=0;//F2
			y=a+b;
			z=0;
			F2.draw(-0.5*a+x,0.5*a+y,1.5*a+b+z,-0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,0.5*a+y,1.5*a+b+z);

			x=a+b;//F3
			y=a+b;
			z=0;
			F3.draw(-0.5*a+x,0.5*a+y,1.5*a+b+z,-0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,0.5*a+y,1.5*a+b+z);

			x=-a-b;//F4
			y=0;
			z=0;
			F4.draw(-0.5*a+x,0.5*a+y,1.5*a+b+z,-0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,0.5*a+y,1.5*a+b+z);

			x=a+b;//F6
			y=0;
			z=0;
			F6.draw(-0.5*a+x,0.5*a+y,1.5*a+b+z,-0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,0.5*a+y,1.5*a+b+z);

			x=-a-b;//F7
			y=-a-b;
			z=0;
			F7.draw(-0.5*a+x,0.5*a+y,1.5*a+b+z,-0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,0.5*a+y,1.5*a+b+z);

			x=0;//F8
			y=-a-b;
			z=0;
			F8.draw(-0.5*a+x,0.5*a+y,1.5*a+b+z,-0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,0.5*a+y,1.5*a+b+z);

			x=a+b;//F9
			y=-a-b;
			z=0;
			F9.draw(-0.5*a+x,0.5*a+y,1.5*a+b+z,-0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,0.5*a+y,1.5*a+b+z);

			glColor3ub(0,0,0);//黑色
			x=0;//(后面)F5 
			y=0;
			z=-a;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=-a-b;//(后面)F1 U7 L3
			y=a+b;
			z=-a;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=0;//(后面)F2 U8
			y=a+b;
			z=-a;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=a+b;//(后面)F3 U9 R3
			y=a+b;
			z=-a;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=-a-b;//(后面)F4 L6
			y=0;
			z=-a;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=a+b;//(后面)F6 R6
			y=0;
			z=-a;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=-a-b;//(后面)F7 D7 L9
			y=-a-b;
			z=-a;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=0;//(后面)F8 D8
			y=-a-b;
			z=-a;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=a+b;//(后面)F9 D9 R9
			y=-a-b;
			z=-a;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=0;//(前面)中心
			y=0;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=-a-b;//(前面)U4 L2
			y=a+b;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=0;//(前面)U5
			y=a+b;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=a+b;//(前面)U6 R2
			y=a+b;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=-a-b;//(前面)L5
			y=0;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=a+b;//(前面)R5
			y=0;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=-a-b;//(前面)D4 L8
			y=-a-b;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=0;//(前面)D5
			y=-a-b;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=a+b;//(前面)D6 R8
			y=-a-b;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=0;//(后面)中心
			y=0;
			z=-2*a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=-a-b;//(后面)U4 L2
			y=a+b;
			z=-2*a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=0;//(后面)U5
			y=a+b;
			z=-2*a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=a+b;//(后面)U6 R2
			y=a+b;
			z=-2*a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=-a-b;//(后面)L5
			y=0;
			z=-2*a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=a+b;//(后面)R5
			y=0;
			z=-2*a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=-a-b;//(后面)D4 L8
			y=-a-b;
			z=-2*a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=0;//(后面)D5
			y=-a-b;
			z=-2*a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=a+b;//(后面)D6 R8
			y=-a-b;
			z=-2*a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=0;//(前面)B5 
			y=0;
			z=-2*a-2*b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=-a-b;//(前面)B1 U1 L1
			y=a+b;
			z=-2*a-2*b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=0;//(前面)B2 U2
			y=a+b;
			z=-2*a-2*b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=a+b;//(前面)B3 U3 R1
			y=a+b;
			z=-2*a-2*b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=-a-b;//(前面)B4 L4
			y=0;
			z=-2*a-2*b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=a+b;//(前面)B6 R4
			y=0;
			z=-2*a-2*b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=-a-b;//(前面)B7 D1 L7
			y=-a-b;
			z=-2*a-2*b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=0;//(前面)B8 D2
			y=-a-b;
			z=-2*a-2*b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=a+b;//(前面)B9 D3 R7
			y=-a-b;
			z=-2*a-2*b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,0.5*a+y,1.5*a+b+z);
			glVertex3f(-0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,-0.5*a+y,1.5*a+b+z);
			glVertex3f(0.5*a+x,0.5*a+y,1.5*a+b+z);
			glEnd();

			x=0;//B5
			y=0;
			z=-3*a-2*b;
			B5.draw(-0.5*a+x,0.5*a+y,1.5*a+b+z,-0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,0.5*a+y,1.5*a+b+z);

			x=-a-b;//B1
			y=a+b;
			z=-3*a-2*b;
			B1.draw(-0.5*a+x,0.5*a+y,1.5*a+b+z,-0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,0.5*a+y,1.5*a+b+z);

			x=0;//B2
			y=a+b;
			z=-3*a-2*b;
			B2.draw(-0.5*a+x,0.5*a+y,1.5*a+b+z,-0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,0.5*a+y,1.5*a+b+z);

			x=a+b;//B3
			y=a+b;
			z=-3*a-2*b;
			B3.draw(-0.5*a+x,0.5*a+y,1.5*a+b+z,-0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,0.5*a+y,1.5*a+b+z);

			x=-a-b;//B4
			y=0;
			z=-3*a-2*b;
			B4.draw(-0.5*a+x,0.5*a+y,1.5*a+b+z,-0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,0.5*a+y,1.5*a+b+z);

			x=a+b;//B6
			y=0;
			z=-3*a-2*b;
			B6.draw(-0.5*a+x,0.5*a+y,1.5*a+b+z,-0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,0.5*a+y,1.5*a+b+z);

			x=-a-b;//B7
			y=-a-b;
			z=-3*a-2*b;
			B7.draw(-0.5*a+x,0.5*a+y,1.5*a+b+z,-0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,0.5*a+y,1.5*a+b+z);

			x=0;//B8
			y=-a-b;
			z=-3*a-2*b;
			B8.draw(-0.5*a+x,0.5*a+y,1.5*a+b+z,-0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,0.5*a+y,1.5*a+b+z);

			x=a+b;//B9
			y=-a-b;
			z=-3*a-2*b;
			B9.draw(-0.5*a+x,0.5*a+y,1.5*a+b+z,-0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,-0.5*a+y,1.5*a+b+z,0.5*a+x,0.5*a+y,1.5*a+b+z);

			x=0;//L5
			y=0;
			z=0;
			L5.draw(-1.5*a-b+x,0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,0.5*a+z,-1.5*a-b+x,0.5*a+y,0.5*a+z);

			x=0;//L1
			y=a+b;
			z=-a-b;
			L1.draw(-1.5*a-b+x,0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,0.5*a+z,-1.5*a-b+x,0.5*a+y,0.5*a+z);

			x=0;//L2
			y=a+b;
			z=0;
			L2.draw(-1.5*a-b+x,0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,0.5*a+z,-1.5*a-b+x,0.5*a+y,0.5*a+z);

			x=0;//L3
			y=a+b;
			z=a+b;
			L3.draw(-1.5*a-b+x,0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,0.5*a+z,-1.5*a-b+x,0.5*a+y,0.5*a+z);

			x=0;//L4
			y=0;
			z=-a-b;
			L4.draw(-1.5*a-b+x,0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,0.5*a+z,-1.5*a-b+x,0.5*a+y,0.5*a+z);

			x=0;//L6
			y=0;
			z=a+b;
			L6.draw(-1.5*a-b+x,0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,0.5*a+z,-1.5*a-b+x,0.5*a+y,0.5*a+z);

			x=0;//L7
			y=-a-b;
			z=-a-b;
			L7.draw(-1.5*a-b+x,0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,0.5*a+z,-1.5*a-b+x,0.5*a+y,0.5*a+z);

			x=0;//L8
			y=-a-b;
			z=0;
			L8.draw(-1.5*a-b+x,0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,0.5*a+z,-1.5*a-b+x,0.5*a+y,0.5*a+z);

			x=0;//L9
			y=-a-b;
			z=a+b;
			L9.draw(-1.5*a-b+x,0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,0.5*a+z,-1.5*a-b+x,0.5*a+y,0.5*a+z);

			glColor3ub(0,0,0);//黑色
			x=a;//(右面)L5
			y=0;
			z=0;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=a;//(右面)L1 U1 B1
			y=a+b;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=a;//(右面)L2 U4
			y=a+b;
			z=0;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=a;//(右面)L3 U7 F1
			y=a+b;
			z=a+b;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=a;//(右面)L4 B4
			y=0;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=a;//(右面)L6 F4
			y=0;
			z=a+b;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=a;//(右面)L7 D1 B7
			y=-a-b;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=a;//(右面)L8 D4
			y=-a-b;
			z=0;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=a;//(右面)L9 D7 F7
			y=-a-b;
			z=a+b;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=a+b;//(左面)中心
			y=0;
			z=0;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=a+b;//(左面)U2 B2
			y=a+b;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=a+b;//(左面)U5
			y=a+b;
			z=0;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=a+b;//(左面)U8 F2
			y=a+b;
			z=a+b;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=a+b;//(左面)B5
			y=0;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=a+b;//(左面)F5
			y=0;
			z=a+b;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=a+b;//(左面)D2 B8
			y=-a-b;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=a+b;//(左面)D5
			y=-a-b;
			z=0;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=a+b;//(左面)D8 F8
			y=-a-b;
			z=a+b;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=2*a+b;//(右面)中心
			y=0;
			z=0;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=2*a+b;//(右面)U2 B2
			y=a+b;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=2*a+b;//(右面)U5
			y=a+b;
			z=0;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=2*a+b;//(右面)U8 F2
			y=a+b;
			z=a+b;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=2*a+b;//(右面)B5
			y=0;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=2*a+b;//(右面)F5
			y=0;
			z=a+b;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=2*a+b;//(右面)D2 B8
			y=-a-b;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=2*a+b;//(右面)D5
			y=-a-b;
			z=0;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=2*a+b;//(右面)D8 F8
			y=-a-b;
			z=a+b;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=2*a+2*b;//(左面)R5
			y=0;
			z=0;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=2*a+2*b;//(左面)U1 B3 R1
			y=a+b;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=2*a+2*b;//(左面)U6 R2
			y=a+b;
			z=0;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=2*a+2*b;//(左面)U9 R3 F3
			y=a+b;
			z=a+b;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=2*a+2*b;//(左面)B6 R4
			y=0;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=2*a+2*b;//(左面)F6 R6
			y=0;
			z=a+b;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=2*a+2*b;//(左面)D3 B9 R7
			y=-a-b;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=2*a+2*b;//(左面)D6 R8
			y=-a-b;
			z=0;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=2*a+2*b;//(左面)D9 R9 F9
			y=-a-b;
			z=a+b;
			glBegin(GL_QUADS);
			glVertex3f(-1.5*a-b+x,0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,-0.5*a+z);
			glVertex3f(-1.5*a-b+x,-0.5*a+y,0.5*a+z);
			glVertex3f(-1.5*a-b+x,0.5*a+y,0.5*a+z);
			glEnd();

			x=3*a+2*b;//R5
			y=0;
			z=0;
			R5.draw(-1.5*a-b+x,0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,0.5*a+z,-1.5*a-b+x,0.5*a+y,0.5*a+z);

			x=3*a+2*b;//R1
			y=a+b;
			z=-a-b;
			R1.draw(-1.5*a-b+x,0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,0.5*a+z,-1.5*a-b+x,0.5*a+y,0.5*a+z);

			x=3*a+2*b;//R2
			y=a+b;
			z=0;
			R2.draw(-1.5*a-b+x,0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,0.5*a+z,-1.5*a-b+x,0.5*a+y,0.5*a+z);

			x=3*a+2*b;//R3
			y=a+b;
			z=a+b;
			R3.draw(-1.5*a-b+x,0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,0.5*a+z,-1.5*a-b+x,0.5*a+y,0.5*a+z);

			x=3*a+2*b;//R4
			y=0;
			z=-a-b;
			R4.draw(-1.5*a-b+x,0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,0.5*a+z,-1.5*a-b+x,0.5*a+y,0.5*a+z);

			x=3*a+2*b;//R6
			y=0;
			z=a+b;
			R6.draw(-1.5*a-b+x,0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,0.5*a+z,-1.5*a-b+x,0.5*a+y,0.5*a+z);

			x=3*a+2*b;//R7
			y=-a-b;
			z=-a-b;
			R7.draw(-1.5*a-b+x,0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,0.5*a+z,-1.5*a-b+x,0.5*a+y,0.5*a+z);

			x=3*a+2*b;//R8
			y=-a-b;
			z=0;
			R8.draw(-1.5*a-b+x,0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,0.5*a+z,-1.5*a-b+x,0.5*a+y,0.5*a+z);

			x=3*a+2*b;//R9
			y=-a-b;
			z=a+b;
			R9.draw(-1.5*a-b+x,0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,-0.5*a+z,-1.5*a-b+x,-0.5*a+y,0.5*a+z,-1.5*a-b+x,0.5*a+y,0.5*a+z);

			x=0;//U5
			y=0;
			z=0;
			U5.draw(-0.5*a+x,1.5*a+b+y,-0.5*a+z,-0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,-0.5*a+z);

			x=-a-b;//U1
			y=0;
			z=-a-b;
			U1.draw(-0.5*a+x,1.5*a+b+y,-0.5*a+z,-0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,-0.5*a+z);

			x=0;//U2
			y=0;
			z=-a-b;
			U2.draw(-0.5*a+x,1.5*a+b+y,-0.5*a+z,-0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,-0.5*a+z);

			x=a+b;//U3
			y=0;
			z=-a-b;
			U3.draw(-0.5*a+x,1.5*a+b+y,-0.5*a+z,-0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,-0.5*a+z);

			x=-a-b;//U4
			y=0;
			z=0;
			U4.draw(-0.5*a+x,1.5*a+b+y,-0.5*a+z,-0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,-0.5*a+z);

			x=a+b;//U6
			y=0;
			z=0;
			U6.draw(-0.5*a+x,1.5*a+b+y,-0.5*a+z,-0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,-0.5*a+z);

			x=-a-b;//U7
			y=0;
			z=a+b;
			U7.draw(-0.5*a+x,1.5*a+b+y,-0.5*a+z,-0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,-0.5*a+z);

			x=0;//U8
			y=0;
			z=a+b;
			U8.draw(-0.5*a+x,1.5*a+b+y,-0.5*a+z,-0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,-0.5*a+z);

			x=a+b;//U9
			y=0;
			z=a+b;
			U9.draw(-0.5*a+x,1.5*a+b+y,-0.5*a+z,-0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,-0.5*a+z);

			glColor3ub(0,0,0);//黑色
			x=0;//(下面)U5
			y=-a;
			z=0;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=-a-b;//(下面)U1 B1 L1
			y=-a;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=0;//(下面)U2 B2
			y=-a;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=a+b;//(下面)U3 B3 R1
			y=-a;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=-a-b;//(下面)U4 L2
			y=-a;
			z=0;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=a+b;//(下面)U6 R2
			y=-a;
			z=0;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=-a-b;//(下面)U7 F1 L3
			y=-a;
			z=a+b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=0;//(下面)U8 F2
			y=-a;
			z=a+b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=a+b;//(下面)U9 F3 R3
			y=-a;
			z=a+b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=0;//(上面)中心
			y=-a-b;
			z=0;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=-a-b;//(上面)B4 L4
			y=-a-b;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=0;//(上面)B5
			y=-a-b;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=a+b;//(上面)B6 R4
			y=-a-b;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=-a-b;//(上面)L5
			y=-a-b;
			z=0;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=a+b;//(上面)R5
			y=-a-b;
			z=0;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=-a-b;//(上面)F4 L6
			y=-a-b;
			z=a+b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=0;//(上面)F5
			y=-a-b;
			z=a+b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=a+b;//(上面)F6 R6
			y=-a-b;
			z=a+b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=0;//(下面)中心
			y=-2*a-b;
			z=0;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=-a-b;//(下面)B4 L4
			y=-2*a-b;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=0;//(下面)B5
			y=-2*a-b;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=a+b;//(下面)B6 R4
			y=-2*a-b;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=-a-b;//(下面)L5
			y=-2*a-b;
			z=0;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=a+b;//(下面)R5
			y=-2*a-b;
			z=0;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=-a-b;//(下面)F4 L6
			y=-2*a-b;
			z=a+b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=0;//(下面)F5
			y=-2*a-b;
			z=a+b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=a+b;//(下面)F6 R6
			y=-2*a-b;
			z=a+b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=0;//(上面)D5
			y=-2*a-2*b;
			z=0;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=-a-b;//(上面)D1 B7 L7
			y=-2*a-2*b;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=0;//(上面)D2 B8
			y=-2*a-2*b;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=a+b;//(上面)D3 B9 R7
			y=-2*a-2*b;
			z=-a-b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=-a-b;//(上面)D4 L8
			y=-2*a-2*b;
			z=0;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=a+b;//(上面)D6 R8
			y=-2*a-2*b;
			z=0;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=-a-b;//(上面)D7 F7 L9
			y=-2*a-2*b;
			z=a+b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=0;//(上面)D8 F8
			y=-2*a-2*b;
			z=a+b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=a+b;//(上面)D9 F9 R9
			y=-2*a-2*b;
			z=a+b;
			glBegin(GL_QUADS);
			glVertex3f(-0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glVertex3f(-0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,0.5*a+z);
			glVertex3f(0.5*a+x,1.5*a+b+y,-0.5*a+z);
			glEnd();

			x=0;//D5
			y=-3*a-2*b;
			z=0;
			D5.draw(-0.5*a+x,1.5*a+b+y,-0.5*a+z,-0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,-0.5*a+z);

			x=-a-b;//D1
			y=-3*a-2*b;
			z=-a-b;
			D1.draw(-0.5*a+x,1.5*a+b+y,-0.5*a+z,-0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,-0.5*a+z);

			x=0;//D2
			y=-3*a-2*b;
			z=-a-b;
			D2.draw(-0.5*a+x,1.5*a+b+y,-0.5*a+z,-0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,-0.5*a+z);

			x=a+b;//D3
			y=-3*a-2*b;
			z=-a-b;
			D3.draw(-0.5*a+x,1.5*a+b+y,-0.5*a+z,-0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,-0.5*a+z);

			x=-a-b;//D4
			y=-3*a-2*b;
			z=0;
			D4.draw(-0.5*a+x,1.5*a+b+y,-0.5*a+z,-0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,-0.5*a+z);

			x=a+b;//D6
			y=-3*a-2*b;
			z=0;
			D6.draw(-0.5*a+x,1.5*a+b+y,-0.5*a+z,-0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,-0.5*a+z);

			x=-a-b;//D7
			y=-3*a-2*b;
			z=a+b;
			D7.draw(-0.5*a+x,1.5*a+b+y,-0.5*a+z,-0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,-0.5*a+z);

			x=0;//D8
			y=-3*a-2*b;
			z=a+b;
			D8.draw(-0.5*a+x,1.5*a+b+y,-0.5*a+z,-0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,-0.5*a+z);

			x=a+b;//D9
			y=-3*a-2*b;
			z=a+b;
			D9.draw(-0.5*a+x,1.5*a+b+y,-0.5*a+z,-0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,0.5*a+z,0.5*a+x,1.5*a+b+y,-0.5*a+z);

			glLoadIdentity();
			glFlush();

			SwapBuffers(dc);//交换缓冲区，由于使用了双缓冲
		}

		void reshape(GLint w,GLint h)//重绘函数
		{
			glClearColor(0,0,0,0);
			glMatrixMode(GL_PROJECTION);
			glLoadIdentity();
			glViewport(0,0,w,h);// 设置视口
			glOrtho(0,w,0,h,-1000,1000);//设置视景体
			glMatrixMode(GL_MODELVIEW);
			glLoadIdentity();
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
			//释放RC
			HGLRC m_rc=wglGetCurrentContext();
			wglMakeCurrent(0,0);
			wglDeleteContext(m_rc);
		}

	private: System::Windows::Forms::Button^  Fcolor;
	private: System::Windows::Forms::Button^  Bcolor;
	private: System::Windows::Forms::Button^  Lcolor;
	private: System::Windows::Forms::Button^  Rcolor;
	private: System::Windows::Forms::Button^  Ucolor;
	private: System::Windows::Forms::Button^  Dcolor;
	private: System::Windows::Forms::Button^  FF5;
	private: System::Windows::Forms::PictureBox^  currentColor;
	private: System::Windows::Forms::TextBox^  displayBox;
	private: System::Windows::Forms::PictureBox^  paper;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  操作AToolStripMenuItem;
	private: System::Windows::Forms::Label^  kexuanyanse;
	private: System::Windows::Forms::Label^  suoxuanyanse;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::Button^  BB5;
	private: System::Windows::Forms::Button^  BB7;
	private: System::Windows::Forms::Button^  BB1;
	private: System::Windows::Forms::Button^  BB9;
	private: System::Windows::Forms::Button^  BB3;
	private: System::Windows::Forms::Button^  BB6;
	private: System::Windows::Forms::Button^  DD5;
	private: System::Windows::Forms::Button^  RR5;
	private: System::Windows::Forms::Button^  LL5;
	private: System::Windows::Forms::Button^  LL9;
	private: System::Windows::Forms::Button^  LL7;
	private: System::Windows::Forms::Button^  DD1;
	private: System::Windows::Forms::Button^  DD7;
	private: System::Windows::Forms::Button^  DD9;
	private: System::Windows::Forms::Button^  RR7;
	private: System::Windows::Forms::Button^  RR1;
	private: System::Windows::Forms::Button^  RR4;
	private: System::Windows::Forms::Button^  UU5;
	private: System::Windows::Forms::Button^  UU7;
	private: System::Windows::Forms::Button^  UU1;
	private: System::Windows::Forms::Button^  UU3;
	private: System::Windows::Forms::Button^  UU9;
	private: System::Windows::Forms::Button^  UU2;
	private: System::Windows::Forms::Button^  UU4;
	private: System::Windows::Forms::Button^  UU6;
	private: System::Windows::Forms::Button^  UU8;
	private: System::Windows::Forms::Button^  RR8;
	private: System::Windows::Forms::Button^  RR2;
	private: System::Windows::Forms::Button^  RR9;
	private: System::Windows::Forms::Button^  RR6;
	private: System::Windows::Forms::Button^  RR3;
	private: System::Windows::Forms::Button^  BB4;
	private: System::Windows::Forms::Button^  BB8;
	private: System::Windows::Forms::Button^  BB2;
	private: System::Windows::Forms::Button^  FF3;
	private: System::Windows::Forms::Button^  FF2;
	private: System::Windows::Forms::Button^  FF1;
	private: System::Windows::Forms::Button^  FF4;
	private: System::Windows::Forms::Button^  FF7;
	private: System::Windows::Forms::Button^  FF8;
	private: System::Windows::Forms::Button^  FF9;
	private: System::Windows::Forms::Button^  FF6;
	private: System::Windows::Forms::Button^  DD3;
	private: System::Windows::Forms::Button^  DD4;
	private: System::Windows::Forms::Button^  DD2;
	private: System::Windows::Forms::Button^  DD6;
	private: System::Windows::Forms::Button^  DD8;
	private: System::Windows::Forms::Button^  LL1;
	private: System::Windows::Forms::Button^  LL3;
	private: System::Windows::Forms::Button^  LL4;
	private: System::Windows::Forms::Button^  LL2;
	private: System::Windows::Forms::Button^  LL8;
	private: System::Windows::Forms::Button^  LL6;
	private: System::Windows::Forms::Label^  tuse;
	private: System::Windows::Forms::Button^  ColorUse;
	private: System::Windows::Forms::Button^  Solve1;
	private: System::Windows::Forms::ToolStripMenuItem^  退出ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  位置重置ToolStripMenuItem;
	private: System::Windows::Forms::Button^  ToRight;
	private: System::Windows::Forms::Button^  ToLeft;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  涂色版重置ToolStripMenuItem;
	private: System::Windows::Forms::Button^  Disorganize;
	private: System::Windows::Forms::ToolStripMenuItem^  帮助ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  说明ToolStripMenuItem;
	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->Fcolor = (gcnew System::Windows::Forms::Button());
			this->displayBox = (gcnew System::Windows::Forms::TextBox());
			this->Bcolor = (gcnew System::Windows::Forms::Button());
			this->Lcolor = (gcnew System::Windows::Forms::Button());
			this->Rcolor = (gcnew System::Windows::Forms::Button());
			this->Ucolor = (gcnew System::Windows::Forms::Button());
			this->Dcolor = (gcnew System::Windows::Forms::Button());
			this->FF5 = (gcnew System::Windows::Forms::Button());
			this->currentColor = (gcnew System::Windows::Forms::PictureBox());
			this->paper = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->操作AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->位置重置ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->涂色版重置ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->退出ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->帮助ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->说明ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kexuanyanse = (gcnew System::Windows::Forms::Label());
			this->suoxuanyanse = (gcnew System::Windows::Forms::Label());
			this->BB5 = (gcnew System::Windows::Forms::Button());
			this->BB7 = (gcnew System::Windows::Forms::Button());
			this->BB1 = (gcnew System::Windows::Forms::Button());
			this->BB9 = (gcnew System::Windows::Forms::Button());
			this->BB3 = (gcnew System::Windows::Forms::Button());
			this->BB6 = (gcnew System::Windows::Forms::Button());
			this->DD5 = (gcnew System::Windows::Forms::Button());
			this->RR5 = (gcnew System::Windows::Forms::Button());
			this->LL5 = (gcnew System::Windows::Forms::Button());
			this->LL9 = (gcnew System::Windows::Forms::Button());
			this->LL7 = (gcnew System::Windows::Forms::Button());
			this->DD1 = (gcnew System::Windows::Forms::Button());
			this->DD7 = (gcnew System::Windows::Forms::Button());
			this->DD9 = (gcnew System::Windows::Forms::Button());
			this->RR7 = (gcnew System::Windows::Forms::Button());
			this->RR1 = (gcnew System::Windows::Forms::Button());
			this->RR4 = (gcnew System::Windows::Forms::Button());
			this->UU5 = (gcnew System::Windows::Forms::Button());
			this->UU7 = (gcnew System::Windows::Forms::Button());
			this->UU1 = (gcnew System::Windows::Forms::Button());
			this->UU3 = (gcnew System::Windows::Forms::Button());
			this->UU9 = (gcnew System::Windows::Forms::Button());
			this->UU2 = (gcnew System::Windows::Forms::Button());
			this->UU4 = (gcnew System::Windows::Forms::Button());
			this->UU6 = (gcnew System::Windows::Forms::Button());
			this->UU8 = (gcnew System::Windows::Forms::Button());
			this->RR8 = (gcnew System::Windows::Forms::Button());
			this->RR2 = (gcnew System::Windows::Forms::Button());
			this->RR9 = (gcnew System::Windows::Forms::Button());
			this->RR6 = (gcnew System::Windows::Forms::Button());
			this->RR3 = (gcnew System::Windows::Forms::Button());
			this->BB4 = (gcnew System::Windows::Forms::Button());
			this->BB8 = (gcnew System::Windows::Forms::Button());
			this->BB2 = (gcnew System::Windows::Forms::Button());
			this->FF3 = (gcnew System::Windows::Forms::Button());
			this->FF2 = (gcnew System::Windows::Forms::Button());
			this->FF1 = (gcnew System::Windows::Forms::Button());
			this->FF4 = (gcnew System::Windows::Forms::Button());
			this->FF7 = (gcnew System::Windows::Forms::Button());
			this->FF8 = (gcnew System::Windows::Forms::Button());
			this->FF9 = (gcnew System::Windows::Forms::Button());
			this->FF6 = (gcnew System::Windows::Forms::Button());
			this->DD3 = (gcnew System::Windows::Forms::Button());
			this->DD4 = (gcnew System::Windows::Forms::Button());
			this->DD2 = (gcnew System::Windows::Forms::Button());
			this->DD6 = (gcnew System::Windows::Forms::Button());
			this->DD8 = (gcnew System::Windows::Forms::Button());
			this->LL1 = (gcnew System::Windows::Forms::Button());
			this->LL3 = (gcnew System::Windows::Forms::Button());
			this->LL4 = (gcnew System::Windows::Forms::Button());
			this->LL2 = (gcnew System::Windows::Forms::Button());
			this->LL8 = (gcnew System::Windows::Forms::Button());
			this->LL6 = (gcnew System::Windows::Forms::Button());
			this->tuse = (gcnew System::Windows::Forms::Label());
			this->ColorUse = (gcnew System::Windows::Forms::Button());
			this->Solve1 = (gcnew System::Windows::Forms::Button());
			this->ToRight = (gcnew System::Windows::Forms::Button());
			this->ToLeft = (gcnew System::Windows::Forms::Button());
			this->Disorganize = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->currentColor))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->paper))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Fcolor
			// 
			this->Fcolor->BackColor = System::Drawing::Color::Blue;
			this->Fcolor->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Fcolor->Location = System::Drawing::Point(573, 94);
			this->Fcolor->Name = L"Fcolor";
			this->Fcolor->Size = System::Drawing::Size(40, 40);
			this->Fcolor->TabIndex = 0;
			this->Fcolor->TabStop = false;
			this->Fcolor->UseVisualStyleBackColor = false;
			this->Fcolor->Click += gcnew System::EventHandler(this, &Form1::Fcolor_Click);
			// 
			// displayBox
			// 
			this->displayBox->BackColor = System::Drawing::Color::Lavender;
			this->displayBox->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->displayBox->HideSelection = false;
			this->displayBox->Location = System::Drawing::Point(59, 434);
			this->displayBox->Multiline = true;
			this->displayBox->Name = L"displayBox";
			this->displayBox->ReadOnly = true;
			this->displayBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->displayBox->Size = System::Drawing::Size(300, 131);
			this->displayBox->TabIndex = 1;
			this->displayBox->TabStop = false;
			this->displayBox->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::displayBox_MouseMove);
			// 
			// Bcolor
			// 
			this->Bcolor->BackColor = System::Drawing::Color::Green;
			this->Bcolor->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Bcolor->Location = System::Drawing::Point(655, 94);
			this->Bcolor->Name = L"Bcolor";
			this->Bcolor->Size = System::Drawing::Size(40, 40);
			this->Bcolor->TabIndex = 2;
			this->Bcolor->TabStop = false;
			this->Bcolor->UseVisualStyleBackColor = false;
			this->Bcolor->Click += gcnew System::EventHandler(this, &Form1::Bcolor_Click);
			// 
			// Lcolor
			// 
			this->Lcolor->BackColor = System::Drawing::Color::OrangeRed;
			this->Lcolor->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Lcolor->Location = System::Drawing::Point(532, 94);
			this->Lcolor->Name = L"Lcolor";
			this->Lcolor->Size = System::Drawing::Size(40, 40);
			this->Lcolor->TabIndex = 3;
			this->Lcolor->TabStop = false;
			this->Lcolor->UseVisualStyleBackColor = false;
			this->Lcolor->Click += gcnew System::EventHandler(this, &Form1::Lcolor_Click);
			// 
			// Rcolor
			// 
			this->Rcolor->BackColor = System::Drawing::Color::Red;
			this->Rcolor->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Rcolor->Location = System::Drawing::Point(614, 94);
			this->Rcolor->Name = L"Rcolor";
			this->Rcolor->Size = System::Drawing::Size(40, 40);
			this->Rcolor->TabIndex = 4;
			this->Rcolor->TabStop = false;
			this->Rcolor->UseVisualStyleBackColor = false;
			this->Rcolor->Click += gcnew System::EventHandler(this, &Form1::Rcolor_Click);
			// 
			// Ucolor
			// 
			this->Ucolor->BackColor = System::Drawing::Color::Yellow;
			this->Ucolor->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Ucolor->Location = System::Drawing::Point(573, 53);
			this->Ucolor->Name = L"Ucolor";
			this->Ucolor->Size = System::Drawing::Size(40, 40);
			this->Ucolor->TabIndex = 5;
			this->Ucolor->TabStop = false;
			this->Ucolor->UseVisualStyleBackColor = false;
			this->Ucolor->Click += gcnew System::EventHandler(this, &Form1::Ucolor_Click);
			// 
			// Dcolor
			// 
			this->Dcolor->BackColor = System::Drawing::Color::White;
			this->Dcolor->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Dcolor->Location = System::Drawing::Point(573, 135);
			this->Dcolor->Name = L"Dcolor";
			this->Dcolor->Size = System::Drawing::Size(40, 40);
			this->Dcolor->TabIndex = 6;
			this->Dcolor->TabStop = false;
			this->Dcolor->UseVisualStyleBackColor = false;
			this->Dcolor->Click += gcnew System::EventHandler(this, &Form1::Dcolor_Click);
			// 
			// FF5
			// 
			this->FF5->BackColor = System::Drawing::Color::Blue;
			this->FF5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->FF5->Location = System::Drawing::Point(655, 324);
			this->FF5->Name = L"FF5";
			this->FF5->Size = System::Drawing::Size(30, 30);
			this->FF5->TabIndex = 7;
			this->FF5->TabStop = false;
			this->FF5->UseVisualStyleBackColor = false;
			// 
			// currentColor
			// 
			this->currentColor->BackColor = System::Drawing::Color::Yellow;
			this->currentColor->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->currentColor->Location = System::Drawing::Point(818, 94);
			this->currentColor->Name = L"currentColor";
			this->currentColor->Size = System::Drawing::Size(40, 40);
			this->currentColor->TabIndex = 8;
			this->currentColor->TabStop = false;
			// 
			// paper
			// 
			this->paper->BackColor = System::Drawing::Color::Transparent;
			this->paper->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->paper->Location = System::Drawing::Point(59, 54);
			this->paper->Name = L"paper";
			this->paper->Size = System::Drawing::Size(300, 300);
			this->paper->TabIndex = 9;
			this->paper->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->操作AToolStripMenuItem, 
				this->帮助ToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(965, 27);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 操作AToolStripMenuItem
			// 
			this->操作AToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->toolStripMenuItem2, 
				this->位置重置ToolStripMenuItem, this->涂色版重置ToolStripMenuItem, this->toolStripSeparator1, this->退出ToolStripMenuItem});
			this->操作AToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->操作AToolStripMenuItem->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->操作AToolStripMenuItem->Name = L"操作AToolStripMenuItem";
			this->操作AToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::O));
			this->操作AToolStripMenuItem->Size = System::Drawing::Size(70, 23);
			this->操作AToolStripMenuItem->Text = L"操作(&O)";
			this->操作AToolStripMenuItem->DropDownClosed += gcnew System::EventHandler(this, &Form1::操作AToolStripMenuItem_DropDownClosed);
			this->操作AToolStripMenuItem->DropDownOpened += gcnew System::EventHandler(this, &Form1::操作AToolStripMenuItem_DropDownOpened);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->ShortcutKeys = System::Windows::Forms::Keys::F1;
			this->toolStripMenuItem2->Size = System::Drawing::Size(174, 24);
			this->toolStripMenuItem2->Text = L"颜色重置";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem2_Click);
			// 
			// 位置重置ToolStripMenuItem
			// 
			this->位置重置ToolStripMenuItem->Name = L"位置重置ToolStripMenuItem";
			this->位置重置ToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F2;
			this->位置重置ToolStripMenuItem->Size = System::Drawing::Size(174, 24);
			this->位置重置ToolStripMenuItem->Text = L"位置重置";
			this->位置重置ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::位置重置ToolStripMenuItem_Click);
			// 
			// 涂色版重置ToolStripMenuItem
			// 
			this->涂色版重置ToolStripMenuItem->Name = L"涂色版重置ToolStripMenuItem";
			this->涂色版重置ToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F3;
			this->涂色版重置ToolStripMenuItem->Size = System::Drawing::Size(174, 24);
			this->涂色版重置ToolStripMenuItem->Text = L"涂色版重置";
			this->涂色版重置ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::涂色版重置ToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(171, 6);
			// 
			// 退出ToolStripMenuItem
			// 
			this->退出ToolStripMenuItem->Name = L"退出ToolStripMenuItem";
			this->退出ToolStripMenuItem->Size = System::Drawing::Size(174, 24);
			this->退出ToolStripMenuItem->Text = L"退出";
			this->退出ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::退出ToolStripMenuItem_Click);
			// 
			// 帮助ToolStripMenuItem
			// 
			this->帮助ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->说明ToolStripMenuItem});
			this->帮助ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->帮助ToolStripMenuItem->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->帮助ToolStripMenuItem->Name = L"帮助ToolStripMenuItem";
			this->帮助ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::H));
			this->帮助ToolStripMenuItem->Size = System::Drawing::Size(89, 23);
			this->帮助ToolStripMenuItem->Text = L"帮助（&H）";
			this->帮助ToolStripMenuItem->DropDownClosed += gcnew System::EventHandler(this, &Form1::帮助ToolStripMenuItem_DropDownClosed);
			this->帮助ToolStripMenuItem->DropDownOpened += gcnew System::EventHandler(this, &Form1::帮助ToolStripMenuItem_DropDownOpened);
			// 
			// 说明ToolStripMenuItem
			// 
			this->说明ToolStripMenuItem->Name = L"说明ToolStripMenuItem";
			this->说明ToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F4;
			this->说明ToolStripMenuItem->Size = System::Drawing::Size(152, 24);
			this->说明ToolStripMenuItem->Text = L"说明";
			this->说明ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::说明ToolStripMenuItem_Click);
			// 
			// kexuanyanse
			// 
			this->kexuanyanse->AutoSize = true;
			this->kexuanyanse->BackColor = System::Drawing::Color::Transparent;
			this->kexuanyanse->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->kexuanyanse->Location = System::Drawing::Point(432, 108);
			this->kexuanyanse->Name = L"kexuanyanse";
			this->kexuanyanse->Size = System::Drawing::Size(90, 22);
			this->kexuanyanse->TabIndex = 11;
			this->kexuanyanse->Text = L"可选颜色：";
			// 
			// suoxuanyanse
			// 
			this->suoxuanyanse->AutoSize = true;
			this->suoxuanyanse->BackColor = System::Drawing::Color::Transparent;
			this->suoxuanyanse->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->suoxuanyanse->Location = System::Drawing::Point(720, 108);
			this->suoxuanyanse->Name = L"suoxuanyanse";
			this->suoxuanyanse->Size = System::Drawing::Size(90, 22);
			this->suoxuanyanse->TabIndex = 12;
			this->suoxuanyanse->Text = L"所选颜色：";
			// 
			// BB5
			// 
			this->BB5->BackColor = System::Drawing::Color::Green;
			this->BB5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BB5->Location = System::Drawing::Point(843, 324);
			this->BB5->Name = L"BB5";
			this->BB5->Size = System::Drawing::Size(30, 30);
			this->BB5->TabIndex = 13;
			this->BB5->TabStop = false;
			this->BB5->UseVisualStyleBackColor = false;
			// 
			// BB7
			// 
			this->BB7->BackColor = System::Drawing::Color::Green;
			this->BB7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BB7->Location = System::Drawing::Point(874, 355);
			this->BB7->Name = L"BB7";
			this->BB7->Size = System::Drawing::Size(30, 30);
			this->BB7->TabIndex = 14;
			this->BB7->TabStop = false;
			this->BB7->UseVisualStyleBackColor = false;
			this->BB7->Click += gcnew System::EventHandler(this, &Form1::BB7_Click);
			// 
			// BB1
			// 
			this->BB1->BackColor = System::Drawing::Color::Green;
			this->BB1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BB1->Location = System::Drawing::Point(874, 293);
			this->BB1->Name = L"BB1";
			this->BB1->Size = System::Drawing::Size(30, 30);
			this->BB1->TabIndex = 15;
			this->BB1->TabStop = false;
			this->BB1->UseVisualStyleBackColor = false;
			this->BB1->Click += gcnew System::EventHandler(this, &Form1::BB1_Click);
			// 
			// BB9
			// 
			this->BB9->BackColor = System::Drawing::Color::Green;
			this->BB9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BB9->Location = System::Drawing::Point(812, 355);
			this->BB9->Name = L"BB9";
			this->BB9->Size = System::Drawing::Size(30, 30);
			this->BB9->TabIndex = 16;
			this->BB9->TabStop = false;
			this->BB9->UseVisualStyleBackColor = false;
			this->BB9->Click += gcnew System::EventHandler(this, &Form1::BB9_Click);
			// 
			// BB3
			// 
			this->BB3->BackColor = System::Drawing::Color::Green;
			this->BB3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BB3->Location = System::Drawing::Point(812, 293);
			this->BB3->Name = L"BB3";
			this->BB3->Size = System::Drawing::Size(30, 30);
			this->BB3->TabIndex = 17;
			this->BB3->TabStop = false;
			this->BB3->UseVisualStyleBackColor = false;
			this->BB3->Click += gcnew System::EventHandler(this, &Form1::BB3_Click);
			// 
			// BB6
			// 
			this->BB6->BackColor = System::Drawing::Color::Green;
			this->BB6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BB6->Location = System::Drawing::Point(812, 324);
			this->BB6->Name = L"BB6";
			this->BB6->Size = System::Drawing::Size(30, 30);
			this->BB6->TabIndex = 18;
			this->BB6->TabStop = false;
			this->BB6->UseVisualStyleBackColor = false;
			this->BB6->Click += gcnew System::EventHandler(this, &Form1::BB6_Click);
			// 
			// DD5
			// 
			this->DD5->BackColor = System::Drawing::Color::White;
			this->DD5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DD5->Location = System::Drawing::Point(655, 418);
			this->DD5->Name = L"DD5";
			this->DD5->Size = System::Drawing::Size(30, 30);
			this->DD5->TabIndex = 19;
			this->DD5->TabStop = false;
			this->DD5->UseVisualStyleBackColor = false;
			// 
			// RR5
			// 
			this->RR5->BackColor = System::Drawing::Color::Red;
			this->RR5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RR5->Location = System::Drawing::Point(749, 324);
			this->RR5->Name = L"RR5";
			this->RR5->Size = System::Drawing::Size(30, 30);
			this->RR5->TabIndex = 20;
			this->RR5->TabStop = false;
			this->RR5->UseVisualStyleBackColor = false;
			// 
			// LL5
			// 
			this->LL5->BackColor = System::Drawing::Color::OrangeRed;
			this->LL5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->LL5->Location = System::Drawing::Point(561, 324);
			this->LL5->Name = L"LL5";
			this->LL5->Size = System::Drawing::Size(30, 30);
			this->LL5->TabIndex = 21;
			this->LL5->TabStop = false;
			this->LL5->UseVisualStyleBackColor = false;
			// 
			// LL9
			// 
			this->LL9->BackColor = System::Drawing::Color::OrangeRed;
			this->LL9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->LL9->Location = System::Drawing::Point(592, 355);
			this->LL9->Name = L"LL9";
			this->LL9->Size = System::Drawing::Size(30, 30);
			this->LL9->TabIndex = 22;
			this->LL9->TabStop = false;
			this->LL9->UseVisualStyleBackColor = false;
			this->LL9->Click += gcnew System::EventHandler(this, &Form1::LL9_Click);
			// 
			// LL7
			// 
			this->LL7->BackColor = System::Drawing::Color::OrangeRed;
			this->LL7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->LL7->Location = System::Drawing::Point(530, 355);
			this->LL7->Name = L"LL7";
			this->LL7->Size = System::Drawing::Size(30, 30);
			this->LL7->TabIndex = 23;
			this->LL7->TabStop = false;
			this->LL7->UseVisualStyleBackColor = false;
			this->LL7->Click += gcnew System::EventHandler(this, &Form1::LL7_Click);
			// 
			// DD1
			// 
			this->DD1->BackColor = System::Drawing::Color::White;
			this->DD1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DD1->Location = System::Drawing::Point(624, 449);
			this->DD1->Name = L"DD1";
			this->DD1->Size = System::Drawing::Size(30, 30);
			this->DD1->TabIndex = 24;
			this->DD1->TabStop = false;
			this->DD1->UseVisualStyleBackColor = false;
			this->DD1->Click += gcnew System::EventHandler(this, &Form1::DD1_Click);
			// 
			// DD7
			// 
			this->DD7->BackColor = System::Drawing::Color::White;
			this->DD7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DD7->Location = System::Drawing::Point(624, 387);
			this->DD7->Name = L"DD7";
			this->DD7->Size = System::Drawing::Size(30, 30);
			this->DD7->TabIndex = 25;
			this->DD7->TabStop = false;
			this->DD7->UseVisualStyleBackColor = false;
			this->DD7->Click += gcnew System::EventHandler(this, &Form1::DD7_Click);
			// 
			// DD9
			// 
			this->DD9->BackColor = System::Drawing::Color::White;
			this->DD9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DD9->Location = System::Drawing::Point(686, 387);
			this->DD9->Name = L"DD9";
			this->DD9->Size = System::Drawing::Size(30, 30);
			this->DD9->TabIndex = 26;
			this->DD9->TabStop = false;
			this->DD9->UseVisualStyleBackColor = false;
			this->DD9->Click += gcnew System::EventHandler(this, &Form1::DD9_Click);
			// 
			// RR7
			// 
			this->RR7->BackColor = System::Drawing::Color::Red;
			this->RR7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RR7->Location = System::Drawing::Point(780, 355);
			this->RR7->Name = L"RR7";
			this->RR7->Size = System::Drawing::Size(30, 30);
			this->RR7->TabIndex = 27;
			this->RR7->TabStop = false;
			this->RR7->UseVisualStyleBackColor = false;
			this->RR7->Click += gcnew System::EventHandler(this, &Form1::RR7_Click);
			// 
			// RR1
			// 
			this->RR1->BackColor = System::Drawing::Color::Red;
			this->RR1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RR1->Location = System::Drawing::Point(780, 293);
			this->RR1->Name = L"RR1";
			this->RR1->Size = System::Drawing::Size(30, 30);
			this->RR1->TabIndex = 28;
			this->RR1->TabStop = false;
			this->RR1->UseVisualStyleBackColor = false;
			this->RR1->Click += gcnew System::EventHandler(this, &Form1::RR1_Click);
			// 
			// RR4
			// 
			this->RR4->BackColor = System::Drawing::Color::Red;
			this->RR4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RR4->Location = System::Drawing::Point(780, 324);
			this->RR4->Name = L"RR4";
			this->RR4->Size = System::Drawing::Size(30, 30);
			this->RR4->TabIndex = 29;
			this->RR4->TabStop = false;
			this->RR4->UseVisualStyleBackColor = false;
			this->RR4->Click += gcnew System::EventHandler(this, &Form1::RR4_Click);
			// 
			// UU5
			// 
			this->UU5->BackColor = System::Drawing::Color::Yellow;
			this->UU5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->UU5->Location = System::Drawing::Point(655, 230);
			this->UU5->Name = L"UU5";
			this->UU5->Size = System::Drawing::Size(30, 30);
			this->UU5->TabIndex = 30;
			this->UU5->TabStop = false;
			this->UU5->UseVisualStyleBackColor = false;
			// 
			// UU7
			// 
			this->UU7->BackColor = System::Drawing::Color::Yellow;
			this->UU7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->UU7->Location = System::Drawing::Point(624, 261);
			this->UU7->Name = L"UU7";
			this->UU7->Size = System::Drawing::Size(30, 30);
			this->UU7->TabIndex = 31;
			this->UU7->TabStop = false;
			this->UU7->UseVisualStyleBackColor = false;
			this->UU7->Click += gcnew System::EventHandler(this, &Form1::UU7_Click);
			// 
			// UU1
			// 
			this->UU1->BackColor = System::Drawing::Color::Yellow;
			this->UU1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->UU1->Location = System::Drawing::Point(624, 199);
			this->UU1->Name = L"UU1";
			this->UU1->Size = System::Drawing::Size(30, 30);
			this->UU1->TabIndex = 32;
			this->UU1->TabStop = false;
			this->UU1->UseVisualStyleBackColor = false;
			this->UU1->Click += gcnew System::EventHandler(this, &Form1::UU1_Click);
			// 
			// UU3
			// 
			this->UU3->BackColor = System::Drawing::Color::Yellow;
			this->UU3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->UU3->Location = System::Drawing::Point(686, 199);
			this->UU3->Name = L"UU3";
			this->UU3->Size = System::Drawing::Size(30, 30);
			this->UU3->TabIndex = 33;
			this->UU3->TabStop = false;
			this->UU3->UseVisualStyleBackColor = false;
			this->UU3->Click += gcnew System::EventHandler(this, &Form1::UU3_Click);
			// 
			// UU9
			// 
			this->UU9->BackColor = System::Drawing::Color::Yellow;
			this->UU9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->UU9->Location = System::Drawing::Point(686, 261);
			this->UU9->Name = L"UU9";
			this->UU9->Size = System::Drawing::Size(30, 30);
			this->UU9->TabIndex = 34;
			this->UU9->TabStop = false;
			this->UU9->UseVisualStyleBackColor = false;
			this->UU9->Click += gcnew System::EventHandler(this, &Form1::UU9_Click);
			// 
			// UU2
			// 
			this->UU2->BackColor = System::Drawing::Color::Yellow;
			this->UU2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->UU2->Location = System::Drawing::Point(655, 199);
			this->UU2->Name = L"UU2";
			this->UU2->Size = System::Drawing::Size(30, 30);
			this->UU2->TabIndex = 35;
			this->UU2->TabStop = false;
			this->UU2->UseVisualStyleBackColor = false;
			this->UU2->Click += gcnew System::EventHandler(this, &Form1::UU2_Click);
			// 
			// UU4
			// 
			this->UU4->BackColor = System::Drawing::Color::Yellow;
			this->UU4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->UU4->Location = System::Drawing::Point(624, 230);
			this->UU4->Name = L"UU4";
			this->UU4->Size = System::Drawing::Size(30, 30);
			this->UU4->TabIndex = 36;
			this->UU4->TabStop = false;
			this->UU4->UseVisualStyleBackColor = false;
			this->UU4->Click += gcnew System::EventHandler(this, &Form1::UU4_Click);
			// 
			// UU6
			// 
			this->UU6->BackColor = System::Drawing::Color::Yellow;
			this->UU6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->UU6->Location = System::Drawing::Point(686, 230);
			this->UU6->Name = L"UU6";
			this->UU6->Size = System::Drawing::Size(30, 30);
			this->UU6->TabIndex = 37;
			this->UU6->TabStop = false;
			this->UU6->UseVisualStyleBackColor = false;
			this->UU6->Click += gcnew System::EventHandler(this, &Form1::UU6_Click);
			// 
			// UU8
			// 
			this->UU8->BackColor = System::Drawing::Color::Yellow;
			this->UU8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->UU8->Location = System::Drawing::Point(655, 261);
			this->UU8->Name = L"UU8";
			this->UU8->Size = System::Drawing::Size(30, 30);
			this->UU8->TabIndex = 38;
			this->UU8->TabStop = false;
			this->UU8->UseVisualStyleBackColor = false;
			this->UU8->Click += gcnew System::EventHandler(this, &Form1::UU8_Click);
			// 
			// RR8
			// 
			this->RR8->BackColor = System::Drawing::Color::Red;
			this->RR8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RR8->Location = System::Drawing::Point(749, 355);
			this->RR8->Name = L"RR8";
			this->RR8->Size = System::Drawing::Size(30, 30);
			this->RR8->TabIndex = 39;
			this->RR8->TabStop = false;
			this->RR8->UseVisualStyleBackColor = false;
			this->RR8->Click += gcnew System::EventHandler(this, &Form1::RR8_Click);
			// 
			// RR2
			// 
			this->RR2->BackColor = System::Drawing::Color::Red;
			this->RR2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RR2->Location = System::Drawing::Point(749, 293);
			this->RR2->Name = L"RR2";
			this->RR2->Size = System::Drawing::Size(30, 30);
			this->RR2->TabIndex = 40;
			this->RR2->TabStop = false;
			this->RR2->UseVisualStyleBackColor = false;
			this->RR2->Click += gcnew System::EventHandler(this, &Form1::RR2_Click);
			// 
			// RR9
			// 
			this->RR9->BackColor = System::Drawing::Color::Red;
			this->RR9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RR9->Location = System::Drawing::Point(718, 355);
			this->RR9->Name = L"RR9";
			this->RR9->Size = System::Drawing::Size(30, 30);
			this->RR9->TabIndex = 41;
			this->RR9->TabStop = false;
			this->RR9->UseVisualStyleBackColor = false;
			this->RR9->Click += gcnew System::EventHandler(this, &Form1::RR9_Click);
			// 
			// RR6
			// 
			this->RR6->BackColor = System::Drawing::Color::Red;
			this->RR6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RR6->Location = System::Drawing::Point(718, 324);
			this->RR6->Name = L"RR6";
			this->RR6->Size = System::Drawing::Size(30, 30);
			this->RR6->TabIndex = 42;
			this->RR6->TabStop = false;
			this->RR6->UseVisualStyleBackColor = false;
			this->RR6->Click += gcnew System::EventHandler(this, &Form1::RR6_Click);
			// 
			// RR3
			// 
			this->RR3->BackColor = System::Drawing::Color::Red;
			this->RR3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RR3->Location = System::Drawing::Point(718, 293);
			this->RR3->Name = L"RR3";
			this->RR3->Size = System::Drawing::Size(30, 30);
			this->RR3->TabIndex = 43;
			this->RR3->TabStop = false;
			this->RR3->UseVisualStyleBackColor = false;
			this->RR3->Click += gcnew System::EventHandler(this, &Form1::RR3_Click);
			// 
			// BB4
			// 
			this->BB4->BackColor = System::Drawing::Color::Green;
			this->BB4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BB4->Location = System::Drawing::Point(874, 324);
			this->BB4->Name = L"BB4";
			this->BB4->Size = System::Drawing::Size(30, 30);
			this->BB4->TabIndex = 44;
			this->BB4->TabStop = false;
			this->BB4->UseVisualStyleBackColor = false;
			this->BB4->Click += gcnew System::EventHandler(this, &Form1::BB4_Click);
			// 
			// BB8
			// 
			this->BB8->BackColor = System::Drawing::Color::Green;
			this->BB8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BB8->Location = System::Drawing::Point(843, 355);
			this->BB8->Name = L"BB8";
			this->BB8->Size = System::Drawing::Size(30, 30);
			this->BB8->TabIndex = 45;
			this->BB8->TabStop = false;
			this->BB8->UseVisualStyleBackColor = false;
			this->BB8->Click += gcnew System::EventHandler(this, &Form1::BB8_Click);
			// 
			// BB2
			// 
			this->BB2->BackColor = System::Drawing::Color::Green;
			this->BB2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BB2->Location = System::Drawing::Point(843, 293);
			this->BB2->Name = L"BB2";
			this->BB2->Size = System::Drawing::Size(30, 30);
			this->BB2->TabIndex = 46;
			this->BB2->TabStop = false;
			this->BB2->UseVisualStyleBackColor = false;
			this->BB2->Click += gcnew System::EventHandler(this, &Form1::BB2_Click);
			// 
			// FF3
			// 
			this->FF3->BackColor = System::Drawing::Color::Blue;
			this->FF3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->FF3->Location = System::Drawing::Point(686, 293);
			this->FF3->Name = L"FF3";
			this->FF3->Size = System::Drawing::Size(30, 30);
			this->FF3->TabIndex = 47;
			this->FF3->TabStop = false;
			this->FF3->UseVisualStyleBackColor = false;
			this->FF3->Click += gcnew System::EventHandler(this, &Form1::FF3_Click);
			// 
			// FF2
			// 
			this->FF2->BackColor = System::Drawing::Color::Blue;
			this->FF2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->FF2->Location = System::Drawing::Point(655, 293);
			this->FF2->Name = L"FF2";
			this->FF2->Size = System::Drawing::Size(30, 30);
			this->FF2->TabIndex = 48;
			this->FF2->TabStop = false;
			this->FF2->UseVisualStyleBackColor = false;
			this->FF2->Click += gcnew System::EventHandler(this, &Form1::FF2_Click);
			// 
			// FF1
			// 
			this->FF1->BackColor = System::Drawing::Color::Blue;
			this->FF1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->FF1->Location = System::Drawing::Point(624, 293);
			this->FF1->Name = L"FF1";
			this->FF1->Size = System::Drawing::Size(30, 30);
			this->FF1->TabIndex = 49;
			this->FF1->TabStop = false;
			this->FF1->UseVisualStyleBackColor = false;
			this->FF1->Click += gcnew System::EventHandler(this, &Form1::FF1_Click);
			// 
			// FF4
			// 
			this->FF4->BackColor = System::Drawing::Color::Blue;
			this->FF4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->FF4->Location = System::Drawing::Point(624, 324);
			this->FF4->Name = L"FF4";
			this->FF4->Size = System::Drawing::Size(30, 30);
			this->FF4->TabIndex = 50;
			this->FF4->TabStop = false;
			this->FF4->UseVisualStyleBackColor = false;
			this->FF4->Click += gcnew System::EventHandler(this, &Form1::FF4_Click);
			// 
			// FF7
			// 
			this->FF7->BackColor = System::Drawing::Color::Blue;
			this->FF7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->FF7->Location = System::Drawing::Point(624, 355);
			this->FF7->Name = L"FF7";
			this->FF7->Size = System::Drawing::Size(30, 30);
			this->FF7->TabIndex = 51;
			this->FF7->TabStop = false;
			this->FF7->UseVisualStyleBackColor = false;
			this->FF7->Click += gcnew System::EventHandler(this, &Form1::FF7_Click);
			// 
			// FF8
			// 
			this->FF8->BackColor = System::Drawing::Color::Blue;
			this->FF8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->FF8->Location = System::Drawing::Point(655, 355);
			this->FF8->Name = L"FF8";
			this->FF8->Size = System::Drawing::Size(30, 30);
			this->FF8->TabIndex = 52;
			this->FF8->TabStop = false;
			this->FF8->UseVisualStyleBackColor = false;
			this->FF8->Click += gcnew System::EventHandler(this, &Form1::FF8_Click);
			// 
			// FF9
			// 
			this->FF9->BackColor = System::Drawing::Color::Blue;
			this->FF9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->FF9->Location = System::Drawing::Point(686, 355);
			this->FF9->Name = L"FF9";
			this->FF9->Size = System::Drawing::Size(30, 30);
			this->FF9->TabIndex = 53;
			this->FF9->TabStop = false;
			this->FF9->UseVisualStyleBackColor = false;
			this->FF9->Click += gcnew System::EventHandler(this, &Form1::FF9_Click);
			// 
			// FF6
			// 
			this->FF6->BackColor = System::Drawing::Color::Blue;
			this->FF6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->FF6->Location = System::Drawing::Point(686, 324);
			this->FF6->Name = L"FF6";
			this->FF6->Size = System::Drawing::Size(30, 30);
			this->FF6->TabIndex = 54;
			this->FF6->TabStop = false;
			this->FF6->UseVisualStyleBackColor = false;
			this->FF6->Click += gcnew System::EventHandler(this, &Form1::FF6_Click);
			// 
			// DD3
			// 
			this->DD3->BackColor = System::Drawing::Color::White;
			this->DD3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DD3->Location = System::Drawing::Point(686, 449);
			this->DD3->Name = L"DD3";
			this->DD3->Size = System::Drawing::Size(30, 30);
			this->DD3->TabIndex = 55;
			this->DD3->TabStop = false;
			this->DD3->UseVisualStyleBackColor = false;
			this->DD3->Click += gcnew System::EventHandler(this, &Form1::DD3_Click);
			// 
			// DD4
			// 
			this->DD4->BackColor = System::Drawing::Color::White;
			this->DD4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DD4->Location = System::Drawing::Point(624, 418);
			this->DD4->Name = L"DD4";
			this->DD4->Size = System::Drawing::Size(30, 30);
			this->DD4->TabIndex = 56;
			this->DD4->TabStop = false;
			this->DD4->UseVisualStyleBackColor = false;
			this->DD4->Click += gcnew System::EventHandler(this, &Form1::DD4_Click);
			// 
			// DD2
			// 
			this->DD2->BackColor = System::Drawing::Color::White;
			this->DD2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DD2->Location = System::Drawing::Point(655, 449);
			this->DD2->Name = L"DD2";
			this->DD2->Size = System::Drawing::Size(30, 30);
			this->DD2->TabIndex = 57;
			this->DD2->TabStop = false;
			this->DD2->UseVisualStyleBackColor = false;
			this->DD2->Click += gcnew System::EventHandler(this, &Form1::DD2_Click);
			// 
			// DD6
			// 
			this->DD6->BackColor = System::Drawing::Color::White;
			this->DD6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DD6->Location = System::Drawing::Point(686, 418);
			this->DD6->Name = L"DD6";
			this->DD6->Size = System::Drawing::Size(30, 30);
			this->DD6->TabIndex = 58;
			this->DD6->TabStop = false;
			this->DD6->UseVisualStyleBackColor = false;
			this->DD6->Click += gcnew System::EventHandler(this, &Form1::DD6_Click);
			// 
			// DD8
			// 
			this->DD8->BackColor = System::Drawing::Color::White;
			this->DD8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DD8->Location = System::Drawing::Point(655, 387);
			this->DD8->Name = L"DD8";
			this->DD8->Size = System::Drawing::Size(30, 30);
			this->DD8->TabIndex = 59;
			this->DD8->TabStop = false;
			this->DD8->UseVisualStyleBackColor = false;
			this->DD8->Click += gcnew System::EventHandler(this, &Form1::DD8_Click);
			// 
			// LL1
			// 
			this->LL1->BackColor = System::Drawing::Color::OrangeRed;
			this->LL1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->LL1->Location = System::Drawing::Point(530, 293);
			this->LL1->Name = L"LL1";
			this->LL1->Size = System::Drawing::Size(30, 30);
			this->LL1->TabIndex = 60;
			this->LL1->TabStop = false;
			this->LL1->UseVisualStyleBackColor = false;
			this->LL1->Click += gcnew System::EventHandler(this, &Form1::LL1_Click);
			// 
			// LL3
			// 
			this->LL3->BackColor = System::Drawing::Color::OrangeRed;
			this->LL3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->LL3->Location = System::Drawing::Point(592, 293);
			this->LL3->Name = L"LL3";
			this->LL3->Size = System::Drawing::Size(30, 30);
			this->LL3->TabIndex = 61;
			this->LL3->TabStop = false;
			this->LL3->UseVisualStyleBackColor = false;
			this->LL3->Click += gcnew System::EventHandler(this, &Form1::LL3_Click);
			// 
			// LL4
			// 
			this->LL4->BackColor = System::Drawing::Color::OrangeRed;
			this->LL4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->LL4->Location = System::Drawing::Point(530, 324);
			this->LL4->Name = L"LL4";
			this->LL4->Size = System::Drawing::Size(30, 30);
			this->LL4->TabIndex = 62;
			this->LL4->TabStop = false;
			this->LL4->UseVisualStyleBackColor = false;
			this->LL4->Click += gcnew System::EventHandler(this, &Form1::LL4_Click);
			// 
			// LL2
			// 
			this->LL2->BackColor = System::Drawing::Color::OrangeRed;
			this->LL2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->LL2->Location = System::Drawing::Point(561, 293);
			this->LL2->Name = L"LL2";
			this->LL2->Size = System::Drawing::Size(30, 30);
			this->LL2->TabIndex = 63;
			this->LL2->TabStop = false;
			this->LL2->UseVisualStyleBackColor = false;
			this->LL2->Click += gcnew System::EventHandler(this, &Form1::LL2_Click);
			// 
			// LL8
			// 
			this->LL8->BackColor = System::Drawing::Color::OrangeRed;
			this->LL8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->LL8->Location = System::Drawing::Point(561, 355);
			this->LL8->Name = L"LL8";
			this->LL8->Size = System::Drawing::Size(30, 30);
			this->LL8->TabIndex = 64;
			this->LL8->TabStop = false;
			this->LL8->UseVisualStyleBackColor = false;
			this->LL8->Click += gcnew System::EventHandler(this, &Form1::LL8_Click);
			// 
			// LL6
			// 
			this->LL6->BackColor = System::Drawing::Color::OrangeRed;
			this->LL6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->LL6->Location = System::Drawing::Point(592, 324);
			this->LL6->Name = L"LL6";
			this->LL6->Size = System::Drawing::Size(30, 30);
			this->LL6->TabIndex = 65;
			this->LL6->TabStop = false;
			this->LL6->UseVisualStyleBackColor = false;
			this->LL6->Click += gcnew System::EventHandler(this, &Form1::LL6_Click);
			// 
			// tuse
			// 
			this->tuse->AutoSize = true;
			this->tuse->BackColor = System::Drawing::Color::Transparent;
			this->tuse->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tuse->Location = System::Drawing::Point(464, 232);
			this->tuse->Name = L"tuse";
			this->tuse->Size = System::Drawing::Size(58, 22);
			this->tuse->TabIndex = 66;
			this->tuse->Text = L"涂色：";
			// 
			// ColorUse
			// 
			this->ColorUse->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ColorUse.BackgroundImage")));
			this->ColorUse->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ColorUse->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ColorUse->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->ColorUse->Location = System::Drawing::Point(468, 497);
			this->ColorUse->Name = L"ColorUse";
			this->ColorUse->Size = System::Drawing::Size(92, 45);
			this->ColorUse->TabIndex = 67;
			this->ColorUse->TabStop = false;
			this->ColorUse->Text = L"颜色应用";
			this->ColorUse->UseVisualStyleBackColor = false;
			this->ColorUse->Click += gcnew System::EventHandler(this, &Form1::ColorUse_Click);
			// 
			// Solve1
			// 
			this->Solve1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Solve1.BackgroundImage")));
			this->Solve1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Solve1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Solve1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->Solve1->Location = System::Drawing::Point(624, 497);
			this->Solve1->Name = L"Solve1";
			this->Solve1->Size = System::Drawing::Size(92, 45);
			this->Solve1->TabIndex = 68;
			this->Solve1->TabStop = false;
			this->Solve1->Text = L"求解";
			this->Solve1->UseVisualStyleBackColor = true;
			this->Solve1->Click += gcnew System::EventHandler(this, &Form1::Solve1_Click);
			// 
			// ToRight
			// 
			this->ToRight->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ToRight.BackgroundImage")));
			this->ToRight->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ToRight->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ToRight->Location = System::Drawing::Point(267, 390);
			this->ToRight->Name = L"ToRight";
			this->ToRight->Size = System::Drawing::Size(92, 45);
			this->ToRight->TabIndex = 69;
			this->ToRight->UseVisualStyleBackColor = true;
			this->ToRight->Click += gcnew System::EventHandler(this, &Form1::ToRight_Click);
			// 
			// ToLeft
			// 
			this->ToLeft->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ToLeft.BackgroundImage")));
			this->ToLeft->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ToLeft->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ToLeft->Location = System::Drawing::Point(59, 390);
			this->ToLeft->Name = L"ToLeft";
			this->ToLeft->Size = System::Drawing::Size(92, 45);
			this->ToLeft->TabIndex = 70;
			this->ToLeft->UseVisualStyleBackColor = true;
			this->ToLeft->Click += gcnew System::EventHandler(this, &Form1::ToLeft_Click);
			// 
			// Disorganize
			// 
			this->Disorganize->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Disorganize.BackgroundImage")));
			this->Disorganize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Disorganize->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Disorganize->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->Disorganize->Location = System::Drawing::Point(780, 499);
			this->Disorganize->Name = L"Disorganize";
			this->Disorganize->Size = System::Drawing::Size(92, 45);
			this->Disorganize->TabIndex = 71;
			this->Disorganize->Text = L"打乱";
			this->Disorganize->UseVisualStyleBackColor = true;
			this->Disorganize->Click += gcnew System::EventHandler(this, &Form1::Disorganize_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(965, 601);
			this->Controls->Add(this->Disorganize);
			this->Controls->Add(this->ToLeft);
			this->Controls->Add(this->ToRight);
			this->Controls->Add(this->Solve1);
			this->Controls->Add(this->ColorUse);
			this->Controls->Add(this->tuse);
			this->Controls->Add(this->LL6);
			this->Controls->Add(this->LL8);
			this->Controls->Add(this->LL2);
			this->Controls->Add(this->LL4);
			this->Controls->Add(this->LL3);
			this->Controls->Add(this->LL1);
			this->Controls->Add(this->DD8);
			this->Controls->Add(this->DD6);
			this->Controls->Add(this->DD2);
			this->Controls->Add(this->DD4);
			this->Controls->Add(this->DD3);
			this->Controls->Add(this->FF6);
			this->Controls->Add(this->FF9);
			this->Controls->Add(this->FF8);
			this->Controls->Add(this->FF7);
			this->Controls->Add(this->FF4);
			this->Controls->Add(this->FF1);
			this->Controls->Add(this->FF2);
			this->Controls->Add(this->FF3);
			this->Controls->Add(this->BB2);
			this->Controls->Add(this->BB8);
			this->Controls->Add(this->BB4);
			this->Controls->Add(this->RR3);
			this->Controls->Add(this->RR6);
			this->Controls->Add(this->RR9);
			this->Controls->Add(this->RR2);
			this->Controls->Add(this->RR8);
			this->Controls->Add(this->UU8);
			this->Controls->Add(this->UU6);
			this->Controls->Add(this->UU4);
			this->Controls->Add(this->UU2);
			this->Controls->Add(this->UU9);
			this->Controls->Add(this->UU3);
			this->Controls->Add(this->UU1);
			this->Controls->Add(this->UU7);
			this->Controls->Add(this->UU5);
			this->Controls->Add(this->RR4);
			this->Controls->Add(this->RR1);
			this->Controls->Add(this->RR7);
			this->Controls->Add(this->DD9);
			this->Controls->Add(this->DD7);
			this->Controls->Add(this->DD1);
			this->Controls->Add(this->LL7);
			this->Controls->Add(this->LL9);
			this->Controls->Add(this->LL5);
			this->Controls->Add(this->RR5);
			this->Controls->Add(this->DD5);
			this->Controls->Add(this->BB6);
			this->Controls->Add(this->BB3);
			this->Controls->Add(this->BB9);
			this->Controls->Add(this->BB1);
			this->Controls->Add(this->BB7);
			this->Controls->Add(this->BB5);
			this->Controls->Add(this->suoxuanyanse);
			this->Controls->Add(this->kexuanyanse);
			this->Controls->Add(this->paper);
			this->Controls->Add(this->currentColor);
			this->Controls->Add(this->Dcolor);
			this->Controls->Add(this->Ucolor);
			this->Controls->Add(this->Rcolor);
			this->Controls->Add(this->Lcolor);
			this->Controls->Add(this->Bcolor);
			this->Controls->Add(this->displayBox);
			this->Controls->Add(this->Fcolor);
			this->Controls->Add(this->FF5);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->ClientSizeChanged += gcnew System::EventHandler(this, &Form1::Form1_ClientSizeChanged);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Form1_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->currentColor))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->paper))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

				 this->display();
			 }
	private: System::Void Form1_ClientSizeChanged(System::Object^  sender, System::EventArgs^  e) {
				 this->reshape(300,300);
			 }
	private: System::Void Form1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

				 switch(e->KeyValue)//整体旋转魔方
				 {
				 case 68:
					 yRot+=5;
					 this->display();
					 break;
				 case 65:
					 yRot-=5;
					 this->display();
					 break;
				 case 87:
					 xRot-=5;
					 display();
					 break;
				 case 83:
					 xRot+=5;
					 this->display();
					 break;
				 case 90:
					 zRot+=5;
					 this->display();
					 break;
				 case 88:
					 zRot-=5;
					 this->display();
					 break;
				 }
			 }
	private: System::Void Fcolor_Click(System::Object^  sender, System::EventArgs^  e) {
				 currentColor->BackColor=Fcolor->BackColor;
			 }
	private: System::Void Ucolor_Click(System::Object^  sender, System::EventArgs^  e) {
				 currentColor->BackColor=Ucolor->BackColor;
			 }
	private: System::Void Dcolor_Click(System::Object^  sender, System::EventArgs^  e) {
				 currentColor->BackColor=Dcolor->BackColor;
			 }
	private: System::Void Bcolor_Click(System::Object^  sender, System::EventArgs^  e) {
				 currentColor->BackColor=Bcolor->BackColor;
			 }
	private: System::Void Lcolor_Click(System::Object^  sender, System::EventArgs^  e) {
				 currentColor->BackColor=Lcolor->BackColor;
			 }
	private: System::Void Rcolor_Click(System::Object^  sender, System::EventArgs^  e) {
				 currentColor->BackColor=Rcolor->BackColor;
			 }
	private: System::Void 操作AToolStripMenuItem_DropDownOpened(System::Object^  sender, System::EventArgs^  e) {
				 操作AToolStripMenuItem->ForeColor=System::Drawing::Color::Black;
			 }
	private: System::Void 操作AToolStripMenuItem_DropDownClosed(System::Object^  sender, System::EventArgs^  e) {
				 操作AToolStripMenuItem->ForeColor=System::Drawing::Color::MediumSeaGreen;
			 }
	private: System::Void LL1_Click(System::Object^  sender, System::EventArgs^  e) {
				 LL1->BackColor=currentColor->BackColor;
			 }
	private: System::Void LL2_Click(System::Object^  sender, System::EventArgs^  e) {
				 LL2->BackColor=currentColor->BackColor;
			 }
	private: System::Void LL3_Click(System::Object^  sender, System::EventArgs^  e) {
				 LL3->BackColor=currentColor->BackColor;
			 }
	private: System::Void LL4_Click(System::Object^  sender, System::EventArgs^  e) {
				 LL4->BackColor=currentColor->BackColor;
			 }
	private: System::Void LL6_Click(System::Object^  sender, System::EventArgs^  e) {
				 LL6->BackColor=currentColor->BackColor;
			 }
	private: System::Void LL7_Click(System::Object^  sender, System::EventArgs^  e) {
				 LL7->BackColor=currentColor->BackColor;
			 }
	private: System::Void LL8_Click(System::Object^  sender, System::EventArgs^  e) {
				 LL8->BackColor=currentColor->BackColor;
			 }
	private: System::Void LL9_Click(System::Object^  sender, System::EventArgs^  e) {
				 LL9->BackColor=currentColor->BackColor;
			 }
	private: System::Void FF1_Click(System::Object^  sender, System::EventArgs^  e) {
				 FF1->BackColor=currentColor->BackColor;
			 }
	private: System::Void FF2_Click(System::Object^  sender, System::EventArgs^  e) {
				 FF2->BackColor=currentColor->BackColor;
			 }
	private: System::Void FF3_Click(System::Object^  sender, System::EventArgs^  e) {
				 FF3->BackColor=currentColor->BackColor;
			 }
	private: System::Void FF4_Click(System::Object^  sender, System::EventArgs^  e) {
				 FF4->BackColor=currentColor->BackColor;
			 }
	private: System::Void FF6_Click(System::Object^  sender, System::EventArgs^  e) {
				 FF6->BackColor=currentColor->BackColor;
			 }
	private: System::Void FF7_Click(System::Object^  sender, System::EventArgs^  e) {
				 FF7->BackColor=currentColor->BackColor;
			 }
	private: System::Void FF8_Click(System::Object^  sender, System::EventArgs^  e) {
				 FF8->BackColor=currentColor->BackColor;
			 }
	private: System::Void FF9_Click(System::Object^  sender, System::EventArgs^  e) {
				 FF9->BackColor=currentColor->BackColor;
			 }
	private: System::Void RR3_Click(System::Object^  sender, System::EventArgs^  e) {
				 RR3->BackColor=currentColor->BackColor;
			 }
	private: System::Void RR2_Click(System::Object^  sender, System::EventArgs^  e) {
				 RR2->BackColor=currentColor->BackColor;
			 }
	private: System::Void RR1_Click(System::Object^  sender, System::EventArgs^  e) {
				 RR1->BackColor=currentColor->BackColor;
			 }
	private: System::Void RR6_Click(System::Object^  sender, System::EventArgs^  e) {
				 RR6->BackColor=currentColor->BackColor;
			 }
	private: System::Void RR4_Click(System::Object^  sender, System::EventArgs^  e) {
				 RR4->BackColor=currentColor->BackColor;
			 }
	private: System::Void RR9_Click(System::Object^  sender, System::EventArgs^  e) {
				 RR9->BackColor=currentColor->BackColor;
			 }
	private: System::Void RR8_Click(System::Object^  sender, System::EventArgs^  e) {
				 RR8->BackColor=currentColor->BackColor;
			 }
	private: System::Void RR7_Click(System::Object^  sender, System::EventArgs^  e) {
				 RR7->BackColor=currentColor->BackColor;
			 }
	private: System::Void BB3_Click(System::Object^  sender, System::EventArgs^  e) {
				 BB3->BackColor=currentColor->BackColor;
			 }
	private: System::Void BB2_Click(System::Object^  sender, System::EventArgs^  e) {
				 BB2->BackColor=currentColor->BackColor;
			 }
	private: System::Void BB1_Click(System::Object^  sender, System::EventArgs^  e) {
				 BB1->BackColor=currentColor->BackColor;
			 }
	private: System::Void BB6_Click(System::Object^  sender, System::EventArgs^  e) {
				 BB6->BackColor=currentColor->BackColor;
			 }
	private: System::Void BB4_Click(System::Object^  sender, System::EventArgs^  e) {
				 BB4->BackColor=currentColor->BackColor;
			 }
	private: System::Void BB9_Click(System::Object^  sender, System::EventArgs^  e) {
				 BB9->BackColor=currentColor->BackColor;
			 }
	private: System::Void BB8_Click(System::Object^  sender, System::EventArgs^  e) {
				 BB8->BackColor=currentColor->BackColor;
			 }
	private: System::Void BB7_Click(System::Object^  sender, System::EventArgs^  e) {
				 BB7->BackColor=currentColor->BackColor;
			 }
	private: System::Void UU1_Click(System::Object^  sender, System::EventArgs^  e) {
				 UU1->BackColor=currentColor->BackColor;
			 }
	private: System::Void UU2_Click(System::Object^  sender, System::EventArgs^  e) {
				 UU2->BackColor=currentColor->BackColor;
			 }
	private: System::Void UU3_Click(System::Object^  sender, System::EventArgs^  e) {
				 UU3->BackColor=currentColor->BackColor;
			 }
	private: System::Void UU4_Click(System::Object^  sender, System::EventArgs^  e) {
				 UU4->BackColor=currentColor->BackColor;
			 }
	private: System::Void UU6_Click(System::Object^  sender, System::EventArgs^  e) {
				 UU6->BackColor=currentColor->BackColor;
			 }
	private: System::Void UU7_Click(System::Object^  sender, System::EventArgs^  e) {
				 UU7->BackColor=currentColor->BackColor;
			 }
	private: System::Void UU8_Click(System::Object^  sender, System::EventArgs^  e) {
				 UU8->BackColor=currentColor->BackColor;
			 }
	private: System::Void UU9_Click(System::Object^  sender, System::EventArgs^  e) {
				 UU9->BackColor=currentColor->BackColor;
			 }
	private: System::Void DD7_Click(System::Object^  sender, System::EventArgs^  e) {
				 DD7->BackColor=currentColor->BackColor;
			 }
	private: System::Void DD8_Click(System::Object^  sender, System::EventArgs^  e) {
				 DD8->BackColor=currentColor->BackColor;
			 }
	private: System::Void DD9_Click(System::Object^  sender, System::EventArgs^  e) {
				 DD9->BackColor=currentColor->BackColor;
			 }
	private: System::Void DD4_Click(System::Object^  sender, System::EventArgs^  e) {
				 DD4->BackColor=currentColor->BackColor;
			 }
	private: System::Void DD6_Click(System::Object^  sender, System::EventArgs^  e) {
				 DD6->BackColor=currentColor->BackColor;
			 }
	private: System::Void DD1_Click(System::Object^  sender, System::EventArgs^  e) {
				 DD1->BackColor=currentColor->BackColor;
			 }
	private: System::Void DD2_Click(System::Object^  sender, System::EventArgs^  e) {
				 DD2->BackColor=currentColor->BackColor;
			 }
	private: System::Void DD3_Click(System::Object^  sender, System::EventArgs^  e) {
				 DD3->BackColor=currentColor->BackColor;
			 }
	private: System::Void toolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
				 displayBox->Text="";//清空公式显示板
				 F1.setR(0);//颜色重置
				 F1.setG(0);
				 F1.setB(255);
				 F2.setR(0);
				 F2.setG(0);
				 F2.setB(255);
				 F3.setR(0);
				 F3.setG(0);
				 F3.setB(255);
				 F4.setR(0);
				 F4.setG(0);
				 F4.setB(255);
				 F5.setR(0);
				 F5.setG(0);
				 F5.setB(255);
				 F6.setR(0);
				 F6.setG(0);
				 F6.setB(255);
				 F7.setR(0);
				 F7.setG(0);
				 F7.setB(255);
				 F8.setR(0);
				 F8.setG(0);
				 F8.setB(255);
				 F9.setR(0);
				 F9.setG(0);
				 F9.setB(255);

				 B1.setR(0);
				 B1.setG(128);
				 B1.setB(0);
				 B2.setR(0);
				 B2.setG(128);
				 B2.setB(0);
				 B3.setR(0);
				 B3.setG(128);
				 B3.setB(0);
				 B4.setR(0);
				 B4.setG(128);
				 B4.setB(0);
				 B5.setR(0);
				 B5.setG(128);
				 B5.setB(0);
				 B6.setR(0);
				 B6.setG(128);
				 B6.setB(0);
				 B7.setR(0);
				 B7.setG(128);
				 B7.setB(0);
				 B8.setR(0);
				 B8.setG(128);
				 B8.setB(0);
				 B9.setR(0);
				 B9.setG(128);
				 B9.setB(0);

				 L1.setR(255);
				 L1.setG(69);
				 L1.setB(0);
				 L2.setR(255);
				 L2.setG(69);
				 L2.setB(0);
				 L3.setR(255);
				 L3.setG(69);
				 L3.setB(0);
				 L4.setR(255);
				 L4.setG(69);
				 L4.setB(0);
				 L5.setR(255);
				 L5.setG(69);
				 L5.setB(0);
				 L6.setR(255);
				 L6.setG(69);
				 L6.setB(0);
				 L7.setR(255);
				 L7.setG(69);
				 L7.setB(0);
				 L8.setR(255);
				 L8.setG(69);
				 L8.setB(0);
				 L9.setR(255);
				 L9.setG(69);
				 L9.setB(0);

				 R1.setR(255);
				 R1.setG(0);
				 R1.setB(0);
				 R2.setR(255);
				 R2.setG(0);
				 R2.setB(0);
				 R3.setR(255);
				 R3.setG(0);
				 R3.setB(0);
				 R4.setR(255);
				 R4.setG(0);
				 R4.setB(0);
				 R5.setR(255);
				 R5.setG(0);
				 R5.setB(0);
				 R6.setR(255);
				 R6.setG(0);
				 R6.setB(0);
				 R7.setR(255);
				 R7.setG(0);
				 R7.setB(0);
				 R8.setR(255);
				 R8.setG(0);
				 R8.setB(0);
				 R9.setR(255);
				 R9.setG(0);
				 R9.setB(0);

				 U1.setR(255);
				 U1.setG(255);
				 U1.setB(0);
				 U2.setR(255);
				 U2.setG(255);
				 U2.setB(0);
				 U3.setR(255);
				 U3.setG(255);
				 U3.setB(0);
				 U4.setR(255);
				 U4.setG(255);
				 U4.setB(0);
				 U5.setR(255);
				 U5.setG(255);
				 U5.setB(0);
				 U6.setR(255);
				 U6.setG(255);
				 U6.setB(0);
				 U7.setR(255);
				 U7.setG(255);
				 U7.setB(0);
				 U8.setR(255);
				 U8.setG(255);
				 U8.setB(0);
				 U9.setR(255);
				 U9.setG(255);
				 U9.setB(0);

				 D1.setR(255);
				 D1.setG(255);
				 D1.setB(255);
				 D2.setR(255);
				 D2.setG(255);
				 D2.setB(255);
				 D3.setR(255);
				 D3.setG(255);
				 D3.setB(255);
				 D4.setR(255);
				 D4.setG(255);
				 D4.setB(255);
				 D5.setR(255);
				 D5.setG(255);
				 D5.setB(255);
				 D6.setR(255);
				 D6.setG(255);
				 D6.setB(255);
				 D7.setR(255);
				 D7.setG(255);
				 D7.setB(255);
				 D8.setR(255);
				 D8.setG(255);
				 D8.setB(255);
				 D9.setR(255);
				 D9.setG(255);
				 D9.setB(255);

				 F1R=0;//记录涂色版颜色分量的变量重置
				 F1G=0;
				 F1B=255;
				 F2R=0;
				 F2G=0;
				 F2B=255;
				 F3R=0;
				 F3G=0;
				 F3B=255;
				 F4R=0;
				 F4G=0;
				 F4B=255;
				 F5R=0;
				 F5G=0;
				 F5B=255;
				 F6R=0;
				 F6G=0;
				 F6B=255;
				 F7R=0;
				 F7G=0;
				 F7B=255;
				 F8R=0;
				 F8G=0;
				 F8B=255;
				 F9R=0;
				 F9G=0;
				 F9B=255;

				 B1R=0;
				 B1G=128;
				 B1B=0;
				 B2R=0;
				 B2G=128;
				 B2B=0;
				 B3R=0;
				 B3G=128;
				 B3B=0;
				 B4R=0;
				 B4G=128;
				 B4B=0;
				 B5R=0;
				 B5G=128;
				 B5B=0;
				 B6R=0;
				 B6G=128;
				 B6B=0;
				 B7R=0;
				 B7G=128;
				 B7B=0;
				 B8R=0;
				 B8G=128;
				 B8B=0;
				 B9R=0;
				 B9G=128;
				 B9B=0;

				 L1R=255;
				 L1G=69;
				 L1B=0;
				 L2R=255;
				 L2G=69;
				 L2B=0;
				 L3R=255;
				 L3G=69;
				 L3B=0;
				 L4R=255;
				 L4G=69;
				 L4B=0;
				 L5R=255;
				 L5G=69;
				 L5B=0;
				 L6R=255;
				 L6G=69;
				 L6B=0;
				 L7R=255;
				 L7G=69;
				 L7B=0;
				 L8R=255;
				 L8G=69;
				 L8B=0;
				 L9R=255;
				 L9G=69;
				 L9B=0;

				 R1R=255;
				 R1G=0;
				 R1B=0;
				 R2R=255;
				 R2G=0;
				 R2B=0;
				 R3R=255;
				 R3G=0;
				 R3B=0;
				 R4R=255;
				 R4G=0;
				 R4B=0;
				 R5R=255;
				 R5G=0;
				 R5B=0;
				 R6R=255;
				 R6G=0;
				 R6B=0;
				 R7R=255;
				 R7G=0;
				 R7B=0;
				 R8R=255;
				 R8G=0;
				 R8B=0;
				 R9R=255;
				 R9G=0;
				 R9B=0;

				 U1R=255;
				 U1G=255;
				 U1B=0;
				 U2R=255;
				 U2G=255;
				 U2B=0;
				 U3R=255;
				 U3G=255;
				 U3B=0;
				 U4R=255;
				 U4G=255;
				 U4B=0;
				 U5R=255;
				 U5G=255;
				 U5B=0;
				 U6R=255;
				 U6G=255;
				 U6B=0;
				 U7R=255;
				 U7G=255;
				 U7B=0;
				 U8R=255;
				 U8G=255;
				 U8B=0;
				 U9R=255;
				 U9G=255;
				 U9B=0;

				 D1R=255;
				 D1G=255;
				 D1B=255;
				 D2R=255;
				 D2G=255;
				 D2B=255;
				 D3R=255;
				 D3G=255;
				 D3B=255;
				 D4R=255;
				 D4G=255;
				 D4B=255;
				 D5R=255;
				 D5G=255;
				 D5B=255;
				 D6R=255;
				 D6G=255;
				 D6B=255;
				 D7R=255;
				 D7G=255;
				 D7B=255;
				 D8R=255;
				 D8G=255;
				 D8B=255;
				 D9R=255;
				 D9G=255;
				 D9B=255;
				 this->display();
			 }
	private: System::Void 退出ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
	private: System::Void ColorUse_Click(System::Object^  sender, System::EventArgs^  e) {
				 F1.setR(FF1->BackColor.R);
				 F1.setG(FF1->BackColor.G);
				 F1.setB(FF1->BackColor.B);
				 F2.setR(FF2->BackColor.R);
				 F2.setG(FF2->BackColor.G);
				 F2.setB(FF2->BackColor.B);
				 F3.setR(FF3->BackColor.R);
				 F3.setG(FF3->BackColor.G);
				 F3.setB(FF3->BackColor.B);
				 F4.setR(FF4->BackColor.R);
				 F4.setG(FF4->BackColor.G);
				 F4.setB(FF4->BackColor.B);
				 F5.setR(FF5->BackColor.R);
				 F5.setG(FF5->BackColor.G);
				 F5.setB(FF5->BackColor.B);
				 F6.setR(FF6->BackColor.R);
				 F6.setG(FF6->BackColor.G);
				 F6.setB(FF6->BackColor.B);
				 F7.setR(FF7->BackColor.R);
				 F7.setG(FF7->BackColor.G);
				 F7.setB(FF7->BackColor.B);
				 F8.setR(FF8->BackColor.R);
				 F8.setG(FF8->BackColor.G);
				 F8.setB(FF8->BackColor.B);
				 F9.setR(FF9->BackColor.R);
				 F9.setG(FF9->BackColor.G);
				 F9.setB(FF9->BackColor.B);

				 B1.setR(BB1->BackColor.R);
				 B1.setG(BB1->BackColor.G);
				 B1.setB(BB1->BackColor.B);
				 B2.setR(BB2->BackColor.R);
				 B2.setG(BB2->BackColor.G);
				 B2.setB(BB2->BackColor.B);
				 B3.setR(BB3->BackColor.R);
				 B3.setG(BB3->BackColor.G);
				 B3.setB(BB3->BackColor.B);
				 B4.setR(BB4->BackColor.R);
				 B4.setG(BB4->BackColor.G);
				 B4.setB(BB4->BackColor.B);
				 B5.setR(BB5->BackColor.R);
				 B5.setG(BB5->BackColor.G);
				 B5.setB(BB5->BackColor.B);
				 B6.setR(BB6->BackColor.R);
				 B6.setG(BB6->BackColor.G);
				 B6.setB(BB6->BackColor.B);
				 B7.setR(BB7->BackColor.R);
				 B7.setG(BB7->BackColor.G);
				 B7.setB(BB7->BackColor.B);
				 B8.setR(BB8->BackColor.R);
				 B8.setG(BB8->BackColor.G);
				 B8.setB(BB8->BackColor.B);
				 B9.setR(BB9->BackColor.R);
				 B9.setG(BB9->BackColor.G);
				 B9.setB(BB9->BackColor.B);

				 L1.setR(LL1->BackColor.R);
				 L1.setG(LL1->BackColor.G);
				 L1.setB(LL1->BackColor.B);
				 L2.setR(LL2->BackColor.R);
				 L2.setG(LL2->BackColor.G);
				 L2.setB(LL2->BackColor.B);
				 L3.setR(LL3->BackColor.R);
				 L3.setG(LL3->BackColor.G);
				 L3.setB(LL3->BackColor.B);
				 L4.setR(LL4->BackColor.R);
				 L4.setG(LL4->BackColor.G);
				 L4.setB(LL4->BackColor.B);
				 L5.setR(LL5->BackColor.R);
				 L5.setG(LL5->BackColor.G);
				 L5.setB(LL5->BackColor.B);
				 L6.setR(LL6->BackColor.R);
				 L6.setG(LL6->BackColor.G);
				 L6.setB(LL6->BackColor.B);
				 L7.setR(LL7->BackColor.R);
				 L7.setG(LL7->BackColor.G);
				 L7.setB(LL7->BackColor.B);
				 L8.setR(LL8->BackColor.R);
				 L8.setG(LL8->BackColor.G);
				 L8.setB(LL8->BackColor.B);
				 L9.setR(LL9->BackColor.R);
				 L9.setG(LL9->BackColor.G);
				 L9.setB(LL9->BackColor.B);

				 R1.setR(RR1->BackColor.R);
				 R1.setG(RR1->BackColor.G);
				 R1.setB(RR1->BackColor.B);
				 R2.setR(RR2->BackColor.R);
				 R2.setG(RR2->BackColor.G);
				 R2.setB(RR2->BackColor.B);
				 R3.setR(RR3->BackColor.R);
				 R3.setG(RR3->BackColor.G);
				 R3.setB(RR3->BackColor.B);
				 R4.setR(RR4->BackColor.R);
				 R4.setG(RR4->BackColor.G);
				 R4.setB(RR4->BackColor.B);
				 R5.setR(RR5->BackColor.R);
				 R5.setG(RR5->BackColor.G);
				 R5.setB(RR5->BackColor.B);
				 R6.setR(RR6->BackColor.R);
				 R6.setG(RR6->BackColor.G);
				 R6.setB(RR6->BackColor.B);
				 R7.setR(RR7->BackColor.R);
				 R7.setG(RR7->BackColor.G);
				 R7.setB(RR7->BackColor.B);
				 R8.setR(RR8->BackColor.R);
				 R8.setG(RR8->BackColor.G);
				 R8.setB(RR8->BackColor.B);
				 R9.setR(RR9->BackColor.R);
				 R9.setG(RR9->BackColor.G);
				 R9.setB(RR9->BackColor.B);

				 U1.setR(UU1->BackColor.R);
				 U1.setG(UU1->BackColor.G);
				 U1.setB(UU1->BackColor.B);
				 U2.setR(UU2->BackColor.R);
				 U2.setG(UU2->BackColor.G);
				 U2.setB(UU2->BackColor.B);
				 U3.setR(UU3->BackColor.R);
				 U3.setG(UU3->BackColor.G);
				 U3.setB(UU3->BackColor.B);
				 U4.setR(UU4->BackColor.R);
				 U4.setG(UU4->BackColor.G);
				 U4.setB(UU4->BackColor.B);
				 U5.setR(UU5->BackColor.R);
				 U5.setG(UU5->BackColor.G);
				 U5.setB(UU5->BackColor.B);
				 U6.setR(UU6->BackColor.R);
				 U6.setG(UU6->BackColor.G);
				 U6.setB(UU6->BackColor.B);
				 U7.setR(UU7->BackColor.R);
				 U7.setG(UU7->BackColor.G);
				 U7.setB(UU7->BackColor.B);
				 U8.setR(UU8->BackColor.R);
				 U8.setG(UU8->BackColor.G);
				 U8.setB(UU8->BackColor.B);
				 U9.setR(UU9->BackColor.R);
				 U9.setG(UU9->BackColor.G);
				 U9.setB(UU9->BackColor.B);

				 D1.setR(DD1->BackColor.R);
				 D1.setG(DD1->BackColor.G);
				 D1.setB(DD1->BackColor.B);
				 D2.setR(DD2->BackColor.R);
				 D2.setG(DD2->BackColor.G);
				 D2.setB(DD2->BackColor.B);
				 D3.setR(DD3->BackColor.R);
				 D3.setG(DD3->BackColor.G);
				 D3.setB(DD3->BackColor.B);
				 D4.setR(DD4->BackColor.R);
				 D4.setG(DD4->BackColor.G);
				 D4.setB(DD4->BackColor.B);
				 D5.setR(DD5->BackColor.R);
				 D5.setG(DD5->BackColor.G);
				 D5.setB(DD5->BackColor.B);
				 D6.setR(DD6->BackColor.R);
				 D6.setG(DD6->BackColor.G);
				 D6.setB(DD6->BackColor.B);
				 D7.setR(DD7->BackColor.R);
				 D7.setG(DD7->BackColor.G);
				 D7.setB(DD7->BackColor.B);
				 D8.setR(DD8->BackColor.R);
				 D8.setG(DD8->BackColor.G);
				 D8.setB(DD8->BackColor.B);
				 D9.setR(DD9->BackColor.R);
				 D9.setG(DD9->BackColor.G);
				 D9.setB(DD9->BackColor.B);

				 this->display();

				 F1R=FF1->BackColor.R;//记录涂色板颜色分量
				 F1G=FF1->BackColor.G;
				 F1B=FF1->BackColor.B;
				 F2R=FF2->BackColor.R;
				 F2G=FF2->BackColor.G;
				 F2B=FF2->BackColor.B;
				 F3R=FF3->BackColor.R;
				 F3G=FF3->BackColor.G;
				 F3B=FF3->BackColor.B;
				 F4R=FF4->BackColor.R;
				 F4G=FF4->BackColor.G;
				 F4B=FF4->BackColor.B;
				 F5R=FF5->BackColor.R;
				 F5G=FF5->BackColor.G;
				 F5B=FF5->BackColor.B;
				 F6R=FF6->BackColor.R;
				 F6G=FF6->BackColor.G;
				 F6B=FF6->BackColor.B;
				 F7R=FF7->BackColor.R;
				 F7G=FF7->BackColor.G;
				 F7B=FF7->BackColor.B;
				 F8R=FF8->BackColor.R;
				 F8G=FF8->BackColor.G;
				 F8B=FF8->BackColor.B;
				 F9R=FF9->BackColor.R;
				 F9G=FF9->BackColor.G;
				 F9B=FF9->BackColor.B;

				 B1R=BB1->BackColor.R;
				 B1G=BB1->BackColor.G;
				 B1B=BB1->BackColor.B;
				 B2R=BB2->BackColor.R;
				 B2G=BB2->BackColor.G;
				 B2B=BB2->BackColor.B;
				 B3R=BB3->BackColor.R;
				 B3G=BB3->BackColor.G;
				 B3B=BB3->BackColor.B;
				 B4R=BB4->BackColor.R;
				 B4G=BB4->BackColor.G;
				 B4B=BB4->BackColor.B;
				 B5R=BB5->BackColor.R;
				 B5G=BB5->BackColor.G;
				 B5B=BB5->BackColor.B;
				 B6R=BB6->BackColor.R;
				 B6G=BB6->BackColor.G;
				 B6B=BB6->BackColor.B;
				 B7R=BB7->BackColor.R;
				 B7G=BB7->BackColor.G;
				 B7B=BB7->BackColor.B;
				 B8R=BB8->BackColor.R;
				 B8G=BB8->BackColor.G;
				 B8B=BB8->BackColor.B;
				 B9R=BB9->BackColor.R;
				 B9G=BB9->BackColor.G;
				 B9B=BB9->BackColor.B;

				 L1R=LL1->BackColor.R;
				 L1G=LL1->BackColor.G;
				 L1B=LL1->BackColor.B;
				 L2R=LL2->BackColor.R;
				 L2G=LL2->BackColor.G;
				 L2B=LL2->BackColor.B;
				 L3R=LL3->BackColor.R;
				 L3G=LL3->BackColor.G;
				 L3B=LL3->BackColor.B;
				 L4R=LL4->BackColor.R;
				 L4G=LL4->BackColor.G;
				 L4B=LL4->BackColor.B;
				 L5R=LL5->BackColor.R;
				 L5G=LL5->BackColor.G;
				 L5B=LL5->BackColor.B;
				 L6R=LL6->BackColor.R;
				 L6G=LL6->BackColor.G;
				 L6B=LL6->BackColor.B;
				 L7R=LL7->BackColor.R;
				 L7G=LL7->BackColor.G;
				 L7B=LL7->BackColor.B;
				 L8R=LL8->BackColor.R;
				 L8G=LL8->BackColor.G;
				 L8B=LL8->BackColor.B;
				 L9R=LL9->BackColor.R;
				 L9G=LL9->BackColor.G;
				 L9B=LL9->BackColor.B;

				 R1R=RR1->BackColor.R;
				 R1G=RR1->BackColor.G;
				 R1B=RR1->BackColor.B;
				 R2R=RR2->BackColor.R;
				 R2G=RR2->BackColor.G;
				 R2B=RR2->BackColor.B;
				 R3R=RR3->BackColor.R;
				 R3G=RR3->BackColor.G;
				 R3B=RR3->BackColor.B;
				 R4R=RR4->BackColor.R;
				 R4G=RR4->BackColor.G;
				 R4B=RR4->BackColor.B;
				 R5R=RR5->BackColor.R;
				 R5G=RR5->BackColor.G;
				 R5B=RR5->BackColor.B;
				 R6R=RR6->BackColor.R;
				 R6G=RR6->BackColor.G;
				 R6B=RR6->BackColor.B;
				 R7R=RR7->BackColor.R;
				 R7G=RR7->BackColor.G;
				 R7B=RR7->BackColor.B;
				 R8R=RR8->BackColor.R;
				 R8G=RR8->BackColor.G;
				 R8B=RR8->BackColor.B;
				 R9R=RR9->BackColor.R;
				 R9G=RR9->BackColor.G;
				 R9B=RR9->BackColor.B;

				 U1R=UU1->BackColor.R;
				 U1G=UU1->BackColor.G;
				 U1B=UU1->BackColor.B;
				 U2R=UU2->BackColor.R;
				 U2G=UU2->BackColor.G;
				 U2B=UU2->BackColor.B;
				 U3R=UU3->BackColor.R;
				 U3G=UU3->BackColor.G;
				 U3B=UU3->BackColor.B;
				 U4R=UU4->BackColor.R;
				 U4G=UU4->BackColor.G;
				 U4B=UU4->BackColor.B;
				 U5R=UU5->BackColor.R;
				 U5G=UU5->BackColor.G;
				 U5B=UU5->BackColor.B;
				 U6R=UU6->BackColor.R;
				 U6G=UU6->BackColor.G;
				 U6B=UU6->BackColor.B;
				 U7R=UU7->BackColor.R;
				 U7G=UU7->BackColor.G;
				 U7B=UU7->BackColor.B;
				 U8R=UU8->BackColor.R;
				 U8G=UU8->BackColor.G;
				 U8B=UU8->BackColor.B;
				 U9R=UU9->BackColor.R;
				 U9G=UU9->BackColor.G;
				 U9B=UU9->BackColor.B;

				 D1R=DD1->BackColor.R;
				 D1G=DD1->BackColor.G;
				 D1B=DD1->BackColor.B;
				 D2R=DD2->BackColor.R;
				 D2G=DD2->BackColor.G;
				 D2B=DD2->BackColor.B;
				 D3R=DD3->BackColor.R;
				 D3G=DD3->BackColor.G;
				 D3B=DD3->BackColor.B;
				 D4R=DD4->BackColor.R;
				 D4G=DD4->BackColor.G;
				 D4B=DD4->BackColor.B;
				 D5R=DD5->BackColor.R;
				 D5G=DD5->BackColor.G;
				 D5B=DD5->BackColor.B;
				 D6R=DD6->BackColor.R;
				 D6G=DD6->BackColor.G;
				 D6B=DD6->BackColor.B;
				 D7R=DD7->BackColor.R;
				 D7G=DD7->BackColor.G;
				 D7B=DD7->BackColor.B;
				 D8R=DD8->BackColor.R;
				 D8G=DD8->BackColor.G;
				 D8B=DD8->BackColor.B;
				 D9R=DD9->BackColor.R;
				 D9G=DD9->BackColor.G;
				 D9B=DD9->BackColor.B;
			 }
	private: System::Void Solve1_Click(System::Object^  sender, System::EventArgs^  e) {
				 displayBox->Text="    ";
				 F2L=false;
				 OLL=false;
				 PLL=false;
				 OK=false;
				 if(!isCross())
				 {
					 for(int i=4;i>0;)
					 {
						 if(R8.getR()==R5.getR()&&R8.getG()==R5.getG()&&R8.getB()==R5.getB()&&
							 D6.getR()==D5.getR()&&D6.getG()==D5.getG()&&D6.getB()==D5.getB()
							 )
						 {
							 if(i>1)
							 {
								 y();
								 displayBox->AppendText("y   ");
							 }
							 --i;
							 continue;
						 }
						 if(R8.getR()==D5.getR()&&R8.getG()==D5.getG()&&R8.getB()==D5.getB()&&
							 D6.getR()==R5.getR()&&D6.getG()==R5.getG()&&D6.getB()==R5.getB()
							 )
						 {
							 R();
							 _u();
							 R();
							 u();
							 displayBox->AppendText("R   u'  R   u   ");
							 continue;
						 }
						 if(R6.getR()==R5.getR()&&R6.getG()==R5.getG()&&R6.getB()==R5.getB()&&
							 F6.getR()==D5.getR()&&F6.getG()==D5.getG()&&F6.getB()==D5.getB()
							 )
						 {
							 _R();
							 displayBox->AppendText("R'  ");
							 continue;
						 }
						 if(R6.getR()==D5.getR()&&R6.getG()==D5.getG()&&R6.getB()==D5.getB()&&
							 F6.getR()==R5.getR()&&F6.getG()==R5.getG()&&F6.getB()==R5.getB()
							 )
						 {
							 _u();
							 R();
							 u();
							 displayBox->AppendText("u'  R   u   ");
							 continue;
						 }
						 if(R2.getR()==R5.getR()&&R2.getG()==R5.getG()&&R2.getB()==R5.getB()&&
							 U6.getR()==D5.getR()&&U6.getG()==D5.getG()&&U6.getB()==D5.getB()
							 )
						 {
							 R180();
							 displayBox->AppendText("R2  ");
							 continue;
						 }
						 if(R2.getR()==D5.getR()&&R2.getG()==D5.getG()&&R2.getB()==D5.getB()&&
							 U6.getR()==R5.getR()&&U6.getG()==R5.getG()&&U6.getB()==R5.getB()
							 )
						 {
							 _R();
							 _u();
							 R();
							 u();
							 displayBox->AppendText("R'  u'  R   u   ");
							 continue;
						 }
						 if(R4.getR()==R5.getR()&&R4.getG()==R5.getG()&&R4.getB()==R5.getB()&&
							 B6.getR()==D5.getR()&&B6.getG()==D5.getG()&&B6.getB()==D5.getB()
							 )
						 {
							 R();
							 displayBox->AppendText("R   ");
							 continue;
						 }
						 if(R4.getR()==D5.getR()&&R4.getG()==D5.getG()&&R4.getB()==D5.getB()&&
							 B6.getR()==R5.getR()&&B6.getG()==R5.getG()&&B6.getB()==R5.getB()
							 )
						 {
							 u();
							 _R();
							 _u();
							 displayBox->AppendText("u   R'  u'  ");
							 continue;
						 }
						 if(F2.getR()==R5.getR()&&F2.getG()==R5.getG()&&F2.getB()==R5.getB()&&
							 U8.getR()==D5.getR()&&U8.getG()==D5.getG()&&U8.getB()==D5.getB()
							 )
						 {
							 _U();
							 R180();
							 displayBox->AppendText("U'  R2  ");
							 continue;
						 }
						 if(F2.getR()==D5.getR()&&F2.getG()==D5.getG()&&F2.getB()==D5.getB()&&
							 U8.getR()==R5.getR()&&U8.getG()==R5.getG()&&U8.getB()==R5.getB()
							 )
						 {
							 _U();
							 _R();
							 _u();
							 R();
							 u();
							 displayBox->AppendText("U'  R'  u'  R   u   ");
							 continue;
						 }
						 if(F8.getR()==D5.getR()&&F8.getG()==D5.getG()&&F8.getB()==D5.getB()&&
							 D8.getR()==R5.getR()&&D8.getG()==R5.getG()&&D8.getB()==R5.getB()
							 )
						 {
							 _F();
							 _R();
							 displayBox->AppendText("F'  R'  ");
							 continue;
						 }
						 if(D8.getR()==D5.getR()&&D8.getG()==D5.getG()&&D8.getB()==D5.getB()&&
							 F8.getR()==R5.getR()&&F8.getG()==R5.getG()&&F8.getB()==R5.getB()
							 )
						 {
							 D();
							 displayBox->AppendText("D   ");
							 continue;
						 }
						 if(U2.getR()==D5.getR()&&U2.getG()==D5.getG()&&U2.getB()==D5.getB()&&
							 B2.getR()==R5.getR()&&B2.getG()==R5.getG()&&B2.getB()==R5.getB()
							 )
						 {
							 U();
							 R180();
							 displayBox->AppendText("U   R2  ");
							 continue;
						 }
						 if(B2.getR()==D5.getR()&&B2.getG()==D5.getG()&&B2.getB()==D5.getB()&&
							 U2.getR()==R5.getR()&&U2.getG()==R5.getG()&&U2.getB()==R5.getB()
							 )
						 {
							 U();
							 _R();
							 _u();
							 R();
							 u();
							 displayBox->AppendText("U   R'  u'  R   u   ");
							 continue;
						 }
						 if(B8.getR()==D5.getR()&&B8.getG()==D5.getG()&&B8.getB()==D5.getB()&&
							 D2.getR()==R5.getR()&&D2.getG()==R5.getG()&&D2.getB()==R5.getB()
							 )
						 {
							 B();
							 R();
							 displayBox->AppendText("B   R   ");
							 continue;
						 }
						 if(D2.getR()==D5.getR()&&D2.getG()==D5.getG()&&D2.getB()==D5.getB()&&
							 B8.getR()==R5.getR()&&B8.getG()==R5.getG()&&B8.getB()==R5.getB()
							 )
						 {
							 B180();
							 U();
							 R180();
							 displayBox->AppendText("B2  U   R2  ");
							 continue;
						 }
						 if(F4.getR()==D5.getR()&&F4.getG()==D5.getG()&&F4.getB()==D5.getB()&&
							 L6.getR()==R5.getR()&&L6.getG()==R5.getG()&&L6.getB()==R5.getB()
							 )
						 {
							 u180();
							 R();
							 u180();
							 displayBox->AppendText("u2  R   u2  ");
							 continue;
						 }
						 if(L6.getR()==D5.getR()&&L6.getG()==D5.getG()&&L6.getB()==D5.getB()&&
							 F4.getR()==R5.getR()&&F4.getG()==R5.getG()&&F4.getB()==R5.getB()
							 )
						 {
							 _u();
							 _R();
							 u();
							 displayBox->AppendText("u'  R'  u   ");
							 continue;
						 }
						 if(U4.getR()==D5.getR()&&U4.getG()==D5.getG()&&U4.getB()==D5.getB()&&
							 L2.getR()==R5.getR()&&L2.getG()==R5.getG()&&L2.getB()==R5.getB()
							 )
						 {
							 U180();
							 R180();
							 displayBox->AppendText("U2  R2  ");
							 continue;
						 }
						 if(L2.getR()==D5.getR()&&L2.getG()==D5.getG()&&L2.getB()==D5.getB()&&
							 U4.getR()==R5.getR()&&U4.getG()==R5.getG()&&U4.getB()==R5.getB()
							 )
						 {
							 U180();
							 _R();
							 _u();
							 R();
							 u();
							 displayBox->AppendText("U2  R'  u'  R   u   ");
							 continue;
						 }
						 if(B4.getR()==D5.getR()&&B4.getG()==D5.getG()&&B4.getB()==D5.getB()&&
							 L4.getR()==R5.getR()&&L4.getG()==R5.getG()&&L4.getB()==R5.getB()
							 )
						 {
							 u180();
							 _R();
							 u180();
							 displayBox->AppendText("u2  R'  u2  ");
							 continue;
						 }
						 if(L4.getR()==D5.getR()&&L4.getG()==D5.getG()&&L4.getB()==D5.getB()&&
							 B4.getR()==R5.getR()&&B4.getG()==R5.getG()&&B4.getB()==R5.getB()
							 )
						 {
							 u();
							 R();
							 _u();
							 displayBox->AppendText("u   R   u'  ");
							 continue;
						 }
						 if(L8.getR()==D5.getR()&&L8.getG()==D5.getG()&&L8.getB()==D5.getB()&&
							 D4.getR()==R5.getR()&&D4.getG()==R5.getG()&&D4.getB()==R5.getB()
							 )
						 {
							 _L();
							 _u();
							 _R();
							 u();
							 displayBox->AppendText("L'  u'  R'  u   ");
							 continue;
						 }
						 if(D4.getR()==D5.getR()&&D4.getG()==D5.getG()&&D4.getB()==D5.getB()&&
							 L8.getR()==R5.getR()&&L8.getG()==R5.getG()&&L8.getB()==R5.getB()
							 )
						 {
							 L180();
							 U180();
							 R180();
							 displayBox->AppendText("L2  U2  R2  ");
							 continue;
						 }
						 displayBox->Text="    魔方涂色错误！请重新涂色。";
						 F2L=true;
						 OLL=true;
						 PLL=true;
						 OK=true;
						 break;
					 }
				 }

				 if((!isF2L())&&(!F2L))
				 {
					 for(int i=4;i>0;)
					 {
						 if(F9.getR()==F5.getR()&&F9.getG()==F5.getG()&&F9.getB()==F5.getB()&&
							 R9.getR()==R5.getR()&&R9.getG()==R5.getG()&&R9.getB()==R5.getB()&&
							 D9.getR()==D5.getR()&&D9.getG()==D5.getG()&&D9.getB()==D5.getB()&&
							 F6.getR()==F5.getR()&&F6.getG()==F5.getG()&&F6.getB()==F5.getB()&&
							 R6.getR()==R5.getR()&&R6.getG()==R5.getG()&&R6.getB()==R5.getB()
							 )
						 {
							 if(i>1)
							 {
								 y();
								 displayBox->AppendText("y   ");
							 }
							 --i;
							 continue;
						 }
						 if(F3.getR()==F5.getR()&&F3.getG()==F5.getG()&&F3.getB()==F5.getB()&&//1
							 U9.getR()==R5.getR()&&U9.getG()==R5.getG()&&U9.getB()==R5.getB()&&
							 R3.getR()==D5.getR()&&R3.getG()==D5.getG()&&R3.getB()==D5.getB()&&
							 F2.getR()==F5.getR()&&F2.getG()==F5.getG()&&F2.getB()==F5.getB()&&
							 U8.getR()==R5.getR()&&U8.getG()==R5.getG()&&U8.getB()==R5.getB()
							 )
						 {
							 _y();
							 _U();
							 _R();
							 U();
							 R();
							 displayBox->AppendText("y'  U'  R'  U   R   ");
							 if(i>1)
							 {
								 y();
								 displayBox->AppendText("y   ");
							 }
							 continue;
						 }
						 if(U9.getR()==F5.getR()&&U9.getG()==F5.getG()&&U9.getB()==F5.getB()&&//2
							 R3.getR()==R5.getR()&&R3.getG()==R5.getG()&&R3.getB()==R5.getB()&&
							 F3.getR()==D5.getR()&&F3.getG()==D5.getG()&&F3.getB()==D5.getB()&&
							 U6.getR()==F5.getR()&&U6.getG()==F5.getG()&&U6.getB()==F5.getB()&&
							 R2.getR()==R5.getR()&&R2.getG()==R5.getG()&&R2.getB()==R5.getB()
							 )
						 {
							 U();
							 R();
							 _U();
							 _R();
							 displayBox->AppendText("U   R   U'  R'  ");
							 continue;
						 }
						 if(F3.getR()==F5.getR()&&F3.getG()==F5.getG()&&F3.getB()==F5.getB()&&//3
							 U9.getR()==R5.getR()&&U9.getG()==R5.getG()&&U9.getB()==R5.getB()&&
							 R3.getR()==D5.getR()&&R3.getG()==D5.getG()&&R3.getB()==D5.getB()&&
							 U2.getR()==F5.getR()&&U2.getG()==F5.getG()&&U2.getB()==F5.getB()&&
							 B2.getR()==R5.getR()&&B2.getG()==R5.getG()&&B2.getB()==R5.getB()
							 )
						 {
							 R();
							 U();
							 _R();
							 displayBox->AppendText("R   U   R'   ");
							 continue;
						 }
						 if(U9.getR()==F5.getR()&&U9.getG()==F5.getG()&&U9.getB()==F5.getB()&&//4
							 R3.getR()==R5.getR()&&R3.getG()==R5.getG()&&R3.getB()==R5.getB()&&
							 F3.getR()==D5.getR()&&F3.getG()==D5.getG()&&F3.getB()==D5.getB()&&
							 L2.getR()==F5.getR()&&L2.getG()==F5.getG()&&L2.getB()==F5.getB()&&
							 U4.getR()==R5.getR()&&U4.getG()==R5.getG()&&U4.getB()==R5.getB()
							 )
						 {
							 _y();
							 _R();
							 _U();
							 R();
							 displayBox->AppendText("y'  R'  U'  R   ");
							 if(i>1)
							 {
								 y();
								 displayBox->AppendText("y   ");
							 }
							 continue;
						 }
						 if(F3.getR()==F5.getR()&&F3.getG()==F5.getG()&&F3.getB()==F5.getB()&&//5
							 U9.getR()==R5.getR()&&U9.getG()==R5.getG()&&U9.getB()==R5.getB()&&
							 R3.getR()==D5.getR()&&R3.getG()==D5.getG()&&R3.getB()==D5.getB()&&
							 U4.getR()==F5.getR()&&U4.getG()==F5.getG()&&U4.getB()==F5.getB()&&
							 L2.getR()==R5.getR()&&L2.getG()==R5.getG()&&L2.getB()==R5.getB()
							 )
						 {
							 if(!isF2LRB())
							 {
								 _R();
								 U();
								 R180();
								 U();
								 _R();
								 displayBox->AppendText("R'  U   R2  U   R'  ");
							 }
							 else if(!isF2LLF())
							 {
								 F();
								 U();
								 _F();
								 R();
								 U();
								 _R();
								 displayBox->AppendText("F   U   F'  R   U   R'  ");
							 }
							 else
							 {
								 _U();
								 R();
								 U();
								 _R();
								 U();
								 R();
								 U();
								 _R();
								 displayBox->AppendText("U'  R   U   R'  U   R   U   R'  ");
							 }
							 continue;
						 }
						 if(U9.getR()==F5.getR()&&U9.getG()==F5.getG()&&U9.getB()==F5.getB()&&//6
							 R3.getR()==R5.getR()&&R3.getG()==R5.getG()&&R3.getB()==R5.getB()&&
							 F3.getR()==D5.getR()&&F3.getG()==D5.getG()&&F3.getB()==D5.getB()&&
							 B2.getR()==F5.getR()&&B2.getG()==F5.getG()&&B2.getB()==F5.getB()&&
							 U2.getR()==R5.getR()&&U2.getG()==R5.getG()&&U2.getB()==R5.getB()
							 )
						 {
							 if(!isF2LLF())
							 {
								 F();
								 _U();
								 F180();
								 _U();
								 F();
								 displayBox->AppendText("F   U'  F2  U'  F   ");
							 }
							 else if(!isF2LRB())
							 {
								 _R();
								 _U();
								 R();
								 _F();
								 _U();
								 F();
								 displayBox->AppendText("R'  U'  R   F'  U'  F   "); 
							 }
							 else
							 {
								 _U();
								 R();
								 _U();
								 _R();
								 d();
								 _R();
								 _U();
								 R();
								 displayBox->AppendText("U'  R   U'  R'  d   R'  U'  R   ");
								 if(i>1)
								 {
									 y();
									 displayBox->AppendText("y   ");
								 }
							 }
							 continue;
						 }
						 if(F3.getR()==F5.getR()&&F3.getG()==F5.getG()&&F3.getB()==F5.getB()&&//7
							 U9.getR()==R5.getR()&&U9.getG()==R5.getG()&&U9.getB()==R5.getB()&&
							 R3.getR()==D5.getR()&&R3.getG()==D5.getG()&&R3.getB()==D5.getB()&&
							 L2.getR()==F5.getR()&&L2.getG()==F5.getG()&&L2.getB()==F5.getB()&&
							 U4.getR()==R5.getR()&&U4.getG()==R5.getG()&&U4.getB()==R5.getB()
							 )
						 {
							 d();
							 _R();
							 _U();
							 R();
							 U180();
							 _R();
							 U();
							 R();
							 displayBox->AppendText("d   R'  U'  R   U2  R'  U   R   ");
							 if(i>1)
							 {
								 y();
								 displayBox->AppendText("y   ");
							 }
							 continue;
						 }
						 if(U9.getR()==F5.getR()&&U9.getG()==F5.getG()&&U9.getB()==F5.getB()&&//8
							 R3.getR()==R5.getR()&&R3.getG()==R5.getG()&&R3.getB()==R5.getB()&&
							 F3.getR()==D5.getR()&&F3.getG()==D5.getG()&&F3.getB()==D5.getB()&&
							 U2.getR()==F5.getR()&&U2.getG()==F5.getG()&&U2.getB()==F5.getB()&&
							 B2.getR()==R5.getR()&&B2.getG()==R5.getG()&&B2.getB()==R5.getB()
							 )
						 {
							 if(!isF2LLF())
							 {
								 F();
								 U();
								 _F();
								 U();
								 R();
								 _U();
								 _R();
								 displayBox->AppendText("F   U   F'  U   R   U'  R'  ");
							 }
							 _U();
							 R();
							 U();
							 _R();
							 U180();
							 R();
							 _U();
							 _R();
							 displayBox->AppendText("U'  R   U   R'  U2  R   U'  R'  ");
							 continue;
						 }
						 if(F3.getR()==F5.getR()&&F3.getG()==F5.getG()&&F3.getB()==F5.getB()&&//9
							 U9.getR()==R5.getR()&&U9.getG()==R5.getG()&&U9.getB()==R5.getB()&&
							 R3.getR()==D5.getR()&&R3.getG()==D5.getG()&&R3.getB()==D5.getB()&&
							 B2.getR()==F5.getR()&&B2.getG()==F5.getG()&&B2.getB()==F5.getB()&&
							 U2.getR()==R5.getR()&&U2.getG()==R5.getG()&&U2.getB()==R5.getB()
							 )
						 {
							 d();
							 _R();
							 U180();
							 R();
							 U180();
							 _R();
							 U();
							 R();
							 displayBox->AppendText("d   R'  U2  R   U2  R'  U   R   ");
							 if(i>1)
							 {
								 y();
								 displayBox->AppendText("y   ");
							 }
							 continue;
						 }
						 if(U9.getR()==F5.getR()&&U9.getG()==F5.getG()&&U9.getB()==F5.getB()&&//10
							 R3.getR()==R5.getR()&&R3.getG()==R5.getG()&&R3.getB()==R5.getB()&&
							 F3.getR()==D5.getR()&&F3.getG()==D5.getG()&&F3.getB()==D5.getB()&&
							 U4.getR()==F5.getR()&&U4.getG()==F5.getG()&&U4.getB()==F5.getB()&&
							 L2.getR()==R5.getR()&&L2.getG()==R5.getG()&&L2.getB()==R5.getB()
							 )
						 {
							 if(!isF2LLF())
							 {
								 F();
								 U180();
								 _F();
								 U();
								 R();
								 _U();
								 _R();
								 displayBox->AppendText("F   U2  F'  U   R   U'  R'  ");
							 }
							 else
							 {
								 _U();
								 R();
								 U180();
								 _R();
								 U180();
								 R();
								 _U();
								 _R();
								 displayBox->AppendText("U'  R   U2  R'  U2  R   U'  R'  ");
							 }
							 continue;
						 }
						 if(R3.getR()==F5.getR()&&R3.getG()==F5.getG()&&R3.getB()==F5.getB()&&//11
							 F3.getR()==R5.getR()&&F3.getG()==R5.getG()&&F3.getB()==R5.getB()&&
							 U9.getR()==D5.getR()&&U9.getG()==D5.getG()&&U9.getB()==D5.getB()&&
							 L2.getR()==F5.getR()&&L2.getG()==F5.getG()&&L2.getB()==F5.getB()&&
							 U4.getR()==R5.getR()&&U4.getG()==R5.getG()&&U4.getB()==R5.getB()
							 )
						 {
							 _y();
							 _U();
							 _R();
							 U180();
							 R();
							 _U();
							 _R();
							 U();
							 R();
							 displayBox->AppendText("y'  U'  R'  U2  R   U'  R'  U   R   ");
							 if(i>1)
							 {
								 y();
								 displayBox->AppendText("y   ");
							 }
							 continue;
						 }
						 if(R3.getR()==F5.getR()&&R3.getG()==F5.getG()&&R3.getB()==F5.getB()&&//12
							 F3.getR()==R5.getR()&&F3.getG()==R5.getG()&&F3.getB()==R5.getB()&&
							 U9.getR()==D5.getR()&&U9.getG()==D5.getG()&&U9.getB()==D5.getB()&&
							 U2.getR()==F5.getR()&&U2.getG()==F5.getG()&&U2.getB()==F5.getB()&&
							 B2.getR()==R5.getR()&&B2.getG()==R5.getG()&&B2.getB()==R5.getB()
							 )
						 {
							 U();
							 R();
							 U180();
							 _R();
							 U();
							 R();
							 _U();
							 _R();
							 displayBox->AppendText("U   R   U2  R'  U   R   U'  R'  ");
							 continue;
						 }
						 if(R3.getR()==F5.getR()&&R3.getG()==F5.getG()&&R3.getB()==F5.getB()&&//13
							 F3.getR()==R5.getR()&&F3.getG()==R5.getG()&&F3.getB()==R5.getB()&&
							 U9.getR()==D5.getR()&&U9.getG()==D5.getG()&&U9.getB()==D5.getB()&&
							 U4.getR()==F5.getR()&&U4.getG()==F5.getG()&&U4.getB()==F5.getB()&&
							 L2.getR()==R5.getR()&&L2.getG()==R5.getG()&&L2.getB()==R5.getB()
							 )
						 {
							 U180();
							 R();
							 U();
							 _R();
							 U();
							 R();
							 _U();
							 _R();
							 displayBox->AppendText("U2  R   U   R'  U   R   U'  R'  ");
							 continue;
						 }
						 if(R3.getR()==F5.getR()&&R3.getG()==F5.getG()&&R3.getB()==F5.getB()&&//14
							 F3.getR()==R5.getR()&&F3.getG()==R5.getG()&&F3.getB()==R5.getB()&&
							 U9.getR()==D5.getR()&&U9.getG()==D5.getG()&&U9.getB()==D5.getB()&&
							 B2.getR()==F5.getR()&&B2.getG()==F5.getG()&&B2.getB()==F5.getB()&&
							 U2.getR()==R5.getR()&&U2.getG()==R5.getG()&&U2.getB()==R5.getB()
							 )
						 {
							 _y();
							 _R();
							 U();
							 R();
							 U180();
							 _R();
							 _U();
							 R();
							 displayBox->AppendText("y'  R'  U   R   U2  R'  U'  R   ");
							 if(i>1)
							 {
								 y();
								 displayBox->AppendText("y   ");
							 }
							 continue;
						 }
						 if(F3.getR()==F5.getR()&&F3.getG()==F5.getG()&&F3.getB()==F5.getB()&&//15
							 U9.getR()==R5.getR()&&U9.getG()==R5.getG()&&U9.getB()==R5.getB()&&
							 R3.getR()==D5.getR()&&R3.getG()==D5.getG()&&R3.getB()==D5.getB()&&
							 F6.getR()==F5.getR()&&F6.getG()==F5.getG()&&F6.getB()==F5.getB()&&
							 R6.getR()==R5.getR()&&R6.getG()==R5.getG()&&R6.getB()==R5.getB()
							 )
						 {
							 _U();
							 R();
							 U180();
							 _R();
							 U();
							 R();
							 U();
							 _R();
							 displayBox->AppendText("U'  R   U2  R'  U   R   U   R'  ");
							 continue;
						 }
						 if(U9.getR()==F5.getR()&&U9.getG()==F5.getG()&&U9.getB()==F5.getB()&&//16
							 R3.getR()==R5.getR()&&R3.getG()==R5.getG()&&R3.getB()==R5.getB()&&
							 F3.getR()==D5.getR()&&F3.getG()==D5.getG()&&F3.getB()==D5.getB()&&
							 F6.getR()==F5.getR()&&F6.getG()==F5.getG()&&F6.getB()==F5.getB()&&
							 R6.getR()==R5.getR()&&R6.getG()==R5.getG()&&R6.getB()==R5.getB()
							 )
						 {
							 _U();
							 R();
							 _U();
							 _R();
							 U180();
							 R();
							 _U();
							 _R();
							 displayBox->AppendText("U'  R   U'  R'  U2  R   U'  R'  ");
							 continue;
						 }
						 if(F3.getR()==F5.getR()&&F3.getG()==F5.getG()&&F3.getB()==F5.getB()&&//17
							 U9.getR()==R5.getR()&&U9.getG()==R5.getG()&&U9.getB()==R5.getB()&&
							 R3.getR()==D5.getR()&&R3.getG()==D5.getG()&&R3.getB()==D5.getB()&&
							 R6.getR()==F5.getR()&&R6.getG()==F5.getG()&&R6.getB()==F5.getB()&&
							 F6.getR()==R5.getR()&&F6.getG()==R5.getG()&&F6.getB()==R5.getB()
							 )
						 {
							 d();
							 _R();
							 _U();
							 R();
							 _d();
							 R();
							 U();
							 _R();
							 displayBox->AppendText("d   R'  U'  R   d'  R   U   R'  ");
							 continue;
						 }
						 if(U9.getR()==F5.getR()&&U9.getG()==F5.getG()&&U9.getB()==F5.getB()&&//18
							 R3.getR()==R5.getR()&&R3.getG()==R5.getG()&&R3.getB()==R5.getB()&&
							 F3.getR()==D5.getR()&&F3.getG()==D5.getG()&&F3.getB()==D5.getB()&&
							 R6.getR()==F5.getR()&&R6.getG()==F5.getG()&&R6.getB()==F5.getB()&&
							 F6.getR()==R5.getR()&&F6.getG()==R5.getG()&&F6.getB()==R5.getB()
							 )
						 {
							 _U();
							 R();
							 U();
							 _R();
							 d();
							 _R();
							 _U();
							 R();
							 displayBox->AppendText("U'  R   U   R'  d   R'  U'  R   ");
							 if(i>1)
							 {
								 y();
								 displayBox->AppendText("y   ");
							 }
							 continue;
						 }
						 if(R3.getR()==F5.getR()&&R3.getG()==F5.getG()&&R3.getB()==F5.getB()&&//19
							 F3.getR()==R5.getR()&&F3.getG()==R5.getG()&&F3.getB()==R5.getB()&&
							 U9.getR()==D5.getR()&&U9.getG()==D5.getG()&&U9.getB()==D5.getB()&&
							 F6.getR()==F5.getR()&&F6.getG()==F5.getG()&&F6.getB()==F5.getB()&&
							 R6.getR()==R5.getR()&&R6.getG()==R5.getG()&&R6.getB()==R5.getB()
							 )
						 {
							 R();
							 U();
							 _R();
							 _U();
							 R();
							 U();
							 _R();
							 _U();
							 R();
							 U();
							 _R();
							 displayBox->AppendText("R   U   R'  U'  R   U   R'  U'  R   U   R'  ");
							 continue;
						 }
						 if(R3.getR()==F5.getR()&&R3.getG()==F5.getG()&&R3.getB()==F5.getB()&&//20
							 F3.getR()==R5.getR()&&F3.getG()==R5.getG()&&F3.getB()==R5.getB()&&
							 U9.getR()==D5.getR()&&U9.getG()==D5.getG()&&U9.getB()==D5.getB()&&
							 R6.getR()==F5.getR()&&R6.getG()==F5.getG()&&R6.getB()==F5.getB()&&
							 F6.getR()==R5.getR()&&F6.getG()==R5.getG()&&F6.getB()==R5.getB()
							 )
						 {
							 R();
							 _U();
							 _R();
							 d();
							 _R();
							 U();
							 R();
							 displayBox->AppendText("R   U'  R'  d   R'  U   R   ");
							 if(i>1)
							 {
								 y();
								 displayBox->AppendText("y   ");
							 }
							 continue;
						 }
						 if(U9.getR()==F5.getR()&&U9.getG()==F5.getG()&&U9.getB()==F5.getB()&&//21
							 R3.getR()==R5.getR()&&R3.getG()==R5.getG()&&R3.getB()==R5.getB()&&
							 F3.getR()==D5.getR()&&F3.getG()==D5.getG()&&F3.getB()==D5.getB()&&
							 R2.getR()==F5.getR()&&R2.getG()==F5.getG()&&R2.getB()==F5.getB()&&
							 U6.getR()==R5.getR()&&U6.getG()==R5.getG()&&U6.getB()==R5.getB()
							 )
						 {
							 if(!isF2LLF())
							 {
								 F();
								 U180();
								 F180();
								 _U();
								 F();
								 displayBox->AppendText("F   U2  F2  U'  F   ");
							 }
							 else
							 {
								 _U();
								 R();
								 U180();
								 _R();
								 d();
								 _R();
								 _U();
								 R();
								 displayBox->AppendText("U'  R   U2  R'  d   R'  U'  R   ");
								 if(i>1)
								 {
									 y();
									 displayBox->AppendText("y   ");
								 }
							 }
							 continue;
						 }
						 if(U9.getR()==F5.getR()&&U9.getG()==F5.getG()&&U9.getB()==F5.getB()&&//22
							 R3.getR()==R5.getR()&&R3.getG()==R5.getG()&&R3.getB()==R5.getB()&&
							 F3.getR()==D5.getR()&&F3.getG()==D5.getG()&&F3.getB()==D5.getB()&&
							 F2.getR()==F5.getR()&&F2.getG()==F5.getG()&&F2.getB()==F5.getB()&&
							 U8.getR()==R5.getR()&&U8.getG()==R5.getG()&&U8.getB()==R5.getB()
							 )
						 {
							 if(!isF2LRB())
							 {
								 _R();
								 U();
								 R();
								 _F();
								 _U();
								 F();
								 displayBox->AppendText("R'  U   R   F'  U'  F   ");
							 }
							 else
							 {
								 d();
								 _R();
								 U();
								 R();
								 _U();
								 _R();
								 _U();
								 R();
								 displayBox->AppendText("d   R'  U   R   U'  R'  U'  R   ");
								 if(i>1)
								 {
									 y();
									 displayBox->AppendText("y   ");
								 }
							 }
							 continue;
						 }
						 if(F3.getR()==F5.getR()&&F3.getG()==F5.getG()&&F3.getB()==F5.getB()&&//23
							 U9.getR()==R5.getR()&&U9.getG()==R5.getG()&&U9.getB()==R5.getB()&&
							 R3.getR()==D5.getR()&&R3.getG()==D5.getG()&&R3.getB()==D5.getB()&&
							 U8.getR()==F5.getR()&&U8.getG()==F5.getG()&&U8.getB()==F5.getB()&&
							 F2.getR()==R5.getR()&&F2.getG()==R5.getG()&&F2.getB()==R5.getB()
							 )
						 {
							 if(!isF2LRB())
							 {
								 _R();
								 U180();
								 R180();
								 U();
								 _R();
								 displayBox->AppendText("R'  U2  R2  U   R'  ");
							 }
							 else
							 {
								 d();
								 _R();
								 U180();
								 R();
								 _d();
								 R();
								 U();
								 _R();
								 displayBox->AppendText("d   R'  U2  R   d'  R   U   R'  ");
							 }
							 continue;
						 }
						 if(F3.getR()==F5.getR()&&F3.getG()==F5.getG()&&F3.getB()==F5.getB()&&//24
							 U9.getR()==R5.getR()&&U9.getG()==R5.getG()&&U9.getB()==R5.getB()&&
							 R3.getR()==D5.getR()&&R3.getG()==D5.getG()&&R3.getB()==D5.getB()&&
							 U6.getR()==F5.getR()&&U6.getG()==F5.getG()&&U6.getB()==F5.getB()&&
							 R2.getR()==R5.getR()&&R2.getG()==R5.getG()&&R2.getB()==R5.getB()
							 )
						 {
							 if(!isF2LLF())
							 {
								 F();
								 _U();
								 _F();
								 R();
								 U();
								 _R();
								 displayBox->AppendText("F   U'  F'  R   U   R'  ");
							 }
							 else
							 {
								 _U();
								 R();
								 _U();
								 _R();
								 U();
								 R();
								 U();
								 _R();
								 displayBox->AppendText("U'  R   U'  R'  U   R   U   R'  ");
							 }
							 continue;
						 }
						 if(U9.getR()==F5.getR()&&U9.getG()==F5.getG()&&U9.getB()==F5.getB()&&//25
							 R3.getR()==R5.getR()&&R3.getG()==R5.getG()&&R3.getB()==R5.getB()&&
							 F3.getR()==D5.getR()&&F3.getG()==D5.getG()&&F3.getB()==D5.getB()&&
							 U8.getR()==F5.getR()&&U8.getG()==F5.getG()&&U8.getB()==F5.getB()&&
							 F2.getR()==R5.getR()&&F2.getG()==R5.getG()&&F2.getB()==R5.getB()
							 )
						 {
							 R();
							 U();
							 _R();
							 U180();
							 R();
							 _U();
							 _R();
							 U();
							 R();
							 _U();
							 _R();
							 displayBox->AppendText("R   U   R'  U2  R   U'  R'  U   R   U'  R'  ");
							 continue;
						 }
						 if(F3.getR()==F5.getR()&&F3.getG()==F5.getG()&&F3.getB()==F5.getB()&&//26
							 U9.getR()==R5.getR()&&U9.getG()==R5.getG()&&U9.getB()==R5.getB()&&
							 R3.getR()==D5.getR()&&R3.getG()==D5.getG()&&R3.getB()==D5.getB()&&
							 R2.getR()==F5.getR()&&R2.getG()==F5.getG()&&R2.getB()==F5.getB()&&
							 U6.getR()==R5.getR()&&U6.getG()==R5.getG()&&U6.getB()==R5.getB()
							 )
						 {
							 R();
							 _U();
							 _R();
							 U180();
							 _y();
							 _R();
							 _U();
							 R();
							 displayBox->AppendText("R   U'  R'  U2  y'  R'  U'  R   ");
							 if(i>1)
							 {
								 y();
								 displayBox->AppendText("y   ");
							 }
							 continue;
						 }
						 if(D9.getR()==F5.getR()&&D9.getG()==F5.getG()&&D9.getB()==F5.getB()&&//27
							 F9.getR()==R5.getR()&&F9.getG()==R5.getG()&&F9.getB()==R5.getB()&&
							 R9.getR()==D5.getR()&&R9.getG()==D5.getG()&&R9.getB()==D5.getB()&&
							 F6.getR()==F5.getR()&&F6.getG()==F5.getG()&&F6.getB()==F5.getB()&&
							 R6.getR()==R5.getR()&&R6.getG()==R5.getG()&&R6.getB()==R5.getB()
							 )
						 {
							 if(!isF2LLF())
							 {
								 _u();
								 R();
								 U();
								 _R();
								 _U();
								 R();
								 U();
								 _R();
								 u();
								 displayBox->AppendText("u'  R   U   R'  U'  R   U   R'  u   ");
							 }
							 else if(!isF2LRB())
							 {
								 u();
								 R();
								 U();
								 _R();
								 _U();
								 R();
								 U();
								 _R();
								 _u();
								 displayBox->AppendText("u   R   U   R'  U'  R   U   R'  u'  ");
							 }
							 else
							 {
								 R();
								 _U();
								 _R();
								 U();
								 R();
								 U180();
								 _R();
								 U();
								 R();
								 _U();
								 _R();
								 displayBox->AppendText("R   U'  R'  U   R   U2  R'  U   R   U'  R'  ");
							 }
							 continue;
						 }
						 if(R9.getR()==F5.getR()&&R9.getG()==F5.getG()&&R9.getB()==F5.getB()&&//28
							 D9.getR()==R5.getR()&&D9.getG()==R5.getG()&&D9.getB()==R5.getB()&&
							 F9.getR()==D5.getR()&&F9.getG()==D5.getG()&&F9.getB()==D5.getB()&&
							 F6.getR()==F5.getR()&&F6.getG()==F5.getG()&&F6.getB()==F5.getB()&&
							 R6.getR()==R5.getR()&&R6.getG()==R5.getG()&&R6.getB()==R5.getB()
							 )
						 {
							 if(!isF2LLF())
							 {
								 _u();
								 R();
								 _U();
								 _R();
								 U();
								 R();
								 _U();
								 _R();
								 u();
								 displayBox->AppendText("u'  R   U'  R'  U   R   U'  R'  u   ");
							 }
							 else if(!isF2LRB())
							 {
								 u();
								 R();
								 _U();
								 _R();
								 U();
								 R();
								 _U();
								 _R();
								 _u();
								 displayBox->AppendText("u   R   U'  R'  U   R   U'  R'  u'  ");
							 }
							 else
							 {
								 R();
								 U();
								 _R();
								 _U();
								 R();
								 U180();
								 _R();
								 _U();
								 R();
								 U();
								 _R();
								 displayBox->AppendText("R   U   R'  U'  R   U2  R'  U'  R   U   R'  ");
							 }
							 continue;
						 }
						 if(D9.getR()==F5.getR()&&D9.getG()==F5.getG()&&D9.getB()==F5.getB()&&//29
							 F9.getR()==R5.getR()&&F9.getG()==R5.getG()&&F9.getB()==R5.getB()&&
							 R9.getR()==D5.getR()&&R9.getG()==D5.getG()&&R9.getB()==D5.getB()&&
							 R6.getR()==F5.getR()&&R6.getG()==F5.getG()&&R6.getB()==F5.getB()&&
							 F6.getR()==R5.getR()&&F6.getG()==R5.getG()&&F6.getB()==R5.getB()
							 )
						 {
							 R180();
							 y();
							 R();
							 U();
							 _R();
							 _U();
							 _y();
							 _R();
							 U();
							 _R();
							 displayBox->AppendText("R2  y   R   U   R'  U'  y'  R'  U   R'  ");
							 continue;
						 }
						 if(R9.getR()==F5.getR()&&R9.getG()==F5.getG()&&R9.getB()==F5.getB()&&//30
							 D9.getR()==R5.getR()&&D9.getG()==R5.getG()&&D9.getB()==R5.getB()&&
							 F9.getR()==D5.getR()&&F9.getG()==D5.getG()&&F9.getB()==D5.getB()&&
							 R6.getR()==F5.getR()&&R6.getG()==F5.getG()&&R6.getB()==F5.getB()&&
							 F6.getR()==R5.getR()&&F6.getG()==R5.getG()&&F6.getB()==R5.getB()
							 )
						 {
							 R();
							 _U();
							 R();
							 y();
							 U();
							 R();
							 _U();
							 _R();
							 F180();
							 displayBox->AppendText("R   U'  R   y   U   R   U'  R'  F2  ");
							 --i;
							 continue;
						 }
						 if(F9.getR()==F5.getR()&&F9.getG()==F5.getG()&&F9.getB()==F5.getB()&&//31
							 R9.getR()==R5.getR()&&R9.getG()==R5.getG()&&R9.getB()==R5.getB()&&
							 D9.getR()==D5.getR()&&D9.getG()==D5.getG()&&D9.getB()==D5.getB()&&
							 R6.getR()==F5.getR()&&R6.getG()==F5.getG()&&R6.getB()==F5.getB()&&
							 F6.getR()==R5.getR()&&F6.getG()==R5.getG()&&F6.getB()==R5.getB()
							 )
						 {
							 if(!isF2LLF())
							 {
								 D();
								 _R();
								 F();
								 R();
								 _F();
								 R();
								 _U();
								 _R();
								 _D();
								 displayBox->AppendText("D   R'  F   R   F'  R   U'  R'  D'  ");
							 }
							 else if(!isF2LRB())
							 {
								 _D();
								 _R();
								 F();
								 R();
								 _F();
								 R();
								 _U();
								 _R();
								 D();
								 displayBox->AppendText("D'  R'  F   R   F'  R   U'  R'  D   ");
							 }
							 else
							 {
								 R();
								 U180();
								 _R();
								 U();
								 R();
								 U180();
								 _R();
								 d();
								 _R();
								 _U();
								 R();
								 displayBox->AppendText("R   U2  R'  U   R   U2  R'  d   R'  U'  R   ");
								 if(i>1)
								 {
									 y();
									 displayBox->AppendText("y   ");
								 }
							 }
							 continue;
						 }
						 if(F9.getR()==F5.getR()&&F9.getG()==F5.getG()&&F9.getB()==F5.getB()&&//32
							 R9.getR()==R5.getR()&&R9.getG()==R5.getG()&&R9.getB()==R5.getB()&&
							 D9.getR()==D5.getR()&&D9.getG()==D5.getG()&&D9.getB()==D5.getB()&&
							 F2.getR()==F5.getR()&&F2.getG()==F5.getG()&&F2.getB()==F5.getB()&&
							 U8.getR()==R5.getR()&&U8.getG()==R5.getG()&&U8.getB()==R5.getB()
							 )
						 {
							 if(!isF2LLF())
							 {
								 F();
								 r();
								 U();
								 _r();
								 _F();
								 displayBox->AppendText("F   r   U   r'  F'  ");
							 }
							 else if(!isF2LRB())
							 {
								 _U();
								 _D();
								 _F();
								 U();
								 F();
								 D();
								 displayBox->AppendText("U'  D'  F'  U   F   D   ");
							 }
							 else
							 {
								 U();
								 R();
								 _U();
								 _R();
								 _U();
								 _F();
								 U();
								 F();
								 displayBox->AppendText("U   R   U'  R'  U'  F'  U   F   ");
							 }
							 continue;
						 }
						 if(F9.getR()==F5.getR()&&F9.getG()==F5.getG()&&F9.getB()==F5.getB()&&//33
							 R9.getR()==R5.getR()&&R9.getG()==R5.getG()&&R9.getB()==R5.getB()&&
							 D9.getR()==D5.getR()&&D9.getG()==D5.getG()&&D9.getB()==D5.getB()&&
							 U6.getR()==F5.getR()&&U6.getG()==F5.getG()&&U6.getB()==F5.getB()&&
							 R2.getR()==R5.getR()&&R2.getG()==R5.getG()&&R2.getB()==R5.getB()
							 )
						 {
							 if(!isF2LLF())
							 {
								 U();
								 D();
								 R();
								 _U();
								 _R();
								 _D();
								 displayBox->AppendText("U   D   R   U'  R'  D'  ");
							 }
							 else if(!isF2LRB())
							 {
								 U();
								 _D();
								 R();
								 _U();
								 _R();
								 D();
								 displayBox->AppendText("U   D'  R   U'  R'  D   ");
							 }
							 else
							 {
								 _U();
								 _F();
								 U();
								 F();
								 U();
								 R();
								 _U();
								 _R();
								 displayBox->AppendText("U'  F'  U   F   U   R   U'  R'  ");
							 }
							 continue;
						 }
						 if(R3.getR()==F5.getR()&&R3.getG()==F5.getG()&&R3.getB()==F5.getB()&&//34
							 F3.getR()==R5.getR()&&F3.getG()==R5.getG()&&F3.getB()==R5.getB()&&
							 U9.getR()==D5.getR()&&U9.getG()==D5.getG()&&U9.getB()==D5.getB()&&
							 F2.getR()==F5.getR()&&F2.getG()==F5.getG()&&F2.getB()==F5.getB()&&
							 U8.getR()==R5.getR()&&U8.getG()==R5.getG()&&U8.getB()==R5.getB()
							 )
						 {
							 _y();
							 _R();
							 U180();
							 R();
							 U();
							 _R();
							 _U();
							 R();
							 displayBox->AppendText("y'  R'  U2  R   U   R'  U'  R   ");
							 if(i>1)
							 {
								 y();
								 displayBox->AppendText("y   ");
							 }
							 continue;
						 }
						 if(R3.getR()==F5.getR()&&R3.getG()==F5.getG()&&R3.getB()==F5.getB()&&//35
							 F3.getR()==R5.getR()&&F3.getG()==R5.getG()&&F3.getB()==R5.getB()&&
							 U9.getR()==D5.getR()&&U9.getG()==D5.getG()&&U9.getB()==D5.getB()&&
							 U8.getR()==F5.getR()&&U8.getG()==F5.getG()&&U8.getB()==F5.getB()&&
							 F2.getR()==R5.getR()&&F2.getG()==R5.getG()&&F2.getB()==R5.getB()
							 )
						 {
							 R();
							 U();
							 _R();
							 U180();
							 R();
							 U();
							 _R();
							 _U();
							 R();
							 U();
							 _R();
							 displayBox->AppendText("R   U   R'  U2  R   U   R'  U'  R   U   R'  ");
							 continue;
						 }
						 if(R3.getR()==F5.getR()&&R3.getG()==F5.getG()&&R3.getB()==F5.getB()&&//36
							 F3.getR()==R5.getR()&&F3.getG()==R5.getG()&&F3.getB()==R5.getB()&&
							 U9.getR()==D5.getR()&&U9.getG()==D5.getG()&&U9.getB()==D5.getB()&&
							 U6.getR()==F5.getR()&&U6.getG()==F5.getG()&&U6.getB()==F5.getB()&&
							 R2.getR()==R5.getR()&&R2.getG()==R5.getG()&&R2.getB()==R5.getB()
							 )
						 {
							 R();
							 U180();
							 _R();
							 _U();
							 R();
							 U();
							 _R();
							 displayBox->AppendText("R   U2  R'  U'  R   U   R'  ");
							 continue;
						 }
						 if(R3.getR()==F5.getR()&&R3.getG()==F5.getG()&&R3.getB()==F5.getB()&&//37
							 F3.getR()==R5.getR()&&F3.getG()==R5.getG()&&F3.getB()==R5.getB()&&
							 U9.getR()==D5.getR()&&U9.getG()==D5.getG()&&U9.getB()==D5.getB()&&
							 R2.getR()==F5.getR()&&R2.getG()==F5.getG()&&R2.getB()==F5.getB()&&
							 U6.getR()==R5.getR()&&U6.getG()==R5.getG()&&U6.getB()==R5.getB()
							 )
						 {
							 R();
							 U();
							 _R();
							 U();
							 R();
							 U180();
							 _R();
							 d();
							 _R();
							 U();
							 R();
							 displayBox->AppendText("R   U   R'  U   R   U2  R'  d   R'  U   R   ");
							 if(i>1)
							 {
								 y();
								 displayBox->AppendText("y   ");
							 }
							 continue;
						 }
						 if(D9.getR()==F5.getR()&&D9.getG()==F5.getG()&&D9.getB()==F5.getB()&&//38
							 F9.getR()==R5.getR()&&F9.getG()==R5.getG()&&F9.getB()==R5.getB()&&
							 R9.getR()==D5.getR()&&R9.getG()==D5.getG()&&R9.getB()==D5.getB()&&
							 F2.getR()==F5.getR()&&F2.getG()==F5.getG()&&F2.getB()==F5.getB()&&
							 U8.getR()==R5.getR()&&U8.getG()==R5.getG()&&U8.getB()==R5.getB()
							 )
						 {
							 _y();
							 _R();
							 U();
							 R();
							 _U();
							 _R();
							 U();
							 R();
							 displayBox->AppendText("y'  R'  U   R   U'  R'  U   R   ");
							 if(i>1)
							 {
								 y();
								 displayBox->AppendText("y   ");
							 }
							 continue;
						 }
						 if(D9.getR()==F5.getR()&&D9.getG()==F5.getG()&&D9.getB()==F5.getB()&&//39
							 F9.getR()==R5.getR()&&F9.getG()==R5.getG()&&F9.getB()==R5.getB()&&
							 R9.getR()==D5.getR()&&R9.getG()==D5.getG()&&R9.getB()==D5.getB()&&
							 U6.getR()==F5.getR()&&U6.getG()==F5.getG()&&U6.getB()==F5.getB()&&
							 R2.getR()==R5.getR()&&R2.getG()==R5.getG()&&R2.getB()==R5.getB()
							 )
						 {
							 R();
							 U();
							 _R();
							 _U();
							 R();
							 U();
							 _R();
							 displayBox->AppendText("R   U   R'  U'  R   U   R'  ");
							 continue;
						 }
						 if(R9.getR()==F5.getR()&&R9.getG()==F5.getG()&&R9.getB()==F5.getB()&&//40
							 D9.getR()==R5.getR()&&D9.getG()==R5.getG()&&D9.getB()==R5.getB()&&
							 F9.getR()==D5.getR()&&F9.getG()==D5.getG()&&F9.getB()==D5.getB()&&
							 U6.getR()==F5.getR()&&U6.getG()==F5.getG()&&U6.getB()==F5.getB()&&
							 R2.getR()==R5.getR()&&R2.getG()==R5.getG()&&R2.getB()==R5.getB()
							 )
						 {
							 R();
							 _U();
							 _R();
							 U();
							 R();
							 _U();
							 _R();
							 displayBox->AppendText("R   U'  R'  U   R   U'  R'  ");
							 continue;
						 }
						 if(R9.getR()==F5.getR()&&R9.getG()==F5.getG()&&R9.getB()==F5.getB()&&//41
							 D9.getR()==R5.getR()&&D9.getG()==R5.getG()&&D9.getB()==R5.getB()&&
							 F9.getR()==D5.getR()&&F9.getG()==D5.getG()&&F9.getB()==D5.getB()&&
							 F2.getR()==F5.getR()&&F2.getG()==F5.getG()&&F2.getB()==F5.getB()&&
							 U8.getR()==R5.getR()&&U8.getG()==R5.getG()&&U8.getB()==R5.getB()
							 )
						 {
							 _y();
							 _R();
							 _U();
							 R();
							 U();
							 _R();
							 _U();
							 R();
							 displayBox->AppendText("y'  R'  U'  R   U   R'  U'  R   ");
							 if(i>1)
							 {
								 y();
								 displayBox->AppendText("y   ");
							 }
							 continue;
						 }
						 if((R3.getR()==F5.getR()&&R3.getG()==F5.getG()&&R3.getB()==F5.getB()&&//1
							 F3.getR()==R5.getR()&&F3.getG()==R5.getG()&&F3.getB()==R5.getB()&&
							 U9.getR()==D5.getR()&&U9.getG()==D5.getG()&&U9.getB()==D5.getB())||
							 (U9.getR()==F5.getR()&&U9.getG()==F5.getG()&&U9.getB()==F5.getB()&&
							 R3.getR()==R5.getR()&&R3.getG()==R5.getG()&&R3.getB()==R5.getB()&&
							 F3.getR()==D5.getR()&&F3.getG()==D5.getG()&&F3.getB()==D5.getB())||
							 (F3.getR()==F5.getR()&&F3.getG()==F5.getG()&&F3.getB()==F5.getB()&&
							 U9.getR()==R5.getR()&&U9.getG()==R5.getG()&&U9.getB()==R5.getB()&&
							 R3.getR()==D5.getR()&&R3.getG()==D5.getG()&&R3.getB()==D5.getB())
							 )
						 {
							 R();
							 U();
							 _R();
							 displayBox->AppendText("R   U   R'  ");
							 continue;
						 }
						 if((B3.getR()==F5.getR()&&B3.getG()==F5.getG()&&B3.getB()==F5.getB()&&
							 R1.getR()==R5.getR()&&R1.getG()==R5.getG()&&R1.getB()==R5.getB()&&
							 U3.getR()==D5.getR()&&U3.getG()==D5.getG()&&U3.getB()==D5.getB())||
							 (U3.getR()==F5.getR()&&U3.getG()==F5.getG()&&U3.getB()==F5.getB()&&
							 B3.getR()==R5.getR()&&B3.getG()==R5.getG()&&B3.getB()==R5.getB()&&
							 R1.getR()==D5.getR()&&R1.getG()==D5.getG()&&R1.getB()==D5.getB())||
							 (R1.getR()==F5.getR()&&R1.getG()==F5.getG()&&R1.getB()==F5.getB()&&
							 U3.getR()==R5.getR()&&U3.getG()==R5.getG()&&U3.getB()==R5.getB()&&
							 B3.getR()==D5.getR()&&B3.getG()==D5.getG()&&B3.getB()==D5.getB())
							 )
						 {
							 U();
							 R();
							 U();
							 _R();
							 displayBox->AppendText("U   R   U   R'  ");
							 continue;
						 }
						 if((F1.getR()==F5.getR()&&F1.getG()==F5.getG()&&F1.getB()==F5.getB()&&
							 L3.getR()==R5.getR()&&L3.getG()==R5.getG()&&L3.getB()==R5.getB()&&
							 U7.getR()==D5.getR()&&U7.getG()==D5.getG()&&U7.getB()==D5.getB())||
							 (U7.getR()==F5.getR()&&U7.getG()==F5.getG()&&U7.getB()==F5.getB()&&
							 F1.getR()==R5.getR()&&F1.getG()==R5.getG()&&F1.getB()==R5.getB()&&
							 L3.getR()==D5.getR()&&L3.getG()==D5.getG()&&L3.getB()==D5.getB())||
							 (L3.getR()==F5.getR()&&L3.getG()==F5.getG()&&L3.getB()==F5.getB()&&
							 U7.getR()==R5.getR()&&U7.getG()==R5.getG()&&U7.getB()==R5.getB()&&
							 F1.getR()==D5.getR()&&F1.getG()==D5.getG()&&F1.getB()==D5.getB())
							 )
						 {
							 R();
							 _U();
							 _R();
							 displayBox->AppendText("R   U'  R'  ");
							 continue;
						 }
						 if((L1.getR()==F5.getR()&&L1.getG()==F5.getG()&&L1.getB()==F5.getB()&&
							 B1.getR()==R5.getR()&&B1.getG()==R5.getG()&&B1.getB()==R5.getB()&&
							 U1.getR()==D5.getR()&&U1.getG()==D5.getG()&&U1.getB()==D5.getB())||
							 (U1.getR()==F5.getR()&&U1.getG()==F5.getG()&&U1.getB()==F5.getB()&&
							 L1.getR()==R5.getR()&&L1.getG()==R5.getG()&&L1.getB()==R5.getB()&&
							 B1.getR()==D5.getR()&&B1.getG()==D5.getG()&&B1.getB()==D5.getB())||
							 (B1.getR()==F5.getR()&&B1.getG()==F5.getG()&&B1.getB()==F5.getB()&&
							 U1.getR()==R5.getR()&&U1.getG()==R5.getG()&&U1.getB()==R5.getB()&&
							 L1.getR()==D5.getR()&&L1.getG()==D5.getG()&&L1.getB()==D5.getB())
							 )
						 {
							 R();
							 U180();
							 _R();
							 displayBox->AppendText("R   U2  R'  ");
							 continue;
						 }
						 if((D7.getR()==F5.getR()&&D7.getG()==F5.getG()&&D7.getB()==F5.getB()&&
							 L9.getR()==R5.getR()&&L9.getG()==R5.getG()&&L9.getB()==R5.getB()&&
							 F7.getR()==D5.getR()&&F7.getG()==D5.getG()&&F7.getB()==D5.getB())||
							 (F7.getR()==F5.getR()&&F7.getG()==F5.getG()&&F7.getB()==F5.getB()&&
							 D7.getR()==R5.getR()&&D7.getG()==R5.getG()&&D7.getB()==R5.getB()&&
							 L9.getR()==D5.getR()&&L9.getG()==D5.getG()&&L9.getB()==D5.getB())||
							 (L9.getR()==F5.getR()&&L9.getG()==F5.getG()&&L9.getB()==F5.getB()&&
							 F7.getR()==R5.getR()&&F7.getG()==R5.getG()&&F7.getB()==R5.getB()&&
							 D7.getR()==D5.getR()&&D7.getG()==D5.getG()&&D7.getB()==D5.getB())
							 )
						 {
							 _L();
							 R();
							 _U();
							 _R();
							 L();
							 displayBox->AppendText("L'  R   U'  R'  L   ");
							 continue;
						 }
						 if((B9.getR()==F5.getR()&&B9.getG()==F5.getG()&&B9.getB()==F5.getB()&&
							 D3.getR()==R5.getR()&&D3.getG()==R5.getG()&&D3.getB()==R5.getB()&&
							 R7.getR()==D5.getR()&&R7.getG()==D5.getG()&&R7.getB()==D5.getB())||
							 (R7.getR()==F5.getR()&&R7.getG()==F5.getG()&&R7.getB()==F5.getB()&&
							 B9.getR()==R5.getR()&&B9.getG()==R5.getG()&&B9.getB()==R5.getB()&&
							 D3.getR()==D5.getR()&&D3.getG()==D5.getG()&&D3.getB()==D5.getB())||
							 (D3.getR()==F5.getR()&&D3.getG()==F5.getG()&&D3.getB()==F5.getB()&&
							 R7.getR()==R5.getR()&&R7.getG()==R5.getG()&&R7.getB()==R5.getB()&&
							 B9.getR()==D5.getR()&&B9.getG()==D5.getG()&&B9.getB()==D5.getB())
							 )
						 {
							 B();
							 _F();
							 U();
							 F();
							 _B();
							 displayBox->AppendText("B   F'  U   F   B'  ");
							 continue;
						 }
						 if((L7.getR()==F5.getR()&&L7.getG()==F5.getG()&&L7.getB()==F5.getB()&&
							 D1.getR()==R5.getR()&&D1.getG()==R5.getG()&&D1.getB()==R5.getB()&&
							 B7.getR()==D5.getR()&&B7.getG()==D5.getG()&&B7.getB()==D5.getB())||
							 (B7.getR()==F5.getR()&&B7.getG()==F5.getG()&&B7.getB()==F5.getB()&&
							 L7.getR()==R5.getR()&&L7.getG()==R5.getG()&&L7.getB()==R5.getB()&&
							 D1.getR()==D5.getR()&&D1.getG()==D5.getG()&&D1.getB()==D5.getB())||
							 (D1.getR()==F5.getR()&&D1.getG()==F5.getG()&&D1.getB()==F5.getB()&&
							 B7.getR()==R5.getR()&&B7.getG()==R5.getG()&&B7.getB()==R5.getB()&&
							 L7.getR()==D5.getR()&&L7.getG()==D5.getG()&&L7.getB()==D5.getB())
							 )
						 {
							 L();
							 R();
							 U180();
							 _R();
							 _L();
							 displayBox->AppendText("L   R   U2  R'  L'  ");
							 continue;
						 }
						 if(U8.getR()==F5.getR()&&U8.getG()==F5.getG()&&U8.getB()==F5.getB()&&
							 F2.getR()==R5.getR()&&F2.getG()==R5.getG()&&F2.getB()==R5.getB()
							 )
						 {
							 _U();
							 displayBox->AppendText("U'  ");
							 continue;
						 }
						 if(R2.getR()==F5.getR()&&R2.getG()==F5.getG()&&R2.getB()==F5.getB()&&
							 U6.getR()==R5.getR()&&U6.getG()==R5.getG()&&U6.getB()==R5.getB()
							 )
						 {
							 U();
							 displayBox->AppendText("U   ");
							 continue;
						 }
						 if((U4.getR()==F5.getR()&&U4.getG()==F5.getG()&&U4.getB()==F5.getB()&&
							 L2.getR()==R5.getR()&&L2.getG()==R5.getG()&&L2.getB()==R5.getB())||
							 (L2.getR()==F5.getR()&&L2.getG()==F5.getG()&&L2.getB()==F5.getB()&&
							 U4.getR()==R5.getR()&&U4.getG()==R5.getG()&&U4.getB()==R5.getB())
							 )
						 {
							 _U();
							 displayBox->AppendText("U'  ");
							 continue;
						 }
						 if((U2.getR()==F5.getR()&&U2.getG()==F5.getG()&&U2.getB()==F5.getB()&&
							 B2.getR()==R5.getR()&&B2.getG()==R5.getG()&&B2.getB()==R5.getB())||
							 (B2.getR()==F5.getR()&&B2.getG()==F5.getG()&&B2.getB()==F5.getB()&&
							 U2.getR()==R5.getR()&&U2.getG()==R5.getG()&&U2.getB()==R5.getB())
							 )
						 {
							 U();
							 displayBox->AppendText("U   ");
							 continue;
						 }
						 if((F4.getR()==F5.getR()&&F4.getG()==F5.getG()&&F4.getB()==F5.getB()&&
							 L6.getR()==R5.getR()&&L6.getG()==R5.getG()&&L6.getB()==R5.getB())||
							 (L6.getR()==F5.getR()&&L6.getG()==F5.getG()&&L6.getB()==F5.getB()&&
							 F4.getR()==R5.getR()&&F4.getG()==R5.getG()&&F4.getB()==R5.getB())
							 )
						 {
							 _L();
							 _U();
							 L();
							 displayBox->AppendText("L'  U'  L   ");
							 continue;
						 }
						 if((R4.getR()==F5.getR()&&R4.getG()==F5.getG()&&R4.getB()==F5.getB()&&
							 B6.getR()==R5.getR()&&B6.getG()==R5.getG()&&B6.getB()==R5.getB())||
							 (B6.getR()==F5.getR()&&B6.getG()==F5.getG()&&B6.getB()==F5.getB()&&
							 R4.getR()==R5.getR()&&R4.getG()==R5.getG()&&R4.getB()==R5.getB())
							 )
						 {
							 _R();
							 U();
							 R();
							 displayBox->AppendText("R'  U   R   ");
							 continue;
						 }
						 if((L4.getR()==F5.getR()&&L4.getG()==F5.getG()&&L4.getB()==F5.getB()&&
							 B4.getR()==R5.getR()&&B4.getG()==R5.getG()&&B4.getB()==R5.getB())||
							 (B4.getR()==F5.getR()&&B4.getG()==F5.getG()&&B4.getB()==F5.getB()&&
							 L4.getR()==R5.getR()&&L4.getG()==R5.getG()&&L4.getB()==R5.getB())
							 )
						 {
							 L();
							 _U();
							 _L();
							 displayBox->AppendText("L   U'  L'  ");
							 continue;
						 }
						 displayBox->Text="    魔方涂色错误！请重新涂色。";	
						 OLL=true;
						 PLL=true;
						 OK=true;
						 break;
					 }
				 }
				 if((!isOLL())&&(!OLL))
				 {
					 int i=0;
					 while(!isOLL())
					 {
						 if(U2.getR()==U5.getR()&&U2.getG()==U5.getG()&&U2.getB()==U5.getB()&&//1
							 U3.getR()==U5.getR()&&U3.getG()==U5.getG()&&U3.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 U8.getR()==U5.getR()&&U8.getG()==U5.getG()&&U8.getB()==U5.getB()&&
							 L1.getR()==U5.getR()&&L1.getG()==U5.getG()&&L1.getB()==U5.getB()&&
							 F1.getR()==U5.getR()&&F1.getG()==U5.getG()&&F1.getB()==U5.getB()&&
							 R3.getR()==U5.getR()&&R3.getG()==U5.getG()&&R3.getB()==U5.getB()
							 )
						 {
							 R();
							 U180();
							 _R();
							 _U();
							 R();
							 _U();
							 _R();
							 displayBox->AppendText("R   U2  R'  U'  R   U'  R'  ");
							 continue;
						 }
						 if(U2.getR()==U5.getR()&&U2.getG()==U5.getG()&&U2.getB()==U5.getB()&&//2
							 U7.getR()==U5.getR()&&U7.getG()==U5.getG()&&U7.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 U8.getR()==U5.getR()&&U8.getG()==U5.getG()&&U8.getB()==U5.getB()&&
							 B1.getR()==U5.getR()&&B1.getG()==U5.getG()&&B1.getB()==U5.getB()&&
							 R1.getR()==U5.getR()&&R1.getG()==U5.getG()&&R1.getB()==U5.getB()&&
							 F3.getR()==U5.getR()&&F3.getG()==U5.getG()&&F3.getB()==U5.getB()
							 )
						 {
							 R();
							 U();
							 _R();
							 U();
							 R();
							 U180();
							 _R();
							 displayBox->AppendText("R   U   R'  U   R   U2  R'  ");
							 continue;
						 }
						 if(U2.getR()==U5.getR()&&U2.getG()==U5.getG()&&U2.getB()==U5.getB()&&//3
							 B3.getR()==U5.getR()&&B3.getG()==U5.getG()&&B3.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 U8.getR()==U5.getR()&&U8.getG()==U5.getG()&&U8.getB()==U5.getB()&&
							 B1.getR()==U5.getR()&&B1.getG()==U5.getG()&&B1.getB()==U5.getB()&&
							 F1.getR()==U5.getR()&&F1.getG()==U5.getG()&&F1.getB()==U5.getB()&&
							 F3.getR()==U5.getR()&&F3.getG()==U5.getG()&&F3.getB()==U5.getB()
							 )
						 {
							 R();
							 U180();
							 _R();
							 _U();
							 R();
							 U();
							 _R();
							 _U();
							 R();
							 _U();
							 _R();
							 displayBox->AppendText("R   U2  R'  U'  R   U   R'  U'  R   U'  R'  ");
							 continue;
						 }
						 if(U2.getR()==U5.getR()&&U2.getG()==U5.getG()&&U2.getB()==U5.getB()&&//4
							 B3.getR()==U5.getR()&&B3.getG()==U5.getG()&&B3.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 U8.getR()==U5.getR()&&U8.getG()==U5.getG()&&U8.getB()==U5.getB()&&
							 L1.getR()==U5.getR()&&L1.getG()==U5.getG()&&L1.getB()==U5.getB()&&
							 L3.getR()==U5.getR()&&L3.getG()==U5.getG()&&L3.getB()==U5.getB()&&
							 F3.getR()==U5.getR()&&F3.getG()==U5.getG()&&F3.getB()==U5.getB()
							 )
						 {
							 R();
							 U180();
							 R180();
							 _U();
							 R180();
							 _U();
							 R180();
							 U180();
							 R();
							 displayBox->AppendText("R   U2  R2  U'  R2  U'  R2  U2  R   ");
							 continue;
						 }
						 if(U2.getR()==U5.getR()&&U2.getG()==U5.getG()&&U2.getB()==U5.getB()&&//5
							 U3.getR()==U5.getR()&&U3.getG()==U5.getG()&&U3.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 U8.getR()==U5.getR()&&U8.getG()==U5.getG()&&U8.getB()==U5.getB()&&
							 B1.getR()==U5.getR()&&B1.getG()==U5.getG()&&B1.getB()==U5.getB()&&
							 F1.getR()==U5.getR()&&F1.getG()==U5.getG()&&F1.getB()==U5.getB()&&
							 U9.getR()==U5.getR()&&U9.getG()==U5.getG()&&U9.getB()==U5.getB()
							 )
						 {
							 r();
							 U();
							 _R();
							 _U();
							 _r();
							 F();
							 R();
							 _F();
							 displayBox->AppendText("r   U   R'  U'  r'  F   R   F'  ");
							 continue;
						 }
						 if(U2.getR()==U5.getR()&&U2.getG()==U5.getG()&&U2.getB()==U5.getB()&&//6
							 U3.getR()==U5.getR()&&U3.getG()==U5.getG()&&U3.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 U8.getR()==U5.getR()&&U8.getG()==U5.getG()&&U8.getB()==U5.getB()&&
							 U1.getR()==U5.getR()&&U1.getG()==U5.getG()&&U1.getB()==U5.getB()&&
							 F1.getR()==U5.getR()&&F1.getG()==U5.getG()&&F1.getB()==U5.getB()&&
							 F3.getR()==U5.getR()&&F3.getG()==U5.getG()&&F3.getB()==U5.getB()
							 )
						 {
							 R();
							 U();
							 _R();
							 U();
							 R();
							 U180();
							 _R();
							 U();
							 R();
							 U180();
							 _R();
							 _U();
							 R();
							 _U();
							 _R();
							 displayBox->AppendText("R   U   R'  U   R   U2  R'  U   R   U2  R'  U'  R   U'  R'  ");
							 continue;
						 }
						 if(U2.getR()==U5.getR()&&U2.getG()==U5.getG()&&U2.getB()==U5.getB()&&//7
							 U3.getR()==U5.getR()&&U3.getG()==U5.getG()&&U3.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 U8.getR()==U5.getR()&&U8.getG()==U5.getG()&&U8.getB()==U5.getB()&&
							 L1.getR()==U5.getR()&&L1.getG()==U5.getG()&&L1.getB()==U5.getB()&&
							 U7.getR()==U5.getR()&&U7.getG()==U5.getG()&&U7.getB()==U5.getB()&&
							 F3.getR()==U5.getR()&&F3.getG()==U5.getG()&&F3.getB()==U5.getB()
							 )
						 {
							 _F();
							 r();
							 U();
							 _R();
							 _U();
							 _r();
							 F();
							 R();
							 displayBox->AppendText("F'  r   U   R'  U'  r'  F   R   ");
							 continue;
						 }
						 if(L1.getR()==U5.getR()&&L1.getG()==U5.getG()&&L1.getB()==U5.getB()&&//8
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 R1.getR()==U5.getR()&&R1.getG()==U5.getG()&&R1.getB()==U5.getB()&&
							 L2.getR()==U5.getR()&&L2.getG()==U5.getG()&&L2.getB()==U5.getB()&&
							 R2.getR()==U5.getR()&&R2.getG()==U5.getG()&&R2.getB()==U5.getB()&&
							 L3.getR()==U5.getR()&&L3.getG()==U5.getG()&&L3.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 R3.getR()==U5.getR()&&R3.getG()==U5.getG()&&R3.getB()==U5.getB()
							 )
						 {
							 R();
							 U180();
							 R180();
							 F();
							 R();
							 _F();
							 U180();
							 _R();
							 F();
							 R();
							 _F();
							 displayBox->AppendText("R   U2  R2  F   R   F'  U2  R'  F   R   F'  ");
							 continue;
						 }
						 if(L1.getR()==U5.getR()&&L1.getG()==U5.getG()&&L1.getB()==U5.getB()&&//9
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 B3.getR()==U5.getR()&&B3.getG()==U5.getG()&&B3.getB()==U5.getB()&&
							 L2.getR()==U5.getR()&&L2.getG()==U5.getG()&&L2.getB()==U5.getB()&&
							 R2.getR()==U5.getR()&&R2.getG()==U5.getG()&&R2.getB()==U5.getB()&&
							 L3.getR()==U5.getR()&&L3.getG()==U5.getG()&&L3.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 F3.getR()==U5.getR()&&F3.getG()==U5.getG()&&F3.getB()==U5.getB()
							 )
						 {
							 F();
							 R();
							 U();
							 _R();
							 _U();
							 _F();
							 f();
							 R();
							 U();
							 _R();
							 _U();
							 _f();
							 displayBox->AppendText("F   R   U   R'  U'  F'  f   R   U   R'  U'  f'  ");
							 continue;
						 }
						 if(B1.getR()==U5.getR()&&B1.getG()==U5.getG()&&B1.getB()==U5.getB()&&//10
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 R1.getR()==U5.getR()&&R1.getG()==U5.getG()&&R1.getB()==U5.getB()&&
							 L2.getR()==U5.getR()&&L2.getG()==U5.getG()&&L2.getB()==U5.getB()&&
							 R2.getR()==U5.getR()&&R2.getG()==U5.getG()&&R2.getB()==U5.getB()&&
							 L3.getR()==U5.getR()&&L3.getG()==U5.getG()&&L3.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 U9.getR()==U5.getR()&&U9.getG()==U5.getG()&&U9.getB()==U5.getB()
							 )
						 {
							 f();
							 R();
							 U();
							 _R();
							 _U();
							 _f();
							 _U();
							 F();
							 R();
							 U();
							 _R();
							 _U();
							 _F();
							 displayBox->AppendText("f   R   U   R'  U'  f'  U'  F   R   U   R'  U'  F'  ");
							 continue;
						 }
						 if(L1.getR()==U5.getR()&&L1.getG()==U5.getG()&&L1.getB()==U5.getB()&&//11
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 U3.getR()==U5.getR()&&U3.getG()==U5.getG()&&U3.getB()==U5.getB()&&
							 L2.getR()==U5.getR()&&L2.getG()==U5.getG()&&L2.getB()==U5.getB()&&
							 R2.getR()==U5.getR()&&R2.getG()==U5.getG()&&R2.getB()==U5.getB()&&
							 F1.getR()==U5.getR()&&F1.getG()==U5.getG()&&F1.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 R3.getR()==U5.getR()&&R3.getG()==U5.getG()&&R3.getB()==U5.getB()
							 )
						 {
							 f();
							 R();
							 U();
							 _R();
							 _U();
							 _f();
							 y();
							 F();
							 R();
							 U();
							 _R();
							 _U();
							 _F();
							 displayBox->AppendText("f   R   U   R'  U'  f'  y   F   R   U   R'  U'  F'  ");
							 continue;
						 }
						 if(U1.getR()==U5.getR()&&U1.getG()==U5.getG()&&U1.getB()==U5.getB()&&//12
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 B3.getR()==U5.getR()&&B3.getG()==U5.getG()&&B3.getB()==U5.getB()&&
							 L2.getR()==U5.getR()&&L2.getG()==U5.getG()&&L2.getB()==U5.getB()&&
							 R2.getR()==U5.getR()&&R2.getG()==U5.getG()&&R2.getB()==U5.getB()&&
							 L3.getR()==U5.getR()&&L3.getG()==U5.getG()&&L3.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 U9.getR()==U5.getR()&&U9.getG()==U5.getG()&&U9.getB()==U5.getB()
							 )
						 {
							 R();
							 U();
							 _R();
							 U();
							 _R();
							 F();
							 R();
							 _F();
							 U180();
							 _R();
							 F();
							 R();
							 _F();
							 displayBox->AppendText("R   U   R'  U   R'  F   R   F'  U2  R'  F   R   F'  ");
							 continue;
						 }
						 if(B1.getR()==U5.getR()&&B1.getG()==U5.getG()&&B1.getB()==U5.getB()&&//13
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 B3.getR()==U5.getR()&&B3.getG()==U5.getG()&&B3.getB()==U5.getB()&&
							 L2.getR()==U5.getR()&&L2.getG()==U5.getG()&&L2.getB()==U5.getB()&&
							 R2.getR()==U5.getR()&&R2.getG()==U5.getG()&&R2.getB()==U5.getB()&&
							 U7.getR()==U5.getR()&&U7.getG()==U5.getG()&&U7.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 U9.getR()==U5.getR()&&U9.getG()==U5.getG()&&U9.getB()==U5.getB()
							 )
						 {
							 F();
							 R();
							 U();
							 _R();
							 d();
							 _R();
							 U180();
							 _R();
							 F();
							 R();
							 _F();
							 displayBox->AppendText("F   R   U   R'  d   R'  U2  R'  F   R   F'  ");
							 continue;
						 }
						 if(U1.getR()==U5.getR()&&U1.getG()==U5.getG()&&U1.getB()==U5.getB()&&//14
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 U3.getR()==U5.getR()&&U3.getG()==U5.getG()&&U3.getB()==U5.getB()&&
							 L2.getR()==U5.getR()&&L2.getG()==U5.getG()&&L2.getB()==U5.getB()&&
							 R2.getR()==U5.getR()&&R2.getG()==U5.getG()&&R2.getB()==U5.getB()&&
							 L3.getR()==U5.getR()&&L3.getG()==U5.getG()&&L3.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 R3.getR()==U5.getR()&&R3.getG()==U5.getG()&&R3.getB()==U5.getB()
							 )
						 {
							 _r();
							 R();
							 U();
							 R();
							 U();
							 _R();
							 _U();
							 r();
							 R180();
							 F();
							 R();
							 _F();
							 displayBox->AppendText("r'  R   U   R   U   R'  U'  r   R2  F   R   F'  ");
							 continue;
						 }
						 if(U1.getR()==U5.getR()&&U1.getG()==U5.getG()&&U1.getB()==U5.getB()&&//15
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 U3.getR()==U5.getR()&&U3.getG()==U5.getG()&&U3.getB()==U5.getB()&&
							 L2.getR()==U5.getR()&&L2.getG()==U5.getG()&&L2.getB()==U5.getB()&&
							 R2.getR()==U5.getR()&&R2.getG()==U5.getG()&&R2.getB()==U5.getB()&&
							 U7.getR()==U5.getR()&&U7.getG()==U5.getG()&&U7.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 U9.getR()==U5.getR()&&U9.getG()==U5.getG()&&U9.getB()==U5.getB()
							 )
						 {
							 _r();
							 R();
							 U();
							 R();
							 U();
							 _R();
							 _U();
							 r180();
							 R180();
							 U();
							 R();
							 _U();
							 _r();
							 displayBox->AppendText("r'  R   U   R   U   R'  U'  r2  R2  U   R   U'  r'  ");
							 continue;
						 }
						 if(L1.getR()==U5.getR()&&L1.getG()==U5.getG()&&L1.getB()==U5.getB()&&//16
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 B3.getR()==U5.getR()&&B3.getG()==U5.getG()&&B3.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 L3.getR()==U5.getR()&&L3.getG()==U5.getG()&&L3.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 F3.getR()==U5.getR()&&F3.getG()==U5.getG()&&F3.getB()==U5.getB()
							 )
						 {
							 f();
							 R();
							 U();
							 _R();
							 _U();
							 R();
							 U();
							 _R();
							 _U();
							 _f();
							 displayBox->AppendText("f   R   U   R'  U'  R   U   R'  U'  f'  ");
							 continue;
						 }
						 if(B1.getR()==U5.getR()&&B1.getG()==U5.getG()&&B1.getB()==U5.getB()&&//17
							 U2.getR()==U5.getR()&&U2.getG()==U5.getG()&&U2.getB()==U5.getB()&&
							 R1.getR()==U5.getR()&&R1.getG()==U5.getG()&&R1.getB()==U5.getB()&&
							 L2.getR()==U5.getR()&&L2.getG()==U5.getG()&&L2.getB()==U5.getB()&&
							 R2.getR()==U5.getR()&&R2.getG()==U5.getG()&&R2.getB()==U5.getB()&&
							 F1.getR()==U5.getR()&&F1.getG()==U5.getG()&&F1.getB()==U5.getB()&&
							 U8.getR()==U5.getR()&&U8.getG()==U5.getG()&&U8.getB()==U5.getB()&&
							 R3.getR()==U5.getR()&&R3.getG()==U5.getG()&&R3.getB()==U5.getB()
							 )
						 {
							 _R();
							 _U();
							 R();
							 _U();
							 _R();
							 d();
							 _R();
							 U();
							 R();
							 B();
							 displayBox->AppendText("R'  U'  R'  U'  R'  d   R'  U   R   B   ");
							 continue;
						 }
						 if(L1.getR()==U5.getR()&&L1.getG()==U5.getG()&&L1.getB()==U5.getB()&&//18
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 R1.getR()==U5.getR()&&R1.getG()==U5.getG()&&R1.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 L3.getR()==U5.getR()&&L3.getG()==U5.getG()&&L3.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 R3.getR()==U5.getR()&&R3.getG()==U5.getG()&&R3.getB()==U5.getB()
							 )
						 {
							 r();
							 U();
							 _r();
							 U();
							 R();
							 _U();
							 _R();
							 U();
							 R();
							 _U();
							 _R();
							 r();
							 _U();
							 _r();
							 displayBox->AppendText("r   U   r'  U   R   U'  R'  U   R   U'  R'  r   U'  r'  ");
							 continue;
						 }
						 if(L1.getR()==U5.getR()&&L1.getG()==U5.getG()&&L1.getB()==U5.getB()&&//19
							 U2.getR()==U5.getR()&&U2.getG()==U5.getG()&&U2.getB()==U5.getB()&&
							 R1.getR()==U5.getR()&&R1.getG()==U5.getG()&&R1.getB()==U5.getB()&&
							 L2.getR()==U5.getR()&&L2.getG()==U5.getG()&&L2.getB()==U5.getB()&&
							 R2.getR()==U5.getR()&&R2.getG()==U5.getG()&&R2.getB()==U5.getB()&&
							 L3.getR()==U5.getR()&&L3.getG()==U5.getG()&&L3.getB()==U5.getB()&&
							 U8.getR()==U5.getR()&&U8.getG()==U5.getG()&&U8.getB()==U5.getB()&&
							 R3.getR()==U5.getR()&&R3.getG()==U5.getG()&&R3.getB()==U5.getB()
							 )
						 {
							 R();
							 U180();
							 R180();
							 _U();
							 R();
							 _U();
							 _R();
							 U180();
							 F();
							 R();
							 _F();
							 displayBox->AppendText("R   U2  R2  U'  R   U'  R'  U2  F   R   F'  ");
							 continue;
						 }
						 if(B1.getR()==U5.getR()&&B1.getG()==U5.getG()&&B1.getB()==U5.getB()&&//20
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 R1.getR()==U5.getR()&&R1.getG()==U5.getG()&&R1.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 U7.getR()==U5.getR()&&U7.getG()==U5.getG()&&U7.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 F3.getR()==U5.getR()&&F3.getG()==U5.getG()&&F3.getB()==U5.getB()
							 )
						 {
							 r();
							 _U();
							 _r();
							 _U();
							 r();
							 U();
							 _r();
							 _y();
							 _R();
							 U();
							 R();
							 displayBox->AppendText("r   U'  r'  U'  r   U   r'  y'  R'  U   R   ");
							 continue;
						 }
						 if(L1.getR()==U5.getR()&&L1.getG()==U5.getG()&&L1.getB()==U5.getB()&&//21
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 B3.getR()==U5.getR()&&B3.getG()==U5.getG()&&B3.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 F1.getR()==U5.getR()&&F1.getG()==U5.getG()&&F1.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 U9.getR()==U5.getR()&&U9.getG()==U5.getG()&&U9.getB()==U5.getB()
							 )
						 {
							 _R();
							 F();
							 R();
							 U();
							 _R();
							 _F();
							 R();
							 _y();
							 R();
							 U();
							 _R();
							 displayBox->AppendText("R'  F   R   U   R'  F'  R   y'  R   U   R'  ");
							 continue;
						 }
						 if(B1.getR()==U5.getR()&&B1.getG()==U5.getG()&&B1.getB()==U5.getB()&&//22
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 R1.getR()==U5.getR()&&R1.getG()==U5.getG()&&R1.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 L3.getR()==U5.getR()&&L3.getG()==U5.getG()&&L3.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 U9.getR()==U5.getR()&&U9.getG()==U5.getG()&&U9.getB()==U5.getB()
							 )
						 {
							 _r();
							 _U();
							 r();
							 _R();
							 _U();
							 R();
							 U();
							 _r();
							 U();
							 r();
							 displayBox->AppendText("r'  U'  r   R'  U'  R   U   r'  U   r   ");
							 continue;
						 }
						 if(L1.getR()==U5.getR()&&L1.getG()==U5.getG()&&L1.getB()==U5.getB()&&//23
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 U3.getR()==U5.getR()&&U3.getG()==U5.getG()&&U3.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 F1.getR()==U5.getR()&&F1.getG()==U5.getG()&&F1.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 R3.getR()==U5.getR()&&R3.getG()==U5.getG()&&R3.getB()==U5.getB()
							 )
						 {
							 r();
							 U();
							 _r();
							 R();
							 U();
							 _R();
							 _U();
							 r();
							 _U();
							 _r();
							 displayBox->AppendText("r   U   r'  R   U   R'  U'  r   U'  r'  ");
							 continue;
						 }
						 if(B1.getR()==U5.getR()&&B1.getG()==U5.getG()&&B1.getB()==U5.getB()&&//24
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 U3.getR()==U5.getR()&&U3.getG()==U5.getG()&&U3.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 F1.getR()==U5.getR()&&F1.getG()==U5.getG()&&F1.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 U9.getR()==U5.getR()&&U9.getG()==U5.getG()&&U9.getB()==U5.getB()
							 )
						 {
							 R();
							 U();
							 _R();
							 _U();
							 _R();
							 F();
							 R();
							 _F();
							 displayBox->AppendText("R   U   R'  U'  R'  F   R   F'  ");
							 continue;
						 }
						 if(L1.getR()==U5.getR()&&L1.getG()==U5.getG()&&L1.getB()==U5.getB()&&//25
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 U3.getR()==U5.getR()&&U3.getG()==U5.getG()&&U3.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 L3.getR()==U5.getR()&&L3.getG()==U5.getG()&&L3.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 U9.getR()==U5.getR()&&U9.getG()==U5.getG()&&U9.getB()==U5.getB()
							 )
						 {
							 F();
							 R();
							 U();
							 _R();
							 _U();
							 _F();
							 displayBox->AppendText("F   R   U   R'  U'  F'  ");
							 continue;
						 }
						 if(U1.getR()==U5.getR()&&U1.getG()==U5.getG()&&U1.getB()==U5.getB()&&//26
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 U3.getR()==U5.getR()&&U3.getG()==U5.getG()&&U3.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 U7.getR()==U5.getR()&&U7.getG()==U5.getG()&&U7.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 U9.getR()==U5.getR()&&U9.getG()==U5.getG()&&U9.getB()==U5.getB()
							 )
						 {
							 R();
							 U();
							 _R();
							 _U();
							 r();
							 _R();
							 U();
							 R();
							 _U();
							 _r();
							 displayBox->AppendText("R   U   R'  U'  r   R'  U   R   U'  r'  ");
							 continue;
						 }
						 if(U1.getR()==U5.getR()&&U1.getG()==U5.getG()&&U1.getB()==U5.getB()&&//27
							 U2.getR()==U5.getR()&&U2.getG()==U5.getG()&&U2.getB()==U5.getB()&&
							 U3.getR()==U5.getR()&&U3.getG()==U5.getG()&&U3.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 R2.getR()==U5.getR()&&R2.getG()==U5.getG()&&R2.getB()==U5.getB()&&
							 U7.getR()==U5.getR()&&U7.getG()==U5.getG()&&U7.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 U9.getR()==U5.getR()&&U9.getG()==U5.getG()&&U9.getB()==U5.getB()
							 )
						 {
							 r();
							 U();
							 _R();
							 _U();
							 _r();
							 R();
							 U();
							 R();
							 _U();
							 _R();
							 displayBox->AppendText("r   U   R'  U'  r'  R   U   R   U'  R'  ");
							 continue;
						 }
						 if(B1.getR()==U5.getR()&&B1.getG()==U5.getG()&&B1.getB()==U5.getB()&&//28
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 U3.getR()==U5.getR()&&U3.getG()==U5.getG()&&U3.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 U7.getR()==U5.getR()&&U7.getG()==U5.getG()&&U7.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 R3.getR()==U5.getR()&&R3.getG()==U5.getG()&&R3.getB()==U5.getB()
							 )
						 {
							 r();
							 _U();
							 _r();
							 _U();
							 r();
							 y();
							 R();
							 U();
							 _R();
							 _f();
							 displayBox->AppendText("r   U'  r'  U'  r   y   R   U   R'  f'  ");
							 continue;
						 }
						 if(U1.getR()==U5.getR()&&U1.getG()==U5.getG()&&U1.getB()==U5.getB()&&//29
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 B3.getR()==U5.getR()&&B3.getG()==U5.getG()&&B3.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 L3.getR()==U5.getR()&&L3.getG()==U5.getG()&&L3.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 U9.getR()==U5.getR()&&U9.getG()==U5.getG()&&U9.getB()==U5.getB()
							 )
						 {
							 _R();
							 F();
							 R();
							 U();
							 _R();
							 _U();
							 _F();
							 U();
							 R();
							 displayBox->AppendText("R'  F   R   U   R'  U'  F'  U   R   ");
							 continue;
						 }
						 if(U1.getR()==U5.getR()&&U1.getG()==U5.getG()&&U1.getB()==U5.getB()&&//30
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 U3.getR()==U5.getR()&&U3.getG()==U5.getG()&&U3.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 L3.getR()==U5.getR()&&L3.getG()==U5.getG()&&L3.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 R3.getR()==U5.getR()&&R3.getG()==U5.getG()&&R3.getB()==U5.getB()
							 )
						 {
							 _R();
							 _U();
							 R();
							 U();
							 y();
							 r();
							 U();
							 _R();
							 _U();
							 _r();
							 R();
							 displayBox->AppendText("R'  U'  R   U   y   r   U   R'  U'  r'  R   ");
							 continue;
						 }
						 if(U1.getR()==U5.getR()&&U1.getG()==U5.getG()&&U1.getB()==U5.getB()&&//31
							 U2.getR()==U5.getR()&&U2.getG()==U5.getG()&&U2.getB()==U5.getB()&&
							 R1.getR()==U5.getR()&&R1.getG()==U5.getG()&&R1.getB()==U5.getB()&&
							 L2.getR()==U5.getR()&&L2.getG()==U5.getG()&&L2.getB()==U5.getB()&&
							 R2.getR()==U5.getR()&&R2.getG()==U5.getG()&&R2.getB()==U5.getB()&&
							 U7.getR()==U5.getR()&&U7.getG()==U5.getG()&&U7.getB()==U5.getB()&&
							 U8.getR()==U5.getR()&&U8.getG()==U5.getG()&&U8.getB()==U5.getB()&&
							 R3.getR()==U5.getR()&&R3.getG()==U5.getG()&&R3.getB()==U5.getB()
							 )
						 {
							 _R();
							 _U();
							 _R();
							 F();
							 R();
							 _F();
							 U();
							 R();
							 displayBox->AppendText("R'  U'  R'  F   R   F'  U   R   ");
							 continue;
						 }
						 if(B1.getR()==U5.getR()&&B1.getG()==U5.getG()&&B1.getB()==U5.getB()&&//32
							 U2.getR()==U5.getR()&&U2.getG()==U5.getG()&&U2.getB()==U5.getB()&&
							 U3.getR()==U5.getR()&&U3.getG()==U5.getG()&&U3.getB()==U5.getB()&&
							 L2.getR()==U5.getR()&&L2.getG()==U5.getG()&&L2.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 F1.getR()==U5.getR()&&F1.getG()==U5.getG()&&F1.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 U9.getR()==U5.getR()&&U9.getG()==U5.getG()&&U9.getB()==U5.getB()
							 )
						 {
							 _R();
							 _U();
							 F();
							 U();
							 R();
							 _U();
							 _R();
							 _F();
							 R();
							 displayBox->AppendText("R'  U'  F   U   R   U'  R'  F'  R   ");
							 continue;
						 }
						 if(B1.getR()==U5.getR()&&B1.getG()==U5.getG()&&B1.getB()==U5.getB()&&//33
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 U3.getR()==U5.getR()&&U3.getG()==U5.getG()&&U3.getB()==U5.getB()&&
							 L2.getR()==U5.getR()&&L2.getG()==U5.getG()&&L2.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 F1.getR()==U5.getR()&&F1.getG()==U5.getG()&&F1.getB()==U5.getB()&&
							 U8.getR()==U5.getR()&&U8.getG()==U5.getG()&&U8.getB()==U5.getB()&&
							 U9.getR()==U5.getR()&&U9.getG()==U5.getG()&&U9.getB()==U5.getB()
							 )
						 {
							 R();
							 U();
							 _B();
							 _U();
							 _R();
							 U();
							 R();
							 B();
							 _R();
							 displayBox->AppendText("R   U   B'  U'  R'  U   R   B   R'  ");
							 continue;
						 }
						 if(U1.getR()==U5.getR()&&U1.getG()==U5.getG()&&U1.getB()==U5.getB()&&//34
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 R1.getR()==U5.getR()&&R1.getG()==U5.getG()&&R1.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 R2.getR()==U5.getR()&&R2.getG()==U5.getG()&&R2.getB()==U5.getB()&&
							 U7.getR()==U5.getR()&&U7.getG()==U5.getG()&&U7.getB()==U5.getB()&&
							 U8.getR()==U5.getR()&&U8.getG()==U5.getG()&&U8.getB()==U5.getB()&&
							 R3.getR()==U5.getR()&&R3.getG()==U5.getG()&&R3.getB()==U5.getB()
							 )
						 {
							 _x();
							 _U();
							 _F();
							 _R();
							 F();
							 R();
							 U();
							 x();
							 displayBox->AppendText("x'  U'  F'  R'  F   R   U   x   ");
							 continue;
						 }
						 if(L1.getR()==U5.getR()&&L1.getG()==U5.getG()&&L1.getB()==U5.getB()&&//35
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 U3.getR()==U5.getR()&&U3.getG()==U5.getG()&&U3.getB()==U5.getB()&&
							 L2.getR()==U5.getR()&&L2.getG()==U5.getG()&&L2.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 L3.getR()==U5.getR()&&L3.getG()==U5.getG()&&L3.getB()==U5.getB()&&
							 U8.getR()==U5.getR()&&U8.getG()==U5.getG()&&U8.getB()==U5.getB()&&
							 U9.getR()==U5.getR()&&U9.getG()==U5.getG()&&U9.getB()==U5.getB()
							 )
						 {
							 f();
							 R();
							 U();
							 _R();
							 _U();
							 _f();
							 displayBox->AppendText("f   R   U   R'  U'  f'  ");
							 continue;
						 }
						 if(U1.getR()==U5.getR()&&U1.getG()==U5.getG()&&U1.getB()==U5.getB()&&//36
							 U2.getR()==U5.getR()&&U2.getG()==U5.getG()&&U2.getB()==U5.getB()&&
							 R1.getR()==U5.getR()&&R1.getG()==U5.getG()&&R1.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 R2.getR()==U5.getR()&&R2.getG()==U5.getG()&&R2.getB()==U5.getB()&&
							 F1.getR()==U5.getR()&&F1.getG()==U5.getG()&&F1.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 U9.getR()==U5.getR()&&U9.getG()==U5.getG()&&U9.getB()==U5.getB()
							 )
						 {
							 F();
							 R();
							 _U();
							 _R();
							 _U();
							 R();
							 U();
							 _R();
							 _F();
							 displayBox->AppendText("F   R   U'  R'  U'  R   U   R'  F'  ");
							 continue;
						 }
						 if(U1.getR()==U5.getR()&&U1.getG()==U5.getG()&&U1.getB()==U5.getB()&&//37
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 R1.getR()==U5.getR()&&R1.getG()==U5.getG()&&R1.getB()==U5.getB()&&
							 L2.getR()==U5.getR()&&L2.getG()==U5.getG()&&L2.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 F1.getR()==U5.getR()&&F1.getG()==U5.getG()&&F1.getB()==U5.getB()&&
							 U8.getR()==U5.getR()&&U8.getG()==U5.getG()&&U8.getB()==U5.getB()&&
							 U9.getR()==U5.getR()&&U9.getG()==U5.getG()&&U9.getB()==U5.getB()
							 )
						 {
							 R();
							 U180();
							 R180();
							 F();
							 R();
							 _F();
							 R();
							 U180();
							 _R();
							 displayBox->AppendText("R   U2  R2  F   R   F'  R   U2  R'  ");
							 continue;
						 }
						 if(B1.getR()==U5.getR()&&B1.getG()==U5.getG()&&B1.getB()==U5.getB()&&//38
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 R1.getR()==U5.getR()&&R1.getG()==U5.getG()&&R1.getB()==U5.getB()&&
							 L2.getR()==U5.getR()&&L2.getG()==U5.getG()&&L2.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 L3.getR()==U5.getR()&&L3.getG()==U5.getG()&&L3.getB()==U5.getB()&&
							 U8.getR()==U5.getR()&&U8.getG()==U5.getG()&&U8.getB()==U5.getB()&&
							 U9.getR()==U5.getR()&&U9.getG()==U5.getG()&&U9.getB()==U5.getB()
							 )
						 {
							 _r();
							 U180();
							 R();
							 U();
							 _R();
							 U();
							 r();
							 displayBox->AppendText("r'  U2  R   U   R'  U   r   ");
							 continue;
						 }
						 if(L1.getR()==U5.getR()&&L1.getG()==U5.getG()&&L1.getB()==U5.getB()&&//39
							 U2.getR()==U5.getR()&&U2.getG()==U5.getG()&&U2.getB()==U5.getB()&&
							 U3.getR()==U5.getR()&&U3.getG()==U5.getG()&&U3.getB()==U5.getB()&&
							 L2.getR()==U5.getR()&&L2.getG()==U5.getG()&&L2.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 F1.getR()==U5.getR()&&F1.getG()==U5.getG()&&F1.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 R3.getR()==U5.getR()&&R3.getG()==U5.getG()&&R3.getB()==U5.getB()
							 )
						 {
							 r();
							 U180();
							 _R();
							 _U();
							 R();
							 _U();
							 _r();
							 displayBox->AppendText("r   U2  R'  U'  R   U'  r'  ");
							 continue;
						 }
						 if(U1.getR()==U5.getR()&&U1.getG()==U5.getG()&&U1.getB()==U5.getB()&&//40
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 B3.getR()==U5.getR()&&B3.getG()==U5.getG()&&B3.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 R2.getR()==U5.getR()&&R2.getG()==U5.getG()&&R2.getB()==U5.getB()&&
							 F1.getR()==U5.getR()&&F1.getG()==U5.getG()&&F1.getB()==U5.getB()&&
							 U8.getR()==U5.getR()&&U8.getG()==U5.getG()&&U8.getB()==U5.getB()&&
							 R3.getR()==U5.getR()&&R3.getG()==U5.getG()&&R3.getB()==U5.getB()
							 )
						 {
							 _r();
							 _U();
							 R();
							 _U();
							 _R();
							 U180();
							 r();
							 displayBox->AppendText("r'  U'  R   U'  R'  U2  r   ");
							 continue;
						 }
						 if(B1.getR()==U5.getR()&&B1.getG()==U5.getG()&&B1.getB()==U5.getB()&&//41
							 U2.getR()==U5.getR()&&U2.getG()==U5.getG()&&U2.getB()==U5.getB()&&
							 R1.getR()==U5.getR()&&R1.getG()==U5.getG()&&R1.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 R2.getR()==U5.getR()&&R2.getG()==U5.getG()&&R2.getB()==U5.getB()&&
							 U7.getR()==U5.getR()&&U7.getG()==U5.getG()&&U7.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 F3.getR()==U5.getR()&&F3.getG()==U5.getG()&&F3.getB()==U5.getB()
							 )
						 {
							 r();
							 U();
							 _R();
							 U();
							 R();
							 U180();
							 _r();
							 displayBox->AppendText("r   U   R'  U   R   U2  r'  ");
							 continue;
						 }
						 if(B1.getR()==U5.getR()&&B1.getG()==U5.getG()&&B1.getB()==U5.getB()&&//42
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 R1.getR()==U5.getR()&&R1.getG()==U5.getG()&&R1.getB()==U5.getB()&&
							 L2.getR()==U5.getR()&&L2.getG()==U5.getG()&&L2.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 U7.getR()==U5.getR()&&U7.getG()==U5.getG()&&U7.getB()==U5.getB()&&
							 U8.getR()==U5.getR()&&U8.getG()==U5.getG()&&U8.getB()==U5.getB()&&
							 F3.getR()==U5.getR()&&F3.getG()==U5.getG()&&F3.getB()==U5.getB()
							 )
						 {
							 _r();
							 R180();
							 U();
							 _R();
							 U();
							 R();
							 U180();
							 _R();
							 U();
							 _R();
							 r();
							 displayBox->AppendText("r'  R2  U   R'  U   R   U2  R'  U   R'  r   ");
							 continue;
						 }
						 if(U1.getR()==U5.getR()&&U1.getG()==U5.getG()&&U1.getB()==U5.getB()&&//43
							 U2.getR()==U5.getR()&&U2.getG()==U5.getG()&&U2.getB()==U5.getB()&&
							 B3.getR()==U5.getR()&&B3.getG()==U5.getG()&&B3.getB()==U5.getB()&&
							 L2.getR()==U5.getR()&&L2.getG()==U5.getG()&&L2.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 F1.getR()==U5.getR()&&F1.getG()==U5.getG()&&F1.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 R3.getR()==U5.getR()&&R3.getG()==U5.getG()&&R3.getB()==U5.getB()
							 )
						 {
							 r();
							 R180();
							 _U();
							 R();
							 _U();
							 _R();
							 U180();
							 R();
							 _U();
							 R();
							 _r();
							 displayBox->AppendText("r   R2  U'  R   U'  R'  U2  R   U'  R   r'  ");
							 continue;
						 }
						 if(L1.getR()==U5.getR()&&L1.getG()==U5.getG()&&L1.getB()==U5.getB()&&//44
							 U2.getR()==U5.getR()&&U2.getG()==U5.getG()&&U2.getB()==U5.getB()&&
							 B3.getR()==U5.getR()&&B3.getG()==U5.getG()&&B3.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 R2.getR()==U5.getR()&&R2.getG()==U5.getG()&&R2.getB()==U5.getB()&&
							 F1.getR()==U5.getR()&&F1.getG()==U5.getG()&&F1.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 U9.getR()==U5.getR()&&U9.getG()==U5.getG()&&U9.getB()==U5.getB()
							 )
						 {
							 _R();
							 _U();
							 R();
							 _y();
							 l();
							 _U();
							 _R();
							 F();
							 R();
							 U();
							 _R();
							 x();
							 displayBox->AppendText("R'  U'  R   y'  l   U'  R'  F   R   U   R'  x   ");
							 continue;
						 }
						 if(B1.getR()==U5.getR()&&B1.getG()==U5.getG()&&B1.getB()==U5.getB()&&//45
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 U3.getR()==U5.getR()&&U3.getG()==U5.getG()&&U3.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 R2.getR()==U5.getR()&&R2.getG()==U5.getG()&&R2.getB()==U5.getB()&&
							 L3.getR()==U5.getR()&&L3.getG()==U5.getG()&&L3.getB()==U5.getB()&&
							 U8.getR()==U5.getR()&&U8.getG()==U5.getG()&&U8.getB()==U5.getB()&&
							 F3.getR()==U5.getR()&&F3.getG()==U5.getG()&&F3.getB()==U5.getB()
							 )
						 {
							 R();
							 U();
							 _R();
							 U();
							 _R();
							 F();
							 R();
							 _F();
							 R();
							 U180();
							 _R();
							 displayBox->AppendText("R   U   R'  U   R'  F   R   F'  R   U2  R'  ");
							 continue;
						 }
						 if(B1.getR()==U5.getR()&&B1.getG()==U5.getG()&&B1.getB()==U5.getB()&&//46
							 U2.getR()==U5.getR()&&U2.getG()==U5.getG()&&U2.getB()==U5.getB()&&
							 B3.getR()==U5.getR()&&B3.getG()==U5.getG()&&B3.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 R2.getR()==U5.getR()&&R2.getG()==U5.getG()&&R2.getB()==U5.getB()&&
							 F1.getR()==U5.getR()&&F1.getG()==U5.getG()&&F1.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 F3.getR()==U5.getR()&&F3.getG()==U5.getG()&&F3.getB()==U5.getB()
							 )
						 {
							 r();
							 U180();
							 _R();
							 _U();
							 R();
							 U();
							 _R();
							 _U();
							 R();
							 _U();
							 _r();
							 displayBox->AppendText("r   U2  R'  U'  R   U   R'  U'  R   U'  r'  ");
							 continue;
						 }
						 if(L1.getR()==U5.getR()&&L1.getG()==U5.getG()&&L1.getB()==U5.getB()&&//47
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 B3.getR()==U5.getR()&&B3.getG()==U5.getG()&&B3.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 R2.getR()==U5.getR()&&R2.getG()==U5.getG()&&R2.getB()==U5.getB()&&
							 L3.getR()==U5.getR()&&L3.getG()==U5.getG()&&L3.getB()==U5.getB()&&
							 U8.getR()==U5.getR()&&U8.getG()==U5.getG()&&U8.getB()==U5.getB()&&
							 F3.getR()==U5.getR()&&F3.getG()==U5.getG()&&F3.getB()==U5.getB()
							 )
						 {
							 _B();
							 _R();
							 _U();
							 R();
							 U();
							 _R();
							 _U();
							 R();
							 U();
							 B();
							 displayBox->AppendText("B'  R'  U'  R   U   R'  U'  R   U   B   ");
							 continue;
						 }
						 if(B1.getR()==U5.getR()&&B1.getG()==U5.getG()&&B1.getB()==U5.getB()&&//48
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 B3.getR()==U5.getR()&&B3.getG()==U5.getG()&&B3.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 R2.getR()==U5.getR()&&R2.getG()==U5.getG()&&R2.getB()==U5.getB()&&
							 F1.getR()==U5.getR()&&F1.getG()==U5.getG()&&F1.getB()==U5.getB()&&
							 U8.getR()==U5.getR()&&U8.getG()==U5.getG()&&U8.getB()==U5.getB()&&
							 F3.getR()==U5.getR()&&F3.getG()==U5.getG()&&F3.getB()==U5.getB()
							 )
						 {
							 _r();
							 U180();
							 R();
							 U();
							 _R();
							 _U();
							 R();
							 U();
							 _R();
							 U();
							 r();
							 displayBox->AppendText("r'  U2  R   U   R'  U'  R   U   R'  U   r   ");
							 continue;
						 }
						 if(L1.getR()==U5.getR()&&L1.getG()==U5.getG()&&L1.getB()==U5.getB()&&//49
							 U2.getR()==U5.getR()&&U2.getG()==U5.getG()&&U2.getB()==U5.getB()&&
							 B3.getR()==U5.getR()&&B3.getG()==U5.getG()&&B3.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 R2.getR()==U5.getR()&&R2.getG()==U5.getG()&&R2.getB()==U5.getB()&&
							 L3.getR()==U5.getR()&&L3.getG()==U5.getG()&&L3.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 F3.getR()==U5.getR()&&F3.getG()==U5.getG()&&F3.getB()==U5.getB()
							 )
						 {
							 F();
							 R();
							 U();
							 _R();
							 _U();
							 R();
							 U();
							 _R();
							 _U();
							 _F();
							 displayBox->AppendText("F   R   U   R'  U'  R   U   R'  U'  F'  ");
							 continue;
						 }
						 if(B1.getR()==U5.getR()&&B1.getG()==U5.getG()&&B1.getB()==U5.getB()&&//50
							 U2.getR()==U5.getR()&&U2.getG()==U5.getG()&&U2.getB()==U5.getB()&&
							 R1.getR()==U5.getR()&&R1.getG()==U5.getG()&&R1.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 R2.getR()==U5.getR()&&R2.getG()==U5.getG()&&R2.getB()==U5.getB()&&
							 F1.getR()==U5.getR()&&F1.getG()==U5.getG()&&F1.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 R3.getR()==U5.getR()&&R3.getG()==U5.getG()&&R3.getB()==U5.getB()
							 )
						 {
							 _R();
							 F();
							 R180();
							 _B();
							 R180();
							 _F();
							 R180();
							 B();
							 _R();
							 displayBox->AppendText("R'  F   R2  B'  R2  F'  R2  B   R'  ");
							 continue;
						 }
						 if(B1.getR()==U5.getR()&&B1.getG()==U5.getG()&&B1.getB()==U5.getB()&&//51
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 R1.getR()==U5.getR()&&R1.getG()==U5.getG()&&R1.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 R2.getR()==U5.getR()&&R2.getG()==U5.getG()&&R2.getB()==U5.getB()&&
							 F1.getR()==U5.getR()&&F1.getG()==U5.getG()&&F1.getB()==U5.getB()&&
							 U8.getR()==U5.getR()&&U8.getG()==U5.getG()&&U8.getB()==U5.getB()&&
							 R3.getR()==U5.getR()&&R3.getG()==U5.getG()&&R3.getB()==U5.getB()
							 )
						 {
							 R();
							 _B();
							 R180();
							 F();
							 R180();
							 B();
							 R180();
							 _F();
							 R();
							 displayBox->AppendText("R   B'  R2  F   R2  B   R2  F'  R   ");
							 continue;
						 }
						 if(U1.getR()==U5.getR()&&U1.getG()==U5.getG()&&U1.getB()==U5.getB()&&//52
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 U3.getR()==U5.getR()&&U3.getG()==U5.getG()&&U3.getB()==U5.getB()&&
							 L2.getR()==U5.getR()&&L2.getG()==U5.getG()&&L2.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 L3.getR()==U5.getR()&&L3.getG()==U5.getG()&&L3.getB()==U5.getB()&&
							 U8.getR()==U5.getR()&&U8.getG()==U5.getG()&&U8.getB()==U5.getB()&&
							 R3.getR()==U5.getR()&&R3.getG()==U5.getG()&&R3.getB()==U5.getB()
							 )
						 {
							 R180();
							 U();
							 _R();
							 _B();
							 R();
							 _U();
							 R180();
							 U();
							 R();
							 B();
							 _R();
							 displayBox->AppendText("R2  U   R'  B'  R   U'  R2  U   R   B   R'  ");
							 continue;
						 }
						 if(B1.getR()==U5.getR()&&B1.getG()==U5.getG()&&B1.getB()==U5.getB()&&//53
							 U2.getR()==U5.getR()&&U2.getG()==U5.getG()&&U2.getB()==U5.getB()&&
							 U3.getR()==U5.getR()&&U3.getG()==U5.getG()&&U3.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 R2.getR()==U5.getR()&&R2.getG()==U5.getG()&&R2.getB()==U5.getB()&&
							 F1.getR()==U5.getR()&&F1.getG()==U5.getG()&&F1.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 U9.getR()==U5.getR()&&U9.getG()==U5.getG()&&U9.getB()==U5.getB()
							 )
						 {
							 R();
							 U();
							 _R();
							 _U();
							 R();
							 _U();
							 _R();
							 _F();
							 _U();
							 F();
							 R();
							 U();
							 _R();
							 displayBox->AppendText("R   U   R'  U'  R   U'  R'  F'  U'  F   R   U   R'  ");
							 continue;
						 }
						 if(B1.getR()==U5.getR()&&B1.getG()==U5.getG()&&B1.getB()==U5.getB()&&//54
							 U2.getR()==U5.getR()&&U2.getG()==U5.getG()&&U2.getB()==U5.getB()&&
							 B3.getR()==U5.getR()&&B3.getG()==U5.getG()&&B3.getB()==U5.getB()&&
							 L2.getR()==U5.getR()&&L2.getG()==U5.getG()&&L2.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 U7.getR()==U5.getR()&&U7.getG()==U5.getG()&&U7.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 U9.getR()==U5.getR()&&U9.getG()==U5.getG()&&U9.getB()==U5.getB()
							 )
						 {
							 _R();
							 U();
							 R();
							 U180();
							 _R();
							 _d();
							 _L();
							 U();
							 L();
							 U();
							 F();
							 displayBox->AppendText("R'  U   R   U2  R'  d'  L'  U   L   U   F   ");
							 continue;
						 }
						 if(U1.getR()==U5.getR()&&U1.getG()==U5.getG()&&U1.getB()==U5.getB()&&//55
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 U3.getR()==U5.getR()&&U3.getG()==U5.getG()&&U3.getB()==U5.getB()&&
							 L2.getR()==U5.getR()&&L2.getG()==U5.getG()&&L2.getB()==U5.getB()&&
							 U6.getR()==U5.getR()&&U6.getG()==U5.getG()&&U6.getB()==U5.getB()&&
							 F1.getR()==U5.getR()&&F1.getG()==U5.getG()&&F1.getB()==U5.getB()&&
							 U8.getR()==U5.getR()&&U8.getG()==U5.getG()&&U8.getB()==U5.getB()&&
							 F3.getR()==U5.getR()&&F3.getG()==U5.getG()&&F3.getB()==U5.getB()
							 )
						 {
							 R();
							 _U();
							 _R();
							 U180();
							 R();
							 U();
							 y();
							 R();
							 _U();
							 _R();
							 _U();
							 _F();
							 displayBox->AppendText("R   U'  R'  U2  R   U   y   R   U'  R'  U'  F'  ");
							 continue;
						 }
						 if(B1.getR()==U5.getR()&&B1.getG()==U5.getG()&&B1.getB()==U5.getB()&&//56
							 U2.getR()==U5.getR()&&U2.getG()==U5.getG()&&U2.getB()==U5.getB()&&
							 U3.getR()==U5.getR()&&U3.getG()==U5.getG()&&U3.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 R2.getR()==U5.getR()&&R2.getG()==U5.getG()&&R2.getB()==U5.getB()&&
							 U7.getR()==U5.getR()&&U7.getG()==U5.getG()&&U7.getB()==U5.getB()&&
							 F2.getR()==U5.getR()&&F2.getG()==U5.getG()&&F2.getB()==U5.getB()&&
							 R3.getR()==U5.getR()&&R3.getG()==U5.getG()&&R3.getB()==U5.getB()
							 )
						 {
							 R();
							 U();
							 _R();
							 U();
							 R();
							 _U();
							 _R();
							 _U();
							 _R();
							 F();
							 R();
							 _F();
							 displayBox->AppendText("R   U   R'  U   R   U'  R'  U'  R'  F   R   F'  ");
							 continue;
						 }
						 if(U1.getR()==U5.getR()&&U1.getG()==U5.getG()&&U1.getB()==U5.getB()&&//57
							 B2.getR()==U5.getR()&&B2.getG()==U5.getG()&&B2.getB()==U5.getB()&&
							 R1.getR()==U5.getR()&&R1.getG()==U5.getG()&&R1.getB()==U5.getB()&&
							 U4.getR()==U5.getR()&&U4.getG()==U5.getG()&&U4.getB()==U5.getB()&&
							 R2.getR()==U5.getR()&&R2.getG()==U5.getG()&&R2.getB()==U5.getB()&&
							 F1.getR()==U5.getR()&&F1.getG()==U5.getG()&&F1.getB()==U5.getB()&&
							 U8.getR()==U5.getR()&&U8.getG()==U5.getG()&&U8.getB()==U5.getB()&&
							 U9.getR()==U5.getR()&&U9.getG()==U5.getG()&&U9.getB()==U5.getB()
							 )
						 {
							 _R();
							 _U();
							 R();
							 _U();
							 _R();
							 U();
							 R();
							 U();
							 R();
							 _B();
							 _R();
							 B();
							 displayBox->AppendText("R'  U'  R   U'  R'  U   R   U   R   B'  R'  B   ");
							 continue;
						 }
						 if(i<3)
						 {
							 U();
							 displayBox->AppendText("U   ");
							 ++i;
							 continue;
						 }
						 displayBox->Text="    魔方涂色错误！请重新涂色。";
						 PLL=true;
						 OK=true;
						 break;
					 }
				 }
				 if((!isPLL())&&(!PLL))
				 {
					 int i=0;
					 while(!isPLL())
					 {
						 if(B1.getR()==B3.getR()&&B1.getG()==B3.getG()&&B1.getB()==B3.getB()&&//1
							 B2.getR()==B3.getR()&&B2.getG()==B3.getG()&&B2.getB()==B3.getB()&&
							 L1.getR()==F2.getR()&&L1.getG()==F2.getG()&&L1.getB()==F2.getB()&&
							 L3.getR()==F2.getR()&&L3.getG()==F2.getG()&&L3.getB()==F2.getB()&&
							 F1.getR()==R2.getR()&&F1.getG()==R2.getG()&&F1.getB()==R2.getB()&&
							 F3.getR()==R2.getR()&&F3.getG()==R2.getG()&&F3.getB()==R2.getB()&&
							 R1.getR()==L2.getR()&&R1.getG()==L2.getG()&&R1.getB()==L2.getB()&&
							 R3.getR()==L2.getR()&&R3.getG()==L2.getG()&&R3.getB()==L2.getB()
							 )
						 {
							 R180();
							 U();
							 R();
							 U();
							 _R();
							 _U();
							 _R();
							 _U();
							 _R();
							 U();
							 _R();
							 displayBox->AppendText("R2  U   R   U   R'  U'  R'  U'  R'  U   R'  ");
							 continue;
						 }
						 if(B1.getR()==B3.getR()&&B1.getG()==B3.getG()&&B1.getB()==B3.getB()&&//2
							 B2.getR()==B3.getR()&&B2.getG()==B3.getG()&&B2.getB()==B3.getB()&&
							 L1.getR()==R2.getR()&&L1.getG()==R2.getG()&&L1.getB()==R2.getB()&&
							 L3.getR()==R2.getR()&&L3.getG()==R2.getG()&&L3.getB()==R2.getB()&&
							 F1.getR()==L2.getR()&&F1.getG()==L2.getG()&&F1.getB()==L2.getB()&&
							 F3.getR()==L2.getR()&&F3.getG()==L2.getG()&&F3.getB()==L2.getB()&&
							 R1.getR()==F2.getR()&&R1.getG()==F2.getG()&&R1.getB()==F2.getB()&&
							 R3.getR()==F2.getR()&&R3.getG()==F2.getG()&&R3.getB()==F2.getB()
							 )
						 {
							 R();
							 _U();
							 R();
							 U();
							 R();
							 U();
							 R();
							 _U();
							 _R();
							 _U();
							 R180();
							 displayBox->AppendText("R   U'  R   U   R   U   R   U'  R'  U'  R2  ");
							 continue;
						 }
						 if(B1.getR()==R3.getR()&&B1.getG()==R3.getG()&&B1.getB()==R3.getB()&&//3
							 B2.getR()==R3.getR()&&B2.getG()==R3.getG()&&B2.getB()==R3.getB()&&
							 L1.getR()==R1.getR()&&L1.getG()==R1.getG()&&L1.getB()==R1.getB()&&
							 L2.getR()==R1.getR()&&L2.getG()==R1.getG()&&L2.getB()==R1.getB()&&
							 F2.getR()==B3.getR()&&F2.getG()==B3.getG()&&F2.getB()==B3.getB()&&
							 L3.getR()==B3.getR()&&L3.getG()==B3.getG()&&L3.getB()==B3.getB()&&
							 R2.getR()==F3.getR()&&R2.getG()==F3.getG()&&R2.getB()==F3.getB()&&
							 F1.getR()==F3.getR()&&F1.getG()==F3.getG()&&F1.getB()==F3.getB()
							 )
						 {
							 l();
							 _U();
							 R();
							 D180();
							 _R();
							 U();
							 R();
							 D180();
							 R180();
							 x();
							 displayBox->AppendText("l   U'  R   D2  R'  U   R   D2  R2  x   ");
							 continue;
						 }
						 if(B1.getR()==F1.getR()&&B1.getG()==F1.getG()&&B1.getB()==F1.getB()&&//4
							 B2.getR()==F1.getR()&&B2.getG()==F1.getG()&&B2.getB()==F1.getB()&&
							 L1.getR()==F3.getR()&&L1.getG()==F3.getG()&&L1.getB()==F3.getB()&&
							 L2.getR()==F3.getR()&&L2.getG()==F3.getG()&&L2.getB()==F3.getB()&&
							 F2.getR()==R1.getR()&&F2.getG()==R1.getG()&&F2.getB()==R1.getB()&&
							 R3.getR()==R1.getR()&&R3.getG()==R1.getG()&&R3.getB()==R1.getB()&&
							 R2.getR()==L3.getR()&&R2.getG()==L3.getG()&&R2.getB()==L3.getB()&&
							 B3.getR()==L3.getR()&&B3.getG()==L3.getG()&&B3.getB()==L3.getB()
							 )
						 {
							 _x();
							 R180();
							 D180();
							 _R();
							 _U();
							 R();
							 D180();
							 _R();
							 U();
							 _R();
							 x();
							 displayBox->AppendText("x'  R2  D2  R'  U'  R   D2  R'  U   R'  x   ");
							 continue;
						 }
						 if(B3.getR()==F3.getR()&&B3.getG()==F3.getG()&&B3.getB()==F3.getB()&&//5
							 B2.getR()==F3.getR()&&B2.getG()==F3.getG()&&B2.getB()==F3.getB()&&
							 R3.getR()==F2.getR()&&R3.getG()==F2.getG()&&R3.getB()==F2.getB()&&
							 B1.getR()==F2.getR()&&B1.getG()==F2.getG()&&B1.getB()==F2.getB()&&
							 L1.getR()==R2.getR()&&L1.getG()==R2.getG()&&L1.getB()==R2.getB()&&
							 L3.getR()==R2.getR()&&L3.getG()==R2.getG()&&L3.getB()==R2.getB()&&
							 F1.getR()==L2.getR()&&F1.getG()==L2.getG()&&F1.getB()==L2.getB()&&
							 R1.getR()==L2.getR()&&R1.getG()==L2.getG()&&R1.getB()==L2.getB()
							 )
						 {
							 R180();
							 _u();
							 R();
							 _U();
							 R();
							 U();
							 _R();
							 u();
							 R180();
							 f();
							 _R();
							 _f();
							 displayBox->AppendText("R2  u'  R   U'  R   U   R'  u   R2  f   R'  f'  ");
							 continue;
						 }
						 if(L1.getR()==F2.getR()&&L1.getG()==F2.getG()&&L1.getB()==F2.getB()&&//6
							 L3.getR()==F2.getR()&&L3.getG()==F2.getG()&&L3.getB()==F2.getB()&&
							 R1.getR()==B2.getR()&&R1.getG()==B2.getG()&&R1.getB()==B2.getB()&&
							 F1.getR()==B2.getR()&&F1.getG()==B2.getG()&&F1.getB()==B2.getB()&&
							 B3.getR()==L2.getR()&&B3.getG()==L2.getG()&&B3.getB()==L2.getB()&&
							 F3.getR()==L2.getR()&&F3.getG()==L2.getG()&&F3.getB()==L2.getB()&&
							 R2.getR()==B1.getR()&&R2.getG()==B1.getG()&&R2.getB()==B1.getB()&&
							 R3.getR()==B1.getR()&&R3.getG()==B1.getG()&&R3.getB()==B1.getB()
							 )
						 {
							 R();
							 U();
							 _R();
							 _y();
							 R180();
							 _u();
							 R();
							 _U();
							 _R();
							 U();
							 _R();
							 u();
							 R180();
							 displayBox->AppendText("R   U   R'  y'  R2  u'  R   U'  R'  U   R'  u   R2  ");
							 continue;
						 }
						 if(L1.getR()==R2.getR()&&L1.getG()==R2.getG()&&L1.getB()==R2.getB()&&//7
							 L3.getR()==R2.getR()&&L3.getG()==R2.getG()&&L3.getB()==R2.getB()&&
							 R1.getR()==B2.getR()&&R1.getG()==B2.getG()&&R1.getB()==B2.getB()&&
							 F1.getR()==B2.getR()&&F1.getG()==B2.getG()&&F1.getB()==B2.getB()&&
							 F2.getR()==B3.getR()&&F2.getG()==B3.getG()&&F2.getB()==B3.getB()&&
							 F3.getR()==B3.getR()&&F3.getG()==B3.getG()&&F3.getB()==B3.getB()&&
							 L2.getR()==B1.getR()&&L2.getG()==B1.getG()&&L2.getB()==B1.getB()&&
							 R3.getR()==B1.getR()&&R3.getG()==B1.getG()&&R3.getB()==B1.getB()
							 )
						 {
							 R180();
							 u();
							 _R();
							 U();
							 _R();
							 _U();
							 R();
							 _u();
							 R180();
							 _F();
							 U();
							 F();
							 displayBox->AppendText("R2  u   R'  U   R'  U'  R   u'  R2  F'  U   F   ");
							 continue;
						 }
						 if(F3.getR()==L2.getR()&&F3.getG()==L2.getG()&&F3.getB()==L2.getB()&&//8
							 B3.getR()==L2.getR()&&B3.getG()==L2.getG()&&B3.getB()==L2.getB()&&
							 R3.getR()==F2.getR()&&R3.getG()==F2.getG()&&R3.getB()==F2.getB()&&
							 B1.getR()==F2.getR()&&B1.getG()==F2.getG()&&B1.getB()==F2.getB()&&
							 L1.getR()==B2.getR()&&L1.getG()==B2.getG()&&L1.getB()==B2.getB()&&
							 L3.getR()==B2.getR()&&L3.getG()==B2.getG()&&L3.getB()==B2.getB()&&
							 R2.getR()==F1.getR()&&R2.getG()==F1.getG()&&R2.getB()==F1.getB()&&
							 R1.getR()==F1.getR()&&R1.getG()==F1.getG()&&R1.getB()==F1.getB()
							 )
						 {
							 _R();
							 _d();
							 F();
							 R180();
							 u();
							 _R();
							 U();
							 R();
							 _U();
							 R();
							 _u();
							 R180();
							 displayBox->AppendText("R'  d'  F   R2  u   R'  U   R   U'  R   u'  R2   ");
							 continue;
						 }
						 if(B1.getR()==R3.getR()&&B1.getG()==R3.getG()&&B1.getB()==R3.getB()&&//9
							 B2.getR()==R3.getR()&&B2.getG()==R3.getG()&&B2.getB()==R3.getB()&&
							 L1.getR()==L3.getR()&&L1.getG()==L3.getG()&&L1.getB()==L3.getB()&&
							 L2.getR()==L3.getR()&&L2.getG()==L3.getG()&&L2.getB()==L3.getB()&&
							 F1.getR()==R1.getR()&&F1.getG()==R1.getG()&&F1.getB()==R1.getB()&&
							 R2.getR()==R1.getR()&&R2.getG()==R1.getG()&&R2.getB()==R1.getB()&&
							 F3.getR()==F2.getR()&&F3.getG()==F2.getG()&&F3.getB()==F2.getB()&&
							 B3.getR()==F2.getR()&&B3.getG()==F2.getG()&&B3.getB()==F2.getB()
							 )
						 {
							 R();
							 U();
							 _R();
							 _F();
							 R();
							 U();
							 _R();
							 _U();
							 _R();
							 F();
							 R180();
							 _U();
							 _R();
							 _U();
							 displayBox->AppendText("R   U   R'  F'  R   U   R'  U'  R'  F   R2  U'  R'  U'  ");
							 continue;
						 }
						 if(B1.getR()==B3.getR()&&B1.getG()==B3.getG()&&B1.getB()==B3.getB()&&//10
							 B2.getR()==B3.getR()&&B2.getG()==B3.getG()&&B2.getB()==B3.getB()&&
							 L1.getR()==F3.getR()&&L1.getG()==F3.getG()&&L1.getB()==F3.getB()&&
							 L2.getR()==F3.getR()&&L2.getG()==F3.getG()&&L2.getB()==F3.getB()&&
							 R3.getR()==R2.getR()&&R3.getG()==R2.getG()&&R3.getB()==R2.getB()&&
							 L3.getR()==R2.getR()&&L3.getG()==R2.getG()&&L3.getB()==R2.getB()&&
							 R1.getR()==F2.getR()&&R1.getG()==F2.getG()&&R1.getB()==F2.getB()&&
							 F1.getR()==F2.getR()&&F1.getG()==F2.getG()&&F1.getB()==F2.getB()
							 )
						 {
							 z();
							 _U();
							 R();
							 _D();
							 R180();
							 U();
							 _R();
							 _U();
							 R180();
							 U();
							 _z();
							 R();
							 _U();
							 displayBox->AppendText("z   U'  R   D'  R2  U   R'  U'  R2  U   z'  R   U'  ");
							 continue;
						 }
						 if(R1.getR()==B2.getR()&&R1.getG()==B2.getG()&&R1.getB()==B2.getB()&&//11
							 L1.getR()==B2.getR()&&L1.getG()==B2.getG()&&L1.getB()==B2.getB()&&
							 L3.getR()==B3.getR()&&L3.getG()==B3.getG()&&L3.getB()==B3.getB()&&
							 L2.getR()==B3.getR()&&L2.getG()==B3.getG()&&L2.getB()==B3.getB()&&
							 F1.getR()==R2.getR()&&F1.getG()==R2.getG()&&F1.getB()==R2.getB()&&
							 F3.getR()==R2.getR()&&F3.getG()==R2.getG()&&F3.getB()==R2.getB()&&
							 R3.getR()==F2.getR()&&R3.getG()==F2.getG()&&R3.getB()==F2.getB()&&
							 B1.getR()==F2.getR()&&B1.getG()==F2.getG()&&B1.getB()==F2.getB()
							 )
						 {
							 _R();
							 U180();
							 R();
							 U180();
							 _R();
							 F();
							 R();
							 U();
							 _R();
							 _U();
							 _R();
							 _F();
							 R180();
							 _U();
							 displayBox->AppendText("R'  U2  R   U2  R'  F   R   U   R'  U'  R'  F'  R2  U'  ");
							 continue;
						 }
						 if(B1.getR()==R2.getR()&&B1.getG()==R2.getG()&&B1.getB()==R2.getB()&&//12
							 B3.getR()==R2.getR()&&B3.getG()==R2.getG()&&B3.getB()==R2.getB()&&
							 L1.getR()==F3.getR()&&L1.getG()==F3.getG()&&L1.getB()==F3.getB()&&
							 L2.getR()==F3.getR()&&L2.getG()==F3.getG()&&L2.getB()==F3.getB()&&
							 R3.getR()==F2.getR()&&R3.getG()==F2.getG()&&R3.getB()==F2.getB()&&
							 L3.getR()==F2.getR()&&L3.getG()==F2.getG()&&L3.getB()==F2.getB()&&
							 R1.getR()==B2.getR()&&R1.getG()==B2.getG()&&R1.getB()==B2.getB()&&
							 F1.getR()==B2.getR()&&F1.getG()==B2.getG()&&F1.getB()==B2.getB()
							 )
						 {
							 R();
							 U180();
							 _R();
							 U180();
							 R();
							 _B();
							 _R();
							 _U();
							 R();
							 U();
							 R();
							 B();
							 R180();
							 U();
							 displayBox->AppendText("R   U2  R'  U2  R   B'  R'  U'  R   U   R   B   R2  U   ");
							 continue;
						 }
						 if(B1.getR()==R3.getR()&&B1.getG()==R3.getG()&&B1.getB()==R3.getB()&&//13
							 B2.getR()==R3.getR()&&B2.getG()==R3.getG()&&B2.getB()==R3.getB()&&
							 L1.getR()==R2.getR()&&L1.getG()==R2.getG()&&L1.getB()==R2.getB()&&
							 L3.getR()==R2.getR()&&L3.getG()==R2.getG()&&L3.getB()==R2.getB()&&
							 F1.getR()==R1.getR()&&F1.getG()==R1.getG()&&F1.getB()==R1.getB()&&
							 F2.getR()==R1.getR()&&F2.getG()==R1.getG()&&F2.getB()==R1.getB()&&
							 B3.getR()==L2.getR()&&B3.getG()==L2.getG()&&B3.getB()==L2.getB()&&
							 F3.getR()==L2.getR()&&F3.getG()==L2.getG()&&F3.getB()==L2.getB()
							 )
						 {
							 R();
							 U();
							 _R();
							 _U();
							 _R();
							 F();
							 R180();
							 _U();
							 _R();
							 _U();
							 R();
							 U();
							 _R();
							 _F();
							 displayBox->AppendText("R   U   R'  U'  R'  F   R2  U'  R'  U'  R   U   R'  F'  ");
							 continue;
						 }
						 if(F3.getR()==L2.getR()&&F3.getG()==L2.getG()&&F3.getB()==L2.getB()&&//14
							 B3.getR()==L2.getR()&&B3.getG()==L2.getG()&&B3.getB()==L2.getB()&&
							 R3.getR()==B2.getR()&&R3.getG()==B2.getG()&&R3.getB()==B2.getB()&&
							 L3.getR()==B2.getR()&&L3.getG()==B2.getG()&&L3.getB()==B2.getB()&&
							 F1.getR()==B1.getR()&&F1.getG()==B1.getG()&&F1.getB()==B1.getB()&&
							 F2.getR()==B1.getR()&&F2.getG()==B1.getG()&&F2.getB()==B1.getB()&&
							 R1.getR()==L1.getR()&&R1.getG()==L1.getG()&&R1.getB()==L1.getB()&&
							 R2.getR()==L1.getR()&&R2.getG()==L1.getG()&&R2.getB()==L1.getB()
							 )
						 {
							 F();
							 R();
							 _U();
							 _R();
							 _U();
							 R();
							 U();
							 _R();
							 _F();
							 R();
							 U();
							 _R();
							 _U();
							 _R();
							 F();
							 R();
							 _F();
							 displayBox->AppendText("F   R   U'  R'  U'  R   U   R'  F'  R   U   R'  U'  R'  F   R   F'  ");
							 continue;
						 }
						 if(B1.getR()==F2.getR()&&B1.getG()==F2.getG()&&B1.getB()==F2.getB()&&//15
							 F1.getR()==F2.getR()&&F1.getG()==F2.getG()&&F1.getB()==F2.getB()&&
							 L1.getR()==R1.getR()&&L1.getG()==R1.getG()&&L1.getB()==R1.getB()&&
							 L2.getR()==R1.getR()&&L2.getG()==R1.getG()&&L2.getB()==R1.getB()&&
							 B3.getR()==B2.getR()&&B3.getG()==B2.getG()&&B3.getB()==B2.getB()&&
							 F3.getR()==B2.getR()&&F3.getG()==B2.getG()&&F3.getB()==B2.getB()&&
							 R3.getR()==L3.getR()&&R3.getG()==L3.getG()&&R3.getB()==L3.getB()&&
							 R2.getR()==L3.getR()&&R2.getG()==L3.getG()&&R2.getB()==L3.getB()
							 )
						 {
							 z();
							 _U();
							 R();
							 _D();
							 R180();
							 U();
							 _R();
							 _U();
							 _z();
							 R();
							 U();
							 _R();
							 z();
							 R180();
							 U();
							 _R();
							 _z();
							 R();
							 _U();
							 displayBox->AppendText("z   U'  R   D'  R2  U   R'  U'  z'  R   U   R'  z   R2  U   R'  z'  R   U'  ");
							 continue;
						 }
						 if(F3.getR()==F2.getR()&&F3.getG()==F2.getG()&&F3.getB()==F2.getB()&&//16
							 B3.getR()==F2.getR()&&B3.getG()==F2.getG()&&B3.getB()==F2.getB()&&
							 L3.getR()==R3.getR()&&L3.getG()==R3.getG()&&L3.getB()==R3.getB()&&
							 L2.getR()==R3.getR()&&L2.getG()==R3.getG()&&L2.getB()==R3.getB()&&
							 F1.getR()==B2.getR()&&F1.getG()==B2.getG()&&F1.getB()==B2.getB()&&
							 B1.getR()==B2.getR()&&B1.getG()==B2.getG()&&B1.getB()==B2.getB()&&
							 R1.getR()==L1.getR()&&R1.getG()==L1.getG()&&R1.getB()==L1.getB()&&
							 R2.getR()==L1.getR()&&R2.getG()==L1.getG()&&R2.getB()==L1.getB()
							 )
						 {
							 L();
							 _U();
							 R();
							 U180();
							 _r();
							 F();
							 r();
							 _R();
							 _U();
							 R();
							 U180();
							 _r();
							 F();
							 _R();
							 F();
							 x();
							 displayBox->AppendText("L   U'  R   U2  r'  F   r   R'  U'  R   U2  r'  F   R'  F   x   ");
							 continue;
						 }
						 if(B1.getR()==L2.getR()&&B1.getG()==L2.getG()&&B1.getB()==L2.getB()&&//17
							 B3.getR()==L2.getR()&&B3.getG()==L2.getG()&&B3.getB()==L2.getB()&&
							 L3.getR()==B2.getR()&&L3.getG()==B2.getG()&&L3.getB()==B2.getB()&&
							 L1.getR()==B2.getR()&&L1.getG()==B2.getG()&&L1.getB()==B2.getB()&&
							 F1.getR()==R2.getR()&&F1.getG()==R2.getG()&&F1.getB()==R2.getB()&&
							 F3.getR()==R2.getR()&&F3.getG()==R2.getG()&&F3.getB()==R2.getB()&&
							 R1.getR()==F2.getR()&&R1.getG()==F2.getG()&&R1.getB()==F2.getB()&&
							 R3.getR()==F2.getR()&&R3.getG()==F2.getG()&&R3.getB()==F2.getB()
							 )
						 {
							 U();
							 _R();
							 _U();
							 R();
							 _U();
							 R();
							 U();
							 R();
							 _U();
							 _R();
							 U();
							 R();
							 U();
							 R180();
							 _U();
							 _R();
							 U();
							 displayBox->AppendText("U   R'  U'  R   U'  R   U   R   U'  R'  U   R   U   R2  U'  R'  U   ");
							 continue;
						 }
						 if(F3.getR()==R2.getR()&&F3.getG()==R2.getG()&&F3.getB()==R2.getB()&&//18
							 B3.getR()==R2.getR()&&B3.getG()==R2.getG()&&B3.getB()==R2.getB()&&
							 L3.getR()==R3.getR()&&L3.getG()==R3.getG()&&L3.getB()==R3.getB()&&
							 L2.getR()==R3.getR()&&L2.getG()==R3.getG()&&L2.getB()==R3.getB()&&
							 F1.getR()==B1.getR()&&F1.getG()==B1.getG()&&F1.getB()==B1.getB()&&
							 F2.getR()==B1.getR()&&F2.getG()==B1.getG()&&F2.getB()==B1.getB()&&
							 R1.getR()==B2.getR()&&R1.getG()==B2.getG()&&R1.getB()==B2.getB()&&
							 L1.getR()==B2.getR()&&L1.getG()==B2.getG()&&L1.getB()==B2.getB()
							 )
						 {
							 _R();
							 U();
							 _R();
							 _d();
							 x180();
							 _R();
							 U();
							 _R();
							 _U();
							 R180();
							 y();
							 _l();
							 _U();
							 R();
							 U();
							 R();
							 x();
							 displayBox->AppendText("R'  U   R'  d'  x2  R'  U   R'  U'  R2  y   l'  U'  R   U   R   x   ");
							 continue;
						 }
						 if(L3.getR()==B2.getR()&&L3.getG()==B2.getG()&&L3.getB()==B2.getB()&&//19
							 R3.getR()==B2.getR()&&R3.getG()==B2.getG()&&R3.getB()==B2.getB()&&
							 F1.getR()==L2.getR()&&F1.getG()==L2.getG()&&F1.getB()==L2.getB()&&
							 B1.getR()==L2.getR()&&B1.getG()==L2.getG()&&B1.getB()==L2.getB()&&
							 L1.getR()==F2.getR()&&L1.getG()==F2.getG()&&L1.getB()==F2.getB()&&
							 R1.getR()==F2.getR()&&R1.getG()==F2.getG()&&R1.getB()==F2.getB()&&
							 B3.getR()==R2.getR()&&B3.getG()==R2.getG()&&B3.getB()==R2.getB()&&
							 F3.getR()==R2.getR()&&F3.getG()==R2.getG()&&F3.getB()==R2.getB()
							 )
						 {
							 L();
							 l();
							 U();
							 _R();
							 D();
							 R();
							 _U();
							 _r();
							 _R();
							 F();
							 r();
							 _D();
							 _r();
							 _F();
							 x180();
							 displayBox->AppendText("L   l   U   R'  D   R   U'  r'  R'  F   r   D'  r'  F'  x2  ");
							 continue;
						 }
						 if(B1.getR()==F2.getR()&&B1.getG()==F2.getG()&&B1.getB()==F2.getB()&&//20
							 R3.getR()==F2.getR()&&R3.getG()==F2.getG()&&R3.getB()==F2.getB()&&
							 L1.getR()==L2.getR()&&L1.getG()==L2.getG()&&L1.getB()==L2.getB()&&
							 L3.getR()==L2.getR()&&L3.getG()==L2.getG()&&L3.getB()==L2.getB()&&
							 F1.getR()==B2.getR()&&F1.getG()==B2.getG()&&F1.getB()==B2.getB()&&
							 R1.getR()==B2.getR()&&R1.getG()==B2.getG()&&R1.getB()==B2.getB()&&
							 B3.getR()==R2.getR()&&B3.getG()==R2.getG()&&B3.getB()==R2.getB()&&
							 F3.getR()==R2.getR()&&F3.getG()==R2.getG()&&F3.getB()==R2.getB()
							 )
						 {
							 _U();
							 _R();
							 U();
							 R();
							 _U();
							 R180();
							 _F();
							 z();
							 _R();
							 F();
							 R();
							 D();
							 _z();
							 x();
							 U();
							 _R();
							 _U();
							 R180();
							 _x();
							 displayBox->AppendText("U'  R'  U   R   U'  R2  F'  z   R'  F   R   D   z'  x   U   R'  U'  R2  x'  ");
							 continue;
						 }
						 if(B1.getR()==F2.getR()&&B1.getG()==F2.getG()&&B1.getB()==F2.getB()&&//21
							 B3.getR()==F2.getR()&&B3.getG()==F2.getG()&&B3.getB()==F2.getB()&&
							 L1.getR()==R2.getR()&&L1.getG()==R2.getG()&&L1.getB()==R2.getB()&&
							 L3.getR()==R2.getR()&&L3.getG()==R2.getG()&&L3.getB()==R2.getB()&&
							 F1.getR()==B2.getR()&&F1.getG()==B2.getG()&&F1.getB()==B2.getB()&&
							 F3.getR()==B2.getR()&&F3.getG()==B2.getG()&&F3.getB()==B2.getB()&&
							 R1.getR()==L2.getR()&&R1.getG()==L2.getG()&&R1.getB()==L2.getB()&&
							 R3.getR()==L2.getR()&&R3.getG()==L2.getG()&&R3.getB()==L2.getB()
							 )
						 {
							 M180();
							 _U();
							 M180();
							 U180();
							 M180();
							 _U();
							 M180();
							 displayBox->AppendText("M2  U'  M2  U2  M2  U'  M2  ");
							 continue;
						 }
						 if(i<3)
						 {
							 U();
							 displayBox->AppendText("U   ");
							 ++i;
							 continue;
						 }
						 displayBox->Text="    魔方涂色错误！请重新涂色。";
						 OK=true;
						 break;
					 }
				 }
				 if((!isOK())&&(!OK))
				 {
					 int i=0;
					 while(!isOK())
					 {
						 if(i<3)
						 {
							 U();
							 displayBox->AppendText("U   ");
							 ++i;
							 continue;
						 }
						 displayBox->Text="    魔方涂色错误！请重新涂色。";
						 break;
					 }
				 }
				 F1.setR(F1R);//恢复之前涂的色
				 F1.setG(F1G);
				 F1.setB(F1B);
				 F2.setR(F2R);
				 F2.setG(F2G);
				 F2.setB(F2B);
				 F3.setR(F3R);
				 F3.setG(F3G);
				 F3.setB(F3B);
				 F4.setR(F4R);
				 F4.setG(F4G);
				 F4.setB(F4B);
				 F5.setR(F5R);
				 F5.setG(F5G);
				 F5.setB(F5B);
				 F6.setR(F6R);
				 F6.setG(F6G);
				 F6.setB(F6B);
				 F7.setR(F7R);
				 F7.setG(F7G);
				 F7.setB(F7B);
				 F8.setR(F8R);
				 F8.setG(F8G);
				 F8.setB(F8B);
				 F9.setR(F9R);
				 F9.setG(F9G);
				 F9.setB(F9B);

				 B1.setR(B1R);
				 B1.setG(B1G);
				 B1.setB(B1B);
				 B2.setR(B2R);
				 B2.setG(B2G);
				 B2.setB(B2B);
				 B3.setR(B3R);
				 B3.setG(B3G);
				 B3.setB(B3B);
				 B4.setR(B4R);
				 B4.setG(B4G);
				 B4.setB(B4B);
				 B5.setR(B5R);
				 B5.setG(B5G);
				 B5.setB(B5B);
				 B6.setR(B6R);
				 B6.setG(B6G);
				 B6.setB(B6B);
				 B7.setR(B7R);
				 B7.setG(B7G);
				 B7.setB(B7B);
				 B8.setR(B8R);
				 B8.setG(B8G);
				 B8.setB(B8B);
				 B9.setR(B9R);
				 B9.setG(B9G);
				 B9.setB(B9B);

				 L1.setR(L1R);
				 L1.setG(L1G);
				 L1.setB(L1B);
				 L2.setR(L2R);
				 L2.setG(L2G);
				 L2.setB(L2B);
				 L3.setR(L3R);
				 L3.setG(L3G);
				 L3.setB(L3B);
				 L4.setR(L4R);
				 L4.setG(L4G);
				 L4.setB(L4B);
				 L5.setR(L5R);
				 L5.setG(L5G);
				 L5.setB(L5B);
				 L6.setR(L6R);
				 L6.setG(L6G);
				 L6.setB(L6B);
				 L7.setR(L7R);
				 L7.setG(L7G);
				 L7.setB(L7B);
				 L8.setR(L8R);
				 L8.setG(L8G);
				 L8.setB(L8B);
				 L9.setR(L9R);
				 L9.setG(L9G);
				 L9.setB(L9B);

				 R1.setR(R1R);
				 R1.setG(R1G);
				 R1.setB(R1B);
				 R2.setR(R2R);
				 R2.setG(R2G);
				 R2.setB(R2B);
				 R3.setR(R3R);
				 R3.setG(R3G);
				 R3.setB(R3B);
				 R4.setR(R4R);
				 R4.setG(R4G);
				 R4.setB(R4B);
				 R5.setR(R5R);
				 R5.setG(R5G);
				 R5.setB(R5B);
				 R6.setR(R6R);
				 R6.setG(R6G);
				 R6.setB(R6B);
				 R7.setR(R7R);
				 R7.setG(R7G);
				 R7.setB(R7B);
				 R8.setR(R8R);
				 R8.setG(R8G);
				 R8.setB(R8B);
				 R9.setR(R9R);
				 R9.setG(R9G);
				 R9.setB(R9B);

				 U1.setR(U1R);
				 U1.setG(U1G);
				 U1.setB(U1B);
				 U2.setR(U2R);
				 U2.setG(U2G);
				 U2.setB(U2B);
				 U3.setR(U3R);
				 U3.setG(U3G);
				 U3.setB(U3B);
				 U4.setR(U4R);
				 U4.setG(U4G);
				 U4.setB(U4B);
				 U5.setR(U5R);
				 U5.setG(U5G);
				 U5.setB(U5B);
				 U6.setR(U6R);
				 U6.setG(U6G);
				 U6.setB(U6B);
				 U7.setR(U7R);
				 U7.setG(U7G);
				 U7.setB(U7B);
				 U8.setR(U8R);
				 U8.setG(U8G);
				 U8.setB(U8B);
				 U9.setR(U9R);
				 U9.setG(U9G);
				 U9.setB(U9B);

				 D1.setR(D1R);
				 D1.setG(D1G);
				 D1.setB(D1B);
				 D2.setR(D2R);
				 D2.setG(D2G);
				 D2.setB(D2B);
				 D3.setR(D3R);
				 D3.setG(D3G);
				 D3.setB(D3B);
				 D4.setR(D4R);
				 D4.setG(D4G);
				 D4.setB(D4B);
				 D5.setR(D5R);
				 D5.setG(D5G);
				 D5.setB(D5B);
				 D6.setR(D6R);
				 D6.setG(D6G);
				 D6.setB(D6B);
				 D7.setR(D7R);
				 D7.setG(D7G);
				 D7.setB(D7B);
				 D8.setR(D8R);
				 D8.setG(D8G);
				 D8.setB(D8B);
				 D9.setR(D9R);
				 D9.setG(D9G);
				 D9.setB(D9B);

				 ii=0;
				 displayBox->Focus();
				 displayBox->SelectAll();
				 formulalength=displayBox->SelectionLength;
			 }
	private: System::Void 位置重置ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 xRot=15;//位置重置
				 yRot=-45;
				 zRot=-15;
				 this->display();
			 }
	private: System::Void displayBox_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 displayBox->Focus();
				 displayBox->Select(ii,2);
			 }
	private: System::Void ToRight_Click(System::Object^  sender, System::EventArgs^  e) {
				 displayBox->Focus();
				 if(ii<formulalength)
				 {
					 ii+=4;
				 }
				 displayBox->Select(ii,2);
				 if(displayBox->SelectedText=="R ")
				 {
					 R();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="R'")
				 {
					 _R();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="R2")
				 {
					 R180();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="L ")
				 {
					 L();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="L'")
				 {
					 _L();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="L2")
				 {
					 L180();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="U ")
				 {
					 U();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="U'")
				 {
					 _U();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="U2")
				 {
					 U180();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="D ")
				 {
					 D();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="D'")
				 {
					 _D();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="D2")
				 {
					 D180();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="F ")
				 {
					 F();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="F'")
				 {
					 _F();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="F2")
				 {
					 F180();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="B ")
				 {
					 B();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="B'")
				 {
					 _B();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="B2")
				 {
					 B180();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="r ")
				 {
					 r();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="r'")
				 {
					 _r();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="r2")
				 {
					 r180();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="l ")
				 {
					 l();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="l'")
				 {
					 _l();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="l2")
				 {
					 l180();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="u ")
				 {
					 u();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="u'")
				 {
					 _u();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="u2")
				 {
					 u180();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="d ")
				 {
					 d();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="d'")
				 {
					 _d();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="d2")
				 {
					 d180();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="f ")
				 {
					 f();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="f'")
				 {
					 _f();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="f2")
				 {
					 f180();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="b ")
				 {
					 b();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="b'")
				 {
					 _b();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="b2")
				 {
					 b180();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="x ")
				 {
					 x();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="x'")
				 {
					 _x();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="x2")
				 {
					 x180();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="y ")
				 {
					 y();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="y'")
				 {
					 _y();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="y2")
				 {
					 y180();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="z ")
				 {
					 z();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="z'")
				 {
					 _z();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="z2")
				 {
					 z180();
					 this->display();
				 }
				 else if(displayBox->SelectedText=="M2")
				 {
					 M180();
					 this->display();
				 }
			 }
	private: System::Void ToLeft_Click(System::Object^  sender, System::EventArgs^  e) {
				 displayBox->Focus();
				 if(ii<formulalength)
				 {
					 if(displayBox->SelectedText=="R ")
					 {
						 _R();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="R'")
					 {
						 R();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="R2")
					 {
						 R180();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="L ")
					 {
						 _L();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="L'")
					 {
						 L();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="L2")
					 {
						 L180();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="U ")
					 {
						 _U();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="U'")
					 {
						 U();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="U2")
					 {
						 U180();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="D ")
					 {
						 _D();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="D'")
					 {
						 D();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="D2")
					 {
						 D180();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="F ")
					 {
						 _F();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="F'")
					 {
						 F();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="F2")
					 {
						 F180();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="B ")
					 {
						 _B();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="B'")
					 {
						 B();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="B2")
					 {
						 B180();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="r ")
					 {
						 _r();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="r'")
					 {
						 r();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="r2")
					 {
						 r180();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="l ")
					 {
						 _l();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="l'")
					 {
						 l();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="l2")
					 {
						 l180();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="u ")
					 {
						 _u();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="u'")
					 {
						 u();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="u2")
					 {
						 u180();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="d ")
					 {
						 _d();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="d'")
					 {
						 d();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="d2")
					 {
						 d180();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="f ")
					 {
						 _f();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="f'")
					 {
						 f();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="f2")
					 {
						 f180();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="b ")
					 {
						 _b();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="b'")
					 {
						 b();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="b2")
					 {
						 b180();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="x ")
					 {
						 _x();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="x'")
					 {
						 x();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="x2")
					 {
						 x180();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="y ")
					 {
						 _y();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="y'")
					 {
						 y();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="y2")
					 {
						 y180();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="z ")
					 {
						 _z();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="z'")
					 {
						 z();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="z2")
					 {
						 z180();
						 this->display();
					 }
					 else if(displayBox->SelectedText=="M2")
					 {
						 M180();
						 this->display();
					 }
					 if(ii>0)
					 {
						 ii-=4;
					 }
					 displayBox->Select(ii,2);
				 }
				 if(ii>=formulalength)
				 {
					 ii-=4;
					 displayBox->Select(ii,2);
				 }
			 }
	private: System::Void 涂色版重置ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 FF1->BackColor=System::Drawing::Color::Blue;//涂色板重置
				 FF2->BackColor=System::Drawing::Color::Blue;
				 FF3->BackColor=System::Drawing::Color::Blue;
				 FF4->BackColor=System::Drawing::Color::Blue;
				 FF5->BackColor=System::Drawing::Color::Blue;
				 FF6->BackColor=System::Drawing::Color::Blue;
				 FF7->BackColor=System::Drawing::Color::Blue;
				 FF8->BackColor=System::Drawing::Color::Blue;
				 FF9->BackColor=System::Drawing::Color::Blue;

				 BB1->BackColor=System::Drawing::Color::Green;
				 BB2->BackColor=System::Drawing::Color::Green;
				 BB3->BackColor=System::Drawing::Color::Green;
				 BB4->BackColor=System::Drawing::Color::Green;
				 BB5->BackColor=System::Drawing::Color::Green;
				 BB6->BackColor=System::Drawing::Color::Green;
				 BB7->BackColor=System::Drawing::Color::Green;
				 BB8->BackColor=System::Drawing::Color::Green;
				 BB9->BackColor=System::Drawing::Color::Green;

				 LL1->BackColor=System::Drawing::Color::OrangeRed;
				 LL2->BackColor=System::Drawing::Color::OrangeRed;
				 LL3->BackColor=System::Drawing::Color::OrangeRed;
				 LL4->BackColor=System::Drawing::Color::OrangeRed;
				 LL5->BackColor=System::Drawing::Color::OrangeRed;
				 LL6->BackColor=System::Drawing::Color::OrangeRed;
				 LL7->BackColor=System::Drawing::Color::OrangeRed;
				 LL8->BackColor=System::Drawing::Color::OrangeRed;
				 LL9->BackColor=System::Drawing::Color::OrangeRed;

				 RR1->BackColor=System::Drawing::Color::Red;
				 RR2->BackColor=System::Drawing::Color::Red;
				 RR3->BackColor=System::Drawing::Color::Red;
				 RR4->BackColor=System::Drawing::Color::Red;
				 RR5->BackColor=System::Drawing::Color::Red;
				 RR6->BackColor=System::Drawing::Color::Red;
				 RR7->BackColor=System::Drawing::Color::Red;
				 RR8->BackColor=System::Drawing::Color::Red;
				 RR9->BackColor=System::Drawing::Color::Red;

				 UU1->BackColor=System::Drawing::Color::Yellow;
				 UU2->BackColor=System::Drawing::Color::Yellow;
				 UU3->BackColor=System::Drawing::Color::Yellow;
				 UU4->BackColor=System::Drawing::Color::Yellow;
				 UU5->BackColor=System::Drawing::Color::Yellow;
				 UU6->BackColor=System::Drawing::Color::Yellow;
				 UU7->BackColor=System::Drawing::Color::Yellow;
				 UU8->BackColor=System::Drawing::Color::Yellow;
				 UU9->BackColor=System::Drawing::Color::Yellow;

				 DD1->BackColor=System::Drawing::Color::White;
				 DD2->BackColor=System::Drawing::Color::White;
				 DD3->BackColor=System::Drawing::Color::White;
				 DD4->BackColor=System::Drawing::Color::White;
				 DD5->BackColor=System::Drawing::Color::White;
				 DD6->BackColor=System::Drawing::Color::White;
				 DD7->BackColor=System::Drawing::Color::White;
				 DD8->BackColor=System::Drawing::Color::White;
				 DD9->BackColor=System::Drawing::Color::White;
			 }
	private: System::Void Disorganize_Click(System::Object^  sender, System::EventArgs^  e) {
				 srand(time(0));
				 for(int i=0;i<1000;++i)
				 {
					 switch(rand()%37)
					 {
					 case 0:
						 M180();
						 break;
					 case 1:
						 R();
						 break;
					 case 2:
						 _R();
						 break;
					 case 3:
						 R180();
						 break;
					 case 4:
						 L();
						 break;
					 case 5:
						 _L();
						 break;
					 case 6:
						 L180();
						 break;
					 case 7:
						 F();
						 break;
					 case 8:
						 _F();
						 break;
					 case 9:
						 F180();
						 break;
					 case 10:
						 B();
						 break;
					 case 11:
						 _B();
						 break;
					 case 12:
						 B180();
						 break;
					 case 13:
						 U();
						 break;
					 case 14:
						 _U();
						 break;
					 case 15:
						 U180();
						 break;
					 case 16:
						 D();
						 break;
					 case 17:
						 _D();
						 break;
					 case 18:
						 D180();
						 break;
					 case 19:
						 r();
						 break;
					 case 20:
						 _r();
						 break;
					 case 21:
						 r180();
						 break;
					 case 22:
						 l();
						 break;
					 case 23:
						 _l();
						 break;
					 case 24:
						 l180();
						 break;
					 case 25:
						 f();
						 break;
					 case 26:
						 _f();
						 break;
					 case 27:
						 f180();
						 break;
					 case 28:
						 b();
						 break;
					 case 29:
						 _b();
						 break;
					 case 30:
						 b180();
						 break;
					 case 31:
						 u();
						 break;
					 case 32:
						 _u();
						 break;
					 case 33:
						 u180();
						 break;
					 case 34:
						 d();
						 break;
					 case 35:
						 _d();
						 break;
					 case 36:
						 d180();
						 break;
					 }
				 }
				 this->display();
				 F1R=F1.getR();
				 F1G=F1.getG();
				 F1B=F1.getB();
				 F2R=F2.getR();
				 F2G=F2.getG();
				 F2B=F2.getB();
				 F3R=F3.getR();
				 F3G=F3.getG();
				 F3B=F3.getB();
				 F4R=F4.getR();
				 F4G=F4.getG();
				 F4B=F4.getB();
				 F5R=F5.getR();
				 F5G=F5.getG();
				 F5B=F5.getB();
				 F6R=F6.getR();
				 F6G=F6.getG();
				 F6B=F6.getB();
				 F7R=F7.getR();
				 F7G=F7.getG();
				 F7B=F7.getB();
				 F8R=F8.getR();
				 F8G=F8.getG();
				 F8B=F8.getB();
				 F9R=F9.getR();
				 F9G=F9.getG();
				 F9B=F9.getB();

				 B1R=B1.getR();
				 B1G=B1.getG();
				 B1B=B1.getB();
				 B2R=B2.getR();
				 B2G=B2.getG();
				 B2B=B2.getB();
				 B3R=B3.getR();
				 B3G=B3.getG();
				 B3B=B3.getB();
				 B4R=B4.getR();
				 B4G=B4.getG();
				 B4B=B4.getB();
				 B5R=B5.getR();
				 B5G=B5.getG();
				 B5B=B5.getB();
				 B6R=B6.getR();
				 B6G=B6.getG();
				 B6B=B6.getB();
				 B7R=B7.getR();
				 B7G=B7.getG();
				 B7B=B7.getB();
				 B8R=B8.getR();
				 B8G=B8.getG();
				 B8B=B8.getB();
				 B9R=B9.getR();
				 B9G=B9.getG();
				 B9B=B9.getB();

				 L1R=L1.getR();
				 L1G=L1.getG();
				 L1B=L1.getB();
				 L2R=L2.getR();
				 L2G=L2.getG();
				 L2B=L2.getB();
				 L3R=L3.getR();
				 L3G=L3.getG();
				 L3B=L3.getB();
				 L4R=L4.getR();
				 L4G=L4.getG();
				 L4B=L4.getB();
				 L5R=L5.getR();
				 L5G=L5.getG();
				 L5B=L5.getB();
				 L6R=L6.getR();
				 L6G=L6.getG();
				 L6B=L6.getB();
				 L7R=L7.getR();
				 L7G=L7.getG();
				 L7B=L7.getB();
				 L8R=L8.getR();
				 L8G=L8.getG();
				 L8B=L8.getB();
				 L9R=L9.getR();
				 L9G=L9.getG();
				 L9B=L9.getB();

				 R1R=R1.getR();
				 R1G=R1.getG();
				 R1B=R1.getB();
				 R2R=R2.getR();
				 R2G=R2.getG();
				 R2B=R2.getB();
				 R3R=R3.getR();
				 R3G=R3.getG();
				 R3B=R3.getB();
				 R4R=R4.getR();
				 R4G=R4.getG();
				 R4B=R4.getB();
				 R5R=R5.getR();
				 R5G=R5.getG();
				 R5B=R5.getB();
				 R6R=R6.getR();
				 R6G=R6.getG();
				 R6B=R6.getB();
				 R7R=R7.getR();
				 R7G=R7.getG();
				 R7B=R7.getB();
				 R8R=R8.getR();
				 R8G=R8.getG();
				 R8B=R8.getB();
				 R9R=R9.getR();
				 R9G=R9.getG();
				 R9B=R9.getB();

				 U1R=U1.getR();
				 U1G=U1.getG();
				 U1B=U1.getB();
				 U2R=U2.getR();
				 U2G=U2.getG();
				 U2B=U2.getB();
				 U3R=U3.getR();
				 U3G=U3.getG();
				 U3B=U3.getB();
				 U4R=U4.getR();
				 U4G=U4.getG();
				 U4B=U4.getB();
				 U5R=U5.getR();
				 U5G=U5.getG();
				 U5B=U5.getB();
				 U6R=U6.getR();
				 U6G=U6.getG();
				 U6B=U6.getB();
				 U7R=U7.getR();
				 U7G=U7.getG();
				 U7B=U7.getB();
				 U8R=U8.getR();
				 U8G=U8.getG();
				 U8B=U8.getB();
				 U9R=U9.getR();
				 U9G=U9.getG();
				 U9B=U9.getB();

				 D1R=D1.getR();
				 D1G=D1.getG();
				 D1B=D1.getB();
				 D2R=D2.getR();
				 D2G=D2.getG();
				 D2B=D2.getB();
				 D3R=D3.getR();
				 D3G=D3.getG();
				 D3B=D3.getB();
				 D4R=D4.getR();
				 D4G=D4.getG();
				 D4B=D4.getB();
				 D5R=D5.getR();
				 D5G=D5.getG();
				 D5B=D5.getB();
				 D6R=D6.getR();
				 D6G=D6.getG();
				 D6B=D6.getB();
				 D7R=D7.getR();
				 D7G=D7.getG();
				 D7B=D7.getB();
				 D8R=D8.getR();
				 D8G=D8.getG();
				 D8B=D8.getB();
				 D9R=D9.getR();
				 D9G=D9.getG();
				 D9B=D9.getB();
			 }
	private: System::Void 帮助ToolStripMenuItem_DropDownOpened(System::Object^  sender, System::EventArgs^  e) {
				 帮助ToolStripMenuItem->ForeColor=System::Drawing::Color::Black;
			 }
	private: System::Void 帮助ToolStripMenuItem_DropDownClosed(System::Object^  sender, System::EventArgs^  e) {
				 帮助ToolStripMenuItem->ForeColor=System::Drawing::Color::MediumSeaGreen;
			 }
	private: System::Void 说明ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 displayBox->Text="  操作说明：\r\n  键盘上 W A S D Z X 键控制魔方整体旋转";
				 displayBox->AppendText("\r\n  公式说明：\r\n  F = front face 前面  B = back face 后面\r\n  R = right face 右面  L = left face 左面\r\n  U = up face 上面    D = down face 下面\r\n  M = middle 右面和左面相夹的中间层");
				 displayBox->AppendText("\r\n  x (整个魔方以 R 的方向转动)\r\n  y (整个魔方以 U 的方向转动)\r\n  z (整个魔方以 F 的方向转动)\r\n  x轴指向右，y轴指向上，z轴指向外。");
				 displayBox->AppendText("\r\n  带 ' 的是逆时针转，如 R' 是逆时针旋转右面。\r\n  不带 ' 的是顺时针旋转，如 U 是顺时针旋转上面。\r\n  注意顺逆时针都是你面对这个面的时候你看到的顺逆时针。\r\n  尤其是 D 要注意，D是你面对底面的时候顺时针转底面，B 则同理。");
				 displayBox->AppendText("\r\n  带 2 的是旋转180度，如 y2 是沿着y轴旋转180度。\r\n  小写的 r  u  f  l  b  d 就是同时旋转两层，比如 r 就是同时顺时针旋转右边两层。");
			 }
	};
}
