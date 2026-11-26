// Decompiled from classes.dex (SourceFile: v$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class v$a extends android.widget.ViewSwitcher {
    // Fields
    private final com.google.android.gms.internal.eq a;

    // Methods
    public v$a(android.content.Context p0)
    {
      super(p0);
      this.a = new com.google.android.gms.internal.eq(p0);
    }

    /* synthetic */ static com.google.android.gms.internal.eq a(com.google.android.gms.internal.v$a p0)
    {
      return p0.a;
    }

    public final boolean onInterceptTouchEvent(android.view.MotionEvent p0)
    {
      this.a.a(p0);
      return false;
    }

}
