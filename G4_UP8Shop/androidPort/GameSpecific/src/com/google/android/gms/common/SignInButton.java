// Decompiled from classes.dex (SourceFile: SignInButton.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common;

import android.util.Log;
import com.google.android.gms.internal.hn;
import com.google.android.gms.internal.ho;
public final class SignInButton extends android.widget.FrameLayout implements android.view.View.OnClickListener {
    // Fields
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    public static int e;
    private int f;
    private int g;
    private android.view.View h;
    private android.view.View.OnClickListener i;

    // Methods
    private SignInButton(android.content.Context p0)
    {
      this(p0, null);
    }

    public SignInButton(android.content.Context p0, android.util.AttributeSet p1)
    {
      this(p0, p1, 0);
    }

    public SignInButton(android.content.Context p0, android.util.AttributeSet p1, int p2)
 {
      super(p0, p1, p2);
      this.i = null;
      this.a(0, 0);
    }

    private static android.widget.Button a(android.content.Context p0, int p1, int p2)
    {
      com.google.android.gms.internal.hp v3;
      v3 = new com.google.android.gms.internal.hp(p0);
      v3.a(p0.getResources(), p1, p2);
      return v3;
    }

    private void a(int p0)
 {
      this.a(p0, this.g);
    }

    private void a(int p0, int p1)
 {
      boolean v3;
      Object[] v4;
      boolean v5;
      Object[] v6;
      android.content.Context Context; // RETVAL
      android.content.Context v8;
      v3 = p0 >= 0 && p0 < 3;
      v4 = new Object[1];
      v4[0] = Integer.valueOf(p0);
      hn.a(v3, "Unknown button size %d", v4);
      v5 = p1 >= 0 && p1 < 2;
      v6 = new Object[1];
      v6[0] = Integer.valueOf(p1);
      hn.a(v5, "Unknown color scheme %s", v6);
      this.f = p0;
      this.g = p1;
      Context = this.getContext();
      v8 = Context;
      if ( this.h != null )
        this.removeView(this.h);
      try
      {
        this.h = ho.b(Context, this.f, this.g);
      }
      catch ( com.google.android.gms.dynamic.g$a e )
      {
        Log.w("SignInButton", "Sign in button not found, using placeholder instead");
        this.h = a(v8, this.f, this.g);
      }
      this.addView(this.h);
      this.h.setEnabled(this.isEnabled());
      this.h.setOnClickListener(this);
    }

    private void a(android.content.Context p0)
 {
      if ( this.h != null )
        this.removeView(this.h);
      try
      {
        this.h = ho.b(p0, this.f, this.g);
      }
      catch ( com.google.android.gms.dynamic.g$a e )
      {
        Log.w("SignInButton", "Sign in button not found, using placeholder instead");
        this.h = a(p0, this.f, this.g);
      }
      this.addView(this.h);
      this.h.setEnabled(this.isEnabled());
      this.h.setOnClickListener(this);
    }

    private void b(int p0)
 {
      this.a(this.f, p0);
    }

    public final void onClick(android.view.View p0)
    {
      if ( this.i != null && p0 == this.h )
        this.i.onClick(this);
    }

    public final void setEnabled(boolean p0)
    {
      super.setEnabled(p0);
      this.h.setEnabled(p0);
    }

    public final void setOnClickListener(android.view.View.OnClickListener p0)
    {
      this.i = p0;
      if ( this.h != null )
        this.h.setOnClickListener(this);
    }

}
