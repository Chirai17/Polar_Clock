//2143

#include <MeggyJrSimple.h>

void setup() 
{
  MeggyJrSimpleSetup();
}

int SecondsCounter = 0;
int MinuteCounter = 0;
int HourCounter = 0;

int x;

void DispSeconds()
{
  x = SecondsCounter - 4;
  
  
  
  if (SecondsCounter < 5) 
  {
    for (int i = 0; i < SecondsCounter; i++)
    {
      DrawPx(4+i,7,Red);
    }
  }
 
  if (SecondsCounter < 12 && SecondsCounter > 5)
  {
    
    for (int i = 0; i < 5; i++)
    {
      DrawPx(4+i,7,Red);
    }
  
    for (int i = 0; i < x; i--)
    {
      DrawPx(7,0+i,Red);
    }
  }
 /* 
  if (SecondsCounter < 19)
  {
    for (int i = 0; i < 4; i++)
    {
      DrawPx(4+i,7,Red);
    }
  
    for (int i = 0; i > 1; i--)
    {
      DrawPx(7,i,Red);
    }
    for (int i = 0; i > SecondsCounter - 11; i--)
    {
       DrawPx(0,7-i,Red);
    }
  }
 
  if (SecondsCounter < 26)
  {
    
  }
  
  if (SecondsCounter < 29)
  {
    
  }
  
  if (SecondsCounter == 28)
  {
    SecondsCounter = 0;
  }*/
}

void loop()
{
  delay(2143);
  DispSeconds();
  SecondsCounter++;
  DisplaySlate();
  ClearSlate();
  
}
