#ifndef VIEWWIDGET_H
#define VIEWWIDGET_H

#include <QWidget>
#include<qevent.h>
#include<qpainter.h>
#include "ui_viewwidget.h"
#include"shape.h"
#include"Line.h"
#include"Rect.h"
#include<vector>

class ViewWidget : public QWidget
{
	Q_OBJECT

public:
	ViewWidget(QWidget *parent = 0);
	~ViewWidget();

private:
	Ui::ViewWidget ui;

private:
};

#endif // VIEWWIDGET_H