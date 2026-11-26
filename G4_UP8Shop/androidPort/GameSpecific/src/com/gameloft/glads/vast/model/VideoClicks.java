// Decompiled from classes.dex (SourceFile: VideoClicks.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast.model;

public class VideoClicks {
    // Fields
    private java.lang.String clickThrough;
    private java.util.List clickTracking;
    private java.util.List customClick;

    // Methods
    public VideoClicks()
    {
      super();
    }

    private String listToString(java.util.List<String> p0)
    {
      StringBuffer v2;
      int i;
      v2 = new StringBuffer();
      if ( p0 == null )
        return "";
      for ( i = 0; i < p0.size(); ++i )
        v2.append(((String)p0.get(i)).toString());
      return v2.toString();
    }

    public String getClickThrough()
    {
      return this.clickThrough;
    }

    public java.util.List<String> getClickTracking()
    {
      if ( this.clickTracking == null )
        this.clickTracking = new java.util.ArrayList();
      return this.clickTracking;
    }

    public java.util.List<String> getCustomClick()
    {
      if ( this.customClick == null )
        this.customClick = new java.util.ArrayList();
      return this.customClick;
    }

    public void setClickThrough(String p0)
    {
      this.clickThrough = p0;
    }

    public String toString()
    {
      return "VideoClicks [clickThrough="
           + this.clickThrough
           + ", clickTracking=["
           + this.listToString(this.clickTracking)
           + "], customClick=["
           + this.listToString(this.customClick)
           + "] ]";
    }

}
