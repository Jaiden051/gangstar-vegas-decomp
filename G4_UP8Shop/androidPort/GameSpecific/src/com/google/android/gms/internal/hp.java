// Decompiled from classes.dex (SourceFile: hp.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.graphics.Typeface;
import com.google.android.gms.R$color;
import com.google.android.gms.R$drawable;
import com.google.android.gms.R$string;
public final class hp extends android.widget.Button {
    // Methods
    public hp(android.content.Context p0)
    {
      this(p0, null);
    }

    public hp(android.content.Context p0, android.util.AttributeSet p1)
    {
      super(p0, p1, 16842824);
    }

    private void a(android.content.res.Resources p0)
    {
      float density;
      this.setTypeface(Typeface.DEFAULT_BOLD);
      this.setTextSize(14.0f);
      density = p0.getDisplayMetrics().density;
      this.setMinHeight((int)(density * 48.0f + 0.5f));
      this.setMinWidth((int)(density * 48.0f + 0.5f));
    }

    private static int b(int p0, int p1, int p2)
    {
      switch ( p0 )
      {
        case 0:
          return p1;
        case 1:
          p1 = p2;
          break;
        default:
          throw new IllegalStateException("Unknown color scheme: " + p0);
      }
      return p1;
    }

    private void b(android.content.res.Resources p0, int p1, int p2)
    {
      int v4;
      switch ( p1 )
      {
        case 0:
        case 1:
          v4 = b(p2, R$drawable.m, com.google.android.gms.R$drawable.t);
          break;
        case 2:
          v4 = b(p2, R$drawable.a, R$drawable.h);
          break;
        default:
          throw new IllegalStateException("Unknown button size: " + p1);
      }
      if ( v4 == -1 )
        throw new IllegalStateException("Could not find background resource!");
      this.setBackgroundDrawable(p0.getDrawable(v4));
    }

    private void c(android.content.res.Resources p0, int p1, int p2)
    {
      this.setTextColor(p0.getColorStateList(b(p2, R$color.k, R$color.l)));
      switch ( p1 )
      {
        case 0:
          this.setText(p0.getString(R$string.D));
          break;
        case 1:
          this.setText(p0.getString(R$string.E));
          break;
        case 2:
          this.setText(null);
          break;
        default:
          throw new IllegalStateException("Unknown button size: " + p1);
      }
    }

    public final void a(android.content.res.Resources p0, int p1, int p2)
    {
      boolean v4;
      Object[] v5;
      boolean v6;
      Object[] v7;
      float density;
      int v9;
      v4 = p1 >= 0 && p1 < 3;
      v5 = new Object[1];
      v5[0] = Integer.valueOf(p1);
      hn.a(v4, "Unknown button size %d", v5);
      v6 = p2 >= 0 && p2 < 2;
      v7 = new Object[1];
      v7[0] = Integer.valueOf(p2);
      hn.a(v6, "Unknown color scheme %s", v7);
      this.setTypeface(Typeface.DEFAULT_BOLD);
      this.setTextSize(14.0f);
      density = p0.getDisplayMetrics().density;
      this.setMinHeight((int)(density * 48.0f + 0.5f));
      this.setMinWidth((int)(density * 48.0f + 0.5f));
      switch ( p1 )
      {
        case 0:
        case 1:
          v9 = b(p2, R$drawable.m, com.google.android.gms.R$drawable.t);
          break;
        case 2:
          v9 = b(p2, R$drawable.a, R$drawable.h);
          break;
        default:
          throw new IllegalStateException("Unknown button size: " + p1);
      }
      if ( v9 == -1 )
        throw new IllegalStateException("Could not find background resource!");
      this.setBackgroundDrawable(p0.getDrawable(v9));
      this.setTextColor(p0.getColorStateList(b(p2, R$color.k, R$color.l)));
      switch ( p1 )
      {
        case 0:
          this.setText(p0.getString(R$string.D));
          break;
        case 1:
          this.setText(p0.getString(R$string.E));
          break;
        case 2:
          this.setText(null);
          break;
        default:
          throw new IllegalStateException("Unknown button size: " + p1);
      }
    }

}
