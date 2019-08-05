#include <SFML/Graphics.hpp>
#include <string>

using namespace std;

class Button
{
  private:
  /* список свойств и методов для использования внутри класса */
  int x,y,width,height;
  bool isActive,isFocus;
  string text,imgOnClick,imgOnBtn,imgInactive,imgOnFocus,currentImage;
  
  public:
  /* список методов доступных другим функциям и объектам программы */
  
  Button()
  {
  
  }
  
  //SETTERS AND GETTERS
  void setX(int xIn){x=xIn;}
  int getX(){return x;}
  
  void setY(int yIn){y=yIn;}
  int getY(){return y;}
  
  void setWidth(int widthIn){width=widthIn;}
  int getWidth(){return width;}
  
  void setHeight(int heightIn){height=heightIn;}
  int getHeight(){return height;}
  
  void setIsActive(bool isActiveIn)
  {
	  isActive=isActiveIn;
	  if(isActive)currentImage=imgOnBtn;
	  else currentImage=imgInactive;
  }
  bool getIsActive(){return isActive;}
  
  void setIsFocus(bool isFocusIn){isFocus=isFocusIn;}
  bool getIsFocus(){return isFocus;}
  
  void setText(string textIn){text=textIn;}
  string getText(){return text;}
  
  void setImgOnClick(string ImgOnClickIn){imgOnClick=ImgOnClickIn;}
  string getImgOnClick(){return imgOnClick;}
  
  void setImgOnBtn(string ImgOnBtnIn){imgOnBtn=ImgOnBtnIn;}
  string getImgOnBtn(){return imgOnBtn;}
  
  void setImgInactive(string ImgInactiveIn){imgInactive=ImgInactiveIn;}
  string getImgInactive(){return imgInactive;}
  
  void setImgOnFocus(string imgOnFocusIn){imgOnFocus=imgOnFocusIn;}
  string getImgOnFocus(){return imgOnFocus;}
  //END SETTERS AND GETTERS
  
  bool inFocus(int xIn,int yIn)
  {
	  
    if(isActive)
    {	  
	  isFocus=false;
	  currentImage=imgOnBtn;
	  if((xIn>x and xIn<(x+width))and(yIn>y and yIn<(y+height))) 
	  {
		  isFocus=true;
		  currentImage=imgOnFocus;
	  }
  }
	  return isFocus;
  }
  
  protected:
  /*список средств, доступных при наследовании*/
};
