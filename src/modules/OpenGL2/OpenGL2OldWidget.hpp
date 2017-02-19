/*
	QMPlay2 is a video and audio player.
	Copyright (C) 2010-2017  Błażej Szczygieł

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU Lesser General Public License as published
	by the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU Lesser General Public License for more details.

	You should have received a copy of the GNU Lesser General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef OPENGL2OLDWIDGET_HPP
#define OPENGL2OLDWIDGET_HPP

#include <OpenGL2Common.hpp>

#include <QGLWidget>

class OpenGL2OldWidget : public QGLWidget, public OpenGL2Common
{
	Q_OBJECT
public:
	OpenGL2OldWidget();
	~OpenGL2OldWidget();

	QWidget *widget() override;

	bool testGL() override;
	bool setVSync(bool enable) override;
	void updateGL(bool requestDelayed) override;

	void initializeGL() override;
	void paintGL() override;
private:
	void resizeGL(int w, int h) override;

	bool event(QEvent *e) override;
};

#endif // OPENGL2OLDWIDGET_HPP
