#pragma once

class Rectangle {
private:
	int m_iWidth;
	int m_iLength;
public:
	Rectangle();
	Rectangle(int width, int length);
	~Rectangle();

	int GetWidth() const { return m_iWidth; };
	int GetLength() const { return m_iLength; };
};