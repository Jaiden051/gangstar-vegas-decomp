// Decompiled from classes.dex (SourceFile: TextTrackStyle.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

import android.graphics.Color;
import android.graphics.Typeface;
import com.google.android.gms.internal.gj;
import com.google.android.gms.internal.hl;
import com.google.android.gms.internal.io;
import com.google.android.gms.internal.iq;
public final class TextTrackStyle {
    // Fields
    public static float a;
    public static int b;
    public static int c;
    public static int d;
    public static int e;
    public static int f;
    public static int g;
    public static int h;
    public static int i;
    public static int j;
    public static int k;
    public static int l;
    public static int m;
    public static int n;
    public static int o;
    public static int p;
    public static int q;
    public static int r;
    public static int s;
    public static int t;
    public static int u;
    public static int v;
    public static int w;
    public static int x;
    public static int y;
    private int A;
    private int B;
    private int C;
    private int D;
    private int E;
    private int F;
    private int G;
    private java.lang.String H;
    private int I;
    private int J;
    private org.json.JSONObject K;
    private float z;

    // Methods
    public TextTrackStyle()
    {
      super();
      this.n();
    }

    private void a(float p0)
    {
      this.z = p0;
    }

    private void a(int p0)
    {
      this.A = p0;
    }

    private void a(String p0)
    {
      this.H = p0;
    }

    private static int ah(String p0)
    {
      int v1;
      v1 = 0;
      if ( p0 != null && p0.length() == 9 && p0.charAt(0) == 35 )
      {
        try
        {
          return Color.argb(
                   Integer.parseInt(p0.substring(7, 9), 16),
                   Integer.parseInt(p0.substring(1, 3), 16),
                   Integer.parseInt(p0.substring(3, 5), 16),
                   Integer.parseInt(p0.substring(5, 7), 16));
        }
        catch ( NumberFormatException e )
        {
        }
      }
      return v1;
    }

    private float b()
    {
      return this.z;
    }

    private void b(int p0)
    {
      this.B = p0;
    }

    private void b(org.json.JSONObject p0)
    {
      this.K = p0;
    }

    private int c()
    {
      return this.A;
    }

    private void c(int p0)
    {
      if ( p0 < 0 || p0 > 4 )
        throw new IllegalArgumentException("invalid edgeType");
      this.C = p0;
    }

    private int d()
    {
      return this.B;
    }

    private void d(int p0)
    {
      this.D = p0;
    }

    private int e()
    {
      return this.C;
    }

    private void e(int p0)
    {
      if ( p0 < 0 || p0 > 2 )
        throw new IllegalArgumentException("invalid windowType");
      this.E = p0;
    }

    private int f()
    {
      return this.D;
    }

    private void f(int p0)
    {
      this.F = p0;
    }

    public static com.google.android.gms.cast.TextTrackStyle fromSystemSettings(android.content.Context p0)
    {
      com.google.android.gms.cast.TextTrackStyle v1;
      android.view.accessibility.CaptioningManager v4;
      android.view.accessibility.CaptioningManager.CaptionStyle UserStyle; // RETVAL
      android.graphics.Typeface Typeface; // RETVAL
      android.graphics.Typeface v7;
      boolean isBold;
      boolean isItalic; // RETVAL
    
      v1 = new com.google.android.gms.cast.TextTrackStyle();
      if ( !iq.gd() )
        return v1;
      v4 = (android.view.accessibility.CaptioningManager)p0.getSystemService("captioning");
      v1.z = v4.getFontScale();
      UserStyle = v4.getUserStyle();
      v1.B = UserStyle.backgroundColor;
      v1.A = UserStyle.foregroundColor;
      switch ( UserStyle.edgeType )
      {
        case 1:
          v1.c(1);
          break;
        case 2:
          v1.c(2);
          break;
        default:
          v1.c(0);
          break;
      }
      v1.D = UserStyle.edgeColor;
      Typeface = UserStyle.getTypeface();
      v7 = Typeface;
      if ( Typeface != null )
      {
        if ( Typeface.MONOSPACE.equals(Typeface) )
        {
          v1.h(1);
        }
        else if ( Typeface.SANS_SERIF.equals(v7) || !Typeface.SERIF.equals(v7) )
        {
          v1.h(0);
        }
        else
        {
          v1.h(2);
        }
        isBold = v7.isBold();
        isItalic = v7.isItalic();
        if ( isBold && isItalic )
        {
          v1.i(3);
        }
        else if ( isBold )
        {
          v1.i(1);
        }
        else if ( isItalic )
        {
          v1.i(2);
        }
        else
        {
          v1.i(0);
        }
      }
      return v1;
    }

    private int g()
    {
      return this.E;
    }

    private void g(int p0)
    {
      if ( p0 < 0 )
        throw new IllegalArgumentException("invalid windowCornerRadius");
      this.G = p0;
    }

    private int h()
    {
      return this.F;
    }

    private void h(int p0)
    {
      if ( p0 < 0 || p0 > 6 )
        throw new IllegalArgumentException("invalid fontGenericFamily");
      this.I = p0;
    }

    private int i()
    {
      return this.G;
    }

    private void i(int p0)
    {
      if ( p0 < 0 || p0 > 3 )
        throw new IllegalArgumentException("invalid fontStyle");
      this.J = p0;
    }

    private String j()
    {
      return this.H;
    }

    private int k()
    {
      return this.I;
    }

    private int l()
    {
      return this.J;
    }

    private org.json.JSONObject m()
    {
      return this.K;
    }

    private void n()
    {
      this.z = 1.0f;
      this.A = 0;
      this.B = 0;
      this.C = -1;
      this.D = 0;
      this.E = -1;
      this.F = 0;
      this.G = 0;
      this.H = null;
      this.I = -1;
      this.J = -1;
      this.K = null;
    }

    private static String o(int p0)
    {
      Object[] v1;
      v1 = new Object[4];
      v1[0] = Integer.valueOf(Color.red(p0));
      v1[1] = Integer.valueOf(Color.green(p0));
      v1[2] = Integer.valueOf(Color.blue(p0));
      v1[3] = Integer.valueOf(Color.alpha(p0));
      return String.format("#%02X%02X%02X%02X", v1);
    }

    public final org.json.JSONObject a()
    {
      org.json.JSONObject v1;
      v1 = new org.json.JSONObject();
      try
      {
        v1.put("fontScale", this.z);
        if ( this.A != 0 )
          v1.put("foregroundColor", o(this.A));
        if ( this.B != 0 )
          v1.put("backgroundColor", o(this.B));
        switch ( this.C )
        {
          case 0:
            v1.put("edgeType", "NONE");
            break;
          case 1:
            v1.put("edgeType", "OUTLINE");
            break;
          case 2:
            v1.put("edgeType", "DROP_SHADOW");
            break;
          case 3:
            v1.put("edgeType", "RAISED");
            break;
          case 4:
            v1.put("edgeType", "DEPRESSED");
            break;
          default:
            break;
        }
        if ( this.D != 0 )
          v1.put("edgeColor", o(this.D));
        switch ( this.E )
        {
          case 0:
            v1.put("windowType", "NONE");
            break;
          case 1:
            v1.put("windowType", "NORMAL");
            break;
          case 2:
            v1.put("windowType", "ROUNDED_CORNERS");
            break;
          default:
            break;
        }
        if ( this.F != 0 )
          v1.put("windowColor", o(this.F));
        if ( this.E == 2 )
          v1.put("windowRoundedCornerRadius", this.G);
        if ( this.H != null )
          v1.put("fontFamily", this.H);
        switch ( this.I )
        {
          case 0:
            v1.put("fontGenericFamily", "SANS_SERIF");
            break;
          case 1:
            v1.put("fontGenericFamily", "MONOSPACED_SANS_SERIF");
            break;
          case 2:
            v1.put("fontGenericFamily", "SERIF");
            break;
          case 3:
            v1.put("fontGenericFamily", "MONOSPACED_SERIF");
            break;
          case 4:
            v1.put("fontGenericFamily", "CASUAL");
            break;
          case 5:
            v1.put("fontGenericFamily", "CURSIVE");
            break;
          case 6:
            v1.put("fontGenericFamily", "SMALL_CAPITALS");
            break;
          default:
            break;
        }
        switch ( this.J )
        {
          case 0:
            v1.put("fontStyle", "NORMAL");
            break;
          case 1:
            v1.put("fontStyle", "BOLD");
            break;
          case 2:
            v1.put("fontStyle", "ITALIC");
            break;
          case 3:
            v1.put("fontStyle", "BOLD_ITALIC");
            break;
          default:
            break;
        }
        if ( this.K != null )
          v1.put("customData", this.K);
        return v1;
      }
      catch ( org.json.JSONException e )
      {
      }
      return v1;
    }

    public final void a(org.json.JSONObject p0)
 throws org.json.JSONException {
      float v2;
      String String;
      String v4;
      String v5;
      String v6;
      this.n();
      v2 = (float)p0.optDouble("fontScale", 1.0);
      this.z = v2;
      this.A = ah(p0.optString("foregroundColor"));
      this.B = ah(p0.optString("backgroundColor"));
      if ( p0.has("edgeType") )
      {
        String = p0.getString("edgeType");
        if ( "NONE".equals(String) )
        {
          this.C = 0;
        }
        else if ( "OUTLINE".equals(String) )
        {
          this.C = 1;
        }
        else if ( "DROP_SHADOW".equals(String) )
        {
          this.C = 2;
        }
        else if ( "RAISED".equals(String) )
        {
          this.C = 3;
        }
        else if ( "DEPRESSED".equals(String) )
        {
          this.C = 4;
        }
      }
      this.D = ah(p0.optString("edgeColor"));
      if ( p0.has("windowType") )
      {
        v4 = p0.getString("windowType");
        if ( "NONE".equals(v4) )
        {
          this.E = 0;
        }
        else if ( "NORMAL".equals(v4) )
        {
          this.E = 1;
        }
        else if ( "ROUNDED_CORNERS".equals(v4) )
        {
          this.E = 2;
        }
      }
      this.F = ah(p0.optString("windowColor"));
      if ( this.E == 2 )
        this.G = p0.optInt("windowRoundedCornerRadius", 0);
      this.H = p0.optString("fontFamily", null);
      if ( p0.has("fontGenericFamily") )
      {
        v5 = p0.getString("fontGenericFamily");
        if ( "SANS_SERIF".equals(v5) )
        {
          this.I = 0;
        }
        else if ( "MONOSPACED_SANS_SERIF".equals(v5) )
        {
          this.I = 1;
        }
        else if ( "SERIF".equals(v5) )
        {
          this.I = 2;
        }
        else if ( "MONOSPACED_SERIF".equals(v5) )
        {
          this.I = 3;
        }
        else if ( "CASUAL".equals(v5) )
        {
          this.I = 4;
        }
        else if ( "CURSIVE".equals(v5) )
        {
          this.I = 5;
        }
        else if ( "SMALL_CAPITALS".equals(v5) )
        {
          this.I = 6;
        }
      }
      if ( p0.has("fontStyle") )
      {
        v6 = p0.getString("fontStyle");
        if ( "NORMAL".equals(v6) )
        {
          this.J = 0;
        }
        else if ( "BOLD".equals(v6) )
        {
          this.J = 1;
        }
        else if ( "ITALIC".equals(v6) )
        {
          this.J = 2;
        }
        else if ( "BOLD_ITALIC".equals(v6) )
        {
          this.J = 3;
        }
      }
      this.K = p0.optJSONObject("customData");
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.cast.TextTrackStyle v4;
      v2 = false;
      if ( this == p0 )
        return true;
      if ( p0 instanceof com.google.android.gms.cast.TextTrackStyle )
      {
        v4 = (com.google.android.gms.cast.TextTrackStyle)p0;
        if ( (this.K == null) == (v4.K == null)
          && (this.K == null || v4.K == null || io.d(this.K, v4.K))
          && this.z == v4.z
          && this.A == v4.A
          && this.B == v4.B
          && this.C == v4.C
          && this.D == v4.D
          && this.E == v4.E
          && this.G == v4.G
          && gj.a(this.H, v4.H)
          && this.I == v4.I
          && this.J == v4.J )
        {
          return true;
        }
      }
      return v2;
    }

    public final int hashCode()
    {
      Object[] v1;
      v1 = new Object[12];
      v1[0] = Float.valueOf(this.z);
      v1[1] = Integer.valueOf(this.A);
      v1[2] = Integer.valueOf(this.B);
      v1[3] = Integer.valueOf(this.C);
      v1[4] = Integer.valueOf(this.D);
      v1[5] = Integer.valueOf(this.E);
      v1[6] = Integer.valueOf(this.F);
      v1[7] = Integer.valueOf(this.G);
      v1[8] = this.H;
      v1[9] = Integer.valueOf(this.I);
      v1[10] = Integer.valueOf(this.J);
      v1[11] = this.K;
      return hl.hashCode(v1);
    }

}
