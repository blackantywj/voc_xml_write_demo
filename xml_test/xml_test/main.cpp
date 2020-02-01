#include "../tinyxml/tinystr.h"
#include "../tinyxml/tinyxml.h"
#include<stdio.h>
#include <string>
#include <iostream>
using namespace std;

void changeXml();
int main(int argc, char** argv) {
	changeXml();
	return 0;
}


void changeXml()
{
	TiXmlDocument *xdoc = new TiXmlDocument();  //创建一个XML的文档对象。

	TiXmlElement *Ele1 = new TiXmlElement("annotation");  //创建annotation对象
	xdoc->LinkEndChild(Ele1);                           //将annotation对象连接到文档对象

	TiXmlElement *Ele2 = new TiXmlElement("folder"); //创建folfer对象
	Ele1->LinkEndChild(Ele2);   //将folder子对象连接到annotation对象
	TiXmlText* FPQQLSH_text = new TiXmlText("data"); //设置folder值
	Ele2->LinkEndChild(FPQQLSH_text);

	TiXmlElement *Ele3 = new TiXmlElement("filename"); //创建filename对象
	Ele1->LinkEndChild(Ele3);   //将filename子对象连接到annotation对象
	FPQQLSH_text = new TiXmlText("name"); //设置filename值
	Ele3->LinkEndChild(FPQQLSH_text); 

	TiXmlElement *Ele4 = new TiXmlElement("path"); //创建path对象
	Ele1->LinkEndChild(Ele4);   //将path子对象连接到annotaion对象
	FPQQLSH_text = new TiXmlText("path"); //设置值
	Ele4->LinkEndChild(FPQQLSH_text);
	TiXmlElement *Ele5 = new TiXmlElement("source"); //创建source对象
	Ele1->LinkEndChild(Ele5);   //将source子对象连接到annotaion对象
	TiXmlElement* FPQQLSH = new TiXmlElement("database");
	FPQQLSH_text = new TiXmlText("name"); //设置值
	FPQQLSH->LinkEndChild(FPQQLSH_text);
	Ele5->LinkEndChild(FPQQLSH);
	TiXmlElement *Ele6 = new TiXmlElement("size");
	Ele1->LinkEndChild(Ele6);

	TiXmlElement* FPHXZ = new TiXmlElement("width");
	TiXmlText* FPHXZ_text = new TiXmlText("100");
	FPHXZ->LinkEndChild(FPHXZ_text);
	Ele6->LinkEndChild(FPHXZ);

	TiXmlElement* SPBM = new TiXmlElement("height");
	TiXmlText* SPBM_text = new TiXmlText("100");
	SPBM->LinkEndChild(SPBM_text);
	Ele6->LinkEndChild(SPBM);

	TiXmlElement* depth = new TiXmlElement("depth");
	TiXmlText* depth_text = new TiXmlText("100");
	depth->LinkEndChild(depth_text);
	Ele6->LinkEndChild(depth);

	TiXmlElement *Ele7 = new TiXmlElement("segmented");
	Ele1->LinkEndChild(Ele7);
	FPQQLSH_text = new TiXmlText("0"); //设置值
	Ele7->LinkEndChild(FPQQLSH_text);
	TiXmlElement *Ele = new TiXmlElement("object");
	for (int i = 0; i < 4; i++) {  //这里设置目标对象
		Ele = new TiXmlElement("object");
		Ele1->LinkEndChild(Ele);
	    TiXmlElement* name = new TiXmlElement("name");
		TiXmlText* name_text = new TiXmlText("100");
		name->LinkEndChild(name_text);
		Ele->LinkEndChild(name);

	    TiXmlElement* pose = new TiXmlElement("pose");
		TiXmlText* pose_text = new TiXmlText("100");
		pose->LinkEndChild(pose_text);
		Ele->LinkEndChild(pose);

		TiXmlElement* truncated = new TiXmlElement("truncated");
		TiXmlText* truncated_text = new TiXmlText("100");
		truncated->LinkEndChild(truncated_text);
		Ele->LinkEndChild(truncated);

		TiXmlElement* difficult = new TiXmlElement("difficult");
		TiXmlText* difficult_text = new TiXmlText("100");
		difficult->LinkEndChild(difficult_text);
		Ele->LinkEndChild(difficult);
		
		TiXmlElement* bndbox = new TiXmlElement("bndbox");
		TiXmlText* bndbox_text = new TiXmlText("100");
		bndbox->LinkEndChild(bndbox_text);
		Ele->LinkEndChild(bndbox);

		TiXmlElement* xmin = new TiXmlElement("xmin");
		TiXmlText* xmin_text = new TiXmlText("100");
		xmin->LinkEndChild(xmin_text);
		bndbox->LinkEndChild(xmin);

		TiXmlElement* ymin = new TiXmlElement("bndbox");
		TiXmlText* ymin_text = new TiXmlText("100");
		ymin->LinkEndChild(ymin_text);
		bndbox->LinkEndChild(ymin);

		TiXmlElement* xmax = new TiXmlElement("bndbox");
		TiXmlText* xmax_text = new TiXmlText("100");
		xmax->LinkEndChild(xmax_text);
		bndbox->LinkEndChild(xmax);

		TiXmlElement* ymax = new TiXmlElement("bndbox");
		TiXmlText* ymax_text = new TiXmlText("100");
		ymax->LinkEndChild(ymax_text);
		bndbox->LinkEndChild(ymax);
		}

	xdoc->SaveFile("1.xml");//保存到文件
}