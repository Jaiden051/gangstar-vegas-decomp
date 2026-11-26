// Decompiled from classes.dex (SourceFile: FacebookRequestError$Range.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class FacebookRequestError$Range {
    // Fields
    private final int end;
    private final int start;

    // Methods
    private FacebookRequestError$Range(int p0, int p1)
    {
      super();
      this.start = p0;
      this.end = p1;
    }

    /* synthetic */ FacebookRequestError$Range(int p0, int p1, com.facebook.FacebookRequestError$1 p2)
    {
      this(p0, p1);
    }

    boolean contains(int p0)
    {
      return this.start <= p0 && p0 <= this.end;
    }

}
