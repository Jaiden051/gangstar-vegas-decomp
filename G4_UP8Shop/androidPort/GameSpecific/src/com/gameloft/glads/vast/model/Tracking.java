// Decompiled from classes.dex (SourceFile: Tracking.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast.model;

public class Tracking {
    // Fields
    private com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE event;
    private java.lang.String value;

    // Methods
    public Tracking()
    {
      super();
    }

    public com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE getEvent()
    {
      return this.event;
    }

    public String getValue()
    {
      return this.value;
    }

    public void setEvent(com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE p0)
    {
      this.event = p0;
    }

    public void setValue(String p0)
    {
      this.value = p0;
    }

    public String toString()
    {
      return "Tracking [event=" + this.event + ", value=" + this.value + "]";
    }

}
