// Decompiled from classes.dex (SourceFile: PlusOneButton.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus;

import com.google.android.gms.internal.hn;
import com.google.android.gms.internal.hq;
public final class PlusOneButton extends android.widget.FrameLayout {
    // Fields
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    public static int e;
    public static int f;
    public static int g;
    public static int h;
    private android.view.View i;
    private int j;
    private int k;
    private java.lang.String l;
    private int m;
    private com.google.android.gms.plus.PlusOneButton$OnPlusOneClickListener n;

    // Methods
    private PlusOneButton(android.content.Context p0)
    {
      this(p0, null);
    }

    public PlusOneButton(android.content.Context p0, android.util.AttributeSet p1)
    {
      super(p0, p1);
      this.j = getSize(p0, p1);
      this.k = getAnnotation(p0, p1);
      this.m = -1;
      this.a(this.getContext());
      this.isInEditMode();
    }

    /* synthetic */ static android.view.View a(com.google.android.gms.plus.PlusOneButton p0)
    {
      return p0.i;
    }

    private void a(int p0)
    {
      this.k = p0;
      this.a(this.getContext());
    }

    private void a(android.content.Context p0)
    {
      if ( this.i != null )
        this.removeView(this.i);
      this.i = com.google.android.gms.plus.internal.g.a(p0, this.j, this.k, this.l, this.m);
      this.a(this.n);
      this.addView(this.i);
    }

    private void a(com.google.android.gms.plus.PlusOneButton$OnPlusOneClickListener p0)
    {
      this.n = p0;
      this.i.setOnClickListener((android.view.View.OnClickListener)new com.google.android.gms.plus.PlusOneButton$DefaultOnPlusOneClickListener(this, p0));
    }

    private void a(String p0, int p1)
    {
      hn.a(
        this.getContext() instanceof android.app.Activity,
        "To use this method, the PlusOneButton must be placed in an Activity. Use initialize(String, OnPlusOneClickListener).");
      this.l = p0;
      this.m = p1;
      this.a(this.getContext());
    }

    private void a(String p0, com.google.android.gms.plus.PlusOneButton$OnPlusOneClickListener p1)
    {
      this.l = p0;
      this.m = 0;
      this.a(this.getContext());
      this.a(p1);
    }

    /* synthetic */ static int b(com.google.android.gms.plus.PlusOneButton p0)
    {
      return p0.m;
    }

    private void b(int p0)
    {
      this.j = p0;
      this.a(this.getContext());
    }

    protected static int getAnnotation(android.content.Context p0, android.util.AttributeSet p1)
    {
      String v2;
      v2 = hq.a(
             "http://schemas.android.com/apk/lib/com.google.android.gms.plus",
             "annotation",
             p0,
             p1,
             true,
             false,
             "PlusOneButton");
      if ( "INLINE".equalsIgnoreCase(v2) )
        return 2;
      else
        return !"NONE".equalsIgnoreCase(v2) ? 1 : 0;
    }

    protected static int getSize(android.content.Context p0, android.util.AttributeSet p1)
    {
      int v2;
      String v3;
      v2 = 0;
      v3 = hq.a(
             "http://schemas.android.com/apk/lib/com.google.android.gms.plus",
             "size",
             p0,
             p1,
             true,
             false,
             "PlusOneButton");
      if ( !"SMALL".equalsIgnoreCase(v3) )
      {
        if ( "MEDIUM".equalsIgnoreCase(v3) )
        {
          return 1;
        }
        else if ( "TALL".equalsIgnoreCase(v3) )
        {
          return 2;
        }
        else
        {
          return 3;
        }
      }
      return v2;
    }

    protected final void onLayout(boolean p0, int p1, int p2, int p3, int p4)
    {
      this.i.layout(0, 0, p3 - p1, p4 - p2);
    }

    protected final void onMeasure(int p0, int p1)
    {
      android.view.View i;
      i = this.i;
      this.measureChild(i, p0, p1);
      this.setMeasuredDimension(i.getMeasuredWidth(), i.getMeasuredHeight());
    }

}
