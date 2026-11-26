// Decompiled from classes.dex (SourceFile: cg$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class cg$b extends android.widget.RelativeLayout {
    // Fields
    private final com.google.android.gms.internal.eq a;

    // Methods
    public cg$b(android.content.Context p0, String p1)
    {
      super(p0);
      this.a = new com.google.android.gms.internal.eq(p0, p1);
    }

    public final boolean onInterceptTouchEvent(android.view.MotionEvent p0)
    {
      this.a.a(p0);
      return false;
    }

}
