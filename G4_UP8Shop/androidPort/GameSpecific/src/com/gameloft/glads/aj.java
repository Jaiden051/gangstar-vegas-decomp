// Decompiled from classes.dex (SourceFile: aj.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class aj {
    // Fields
    public int a;
    public int b;
    public int c;
    public int d;
    public int e;
    public int f;
    public int g;
    public java.lang.String h;
    public java.lang.String i;

    // Methods
    aj()
    {
      super();
      this.h = "";
      this.i = "";
    }

    public final String toString()
    {
      return "campaignID:"
           + this.e
           + "; eventID:"
           + this.a
           + "; interaction:"
           + this.b
           + "; interrupt_reason:"
           + this.c
           + "; creative_id:"
           + this.d
           + "; location_id:"
           + this.f
           + "; time_spent:"
           + this.g
           + "; ad_type:"
           + this.h
           + "; additional_params:"
           + this.i
           + "; ";
    }

}
