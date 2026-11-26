// Decompiled from classes.dex (SourceFile: VASTMediaFile.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast.model;

public class VASTMediaFile {
    // Fields
    private java.lang.String apiFramework;
    private java.math.BigInteger bitrate;
    private java.lang.String delivery;
    private java.math.BigInteger height;
    private java.lang.String id;
    private java.lang.Boolean maintainAspectRatio;
    private java.lang.Boolean scalable;
    private java.lang.String type;
    private java.lang.String value;
    private java.math.BigInteger width;

    // Methods
    public VASTMediaFile()
    {
      super();
    }

    public String getApiFramework()
    {
      return this.apiFramework;
    }

    public java.math.BigInteger getBitrate()
    {
      return this.bitrate;
    }

    public String getDelivery()
    {
      return this.delivery;
    }

    public java.math.BigInteger getHeight()
    {
      return this.height;
    }

    public String getId()
    {
      return this.id;
    }

    public String getType()
    {
      return this.type;
    }

    public String getValue()
    {
      return this.value;
    }

    public java.math.BigInteger getWidth()
    {
      return this.width;
    }

    public Boolean isMaintainAspectRatio()
    {
      return this.maintainAspectRatio;
    }

    public Boolean isScalable()
    {
      return this.scalable;
    }

    public void setApiFramework(String p0)
    {
      this.apiFramework = p0;
    }

    public void setBitrate(java.math.BigInteger p0)
    {
      this.bitrate = p0;
    }

    public void setDelivery(String p0)
    {
      this.delivery = p0;
    }

    public void setHeight(java.math.BigInteger p0)
    {
      this.height = p0;
    }

    public void setId(String p0)
    {
      this.id = p0;
    }

    public void setMaintainAspectRatio(Boolean p0)
    {
      this.maintainAspectRatio = p0;
    }

    public void setScalable(Boolean p0)
    {
      this.scalable = p0;
    }

    public void setType(String p0)
    {
      this.type = p0;
    }

    public void setValue(String p0)
    {
      this.value = p0;
    }

    public void setWidth(java.math.BigInteger p0)
    {
      this.width = p0;
    }

    public String toString()
    {
      return "MediaFile [value="
           + this.value
           + ", id="
           + this.id
           + ", delivery="
           + this.delivery
           + ", type="
           + this.type
           + ", bitrate="
           + this.bitrate
           + ", width="
           + this.width
           + ", height="
           + this.height
           + ", scalable="
           + this.scalable
           + ", maintainAspectRatio="
           + this.maintainAspectRatio
           + ", apiFramework="
           + this.apiFramework
           + "]";
    }

}
