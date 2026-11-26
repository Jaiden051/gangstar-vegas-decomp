// Decompiled from classes.dex (SourceFile: BidiFormatter.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.text;

public final class BidiFormatter {
    // Fields
    private static android.support.v4.text.e a;
    private static char b;
    private static char c;
    private static char d;
    private static char e;
    private static char f;
    private static final java.lang.String g;
    private static final java.lang.String h;
    private static java.lang.String i;
    private static int j;
    private static int k;
    private static final android.support.v4.text.BidiFormatter l;
    private static final android.support.v4.text.BidiFormatter m;
    private static int q;
    private static int r;
    private static int s;
    private final boolean n;
    private final int o;
    private final android.support.v4.text.e p;

    // Methods
    static
    {
      a = TextDirectionHeuristicsCompat.c;
      g = Character.toString((char)0x200E);
      h = Character.toString((char)0x200F);
      l = new android.support.v4.text.BidiFormatter(false, 2, a);
      m = new android.support.v4.text.BidiFormatter(true, 2, a);
    }

    private BidiFormatter(boolean p0, int p1, android.support.v4.text.e p2)
    {
      super();
      this.n = p0;
      this.o = p1;
      this.p = p2;
    }

    /* synthetic */ BidiFormatter(boolean p0, int p1, android.support.v4.text.e p2, int p3)
    {
      this(p0, p1, p2);
    }

    private String a(String p0, android.support.v4.text.e p1)
    {
      boolean v3; // RETVAL
      boolean v4;
      v3 = p1.a(p0, 0, p0.length());
      v4 = v3;
      if ( !this.n && (v3 || getExitDir(p0) == 1) )
        return g;
      if ( this.n && (!v4 || getExitDir(p0) == -1) )
        return h;
      return "";
    }

    private String a(String p0, android.support.v4.text.e p1, boolean p2)
    {
      boolean v4; // RETVAL
      boolean v5;
      StringBuilder v6;
      android.support.v4.text.e v7;
      boolean v8; // RETVAL
      boolean v9;
      String v10;
      char v11;
      android.support.v4.text.e v12;
      boolean v13; // RETVAL
      boolean v14;
      String v15;
      v4 = p1.a(p0, 0, p0.length());
      v5 = v4;
      v6 = new StringBuilder();
      if ( (this.o & 2) != 0 && p2 )
      {
        if ( v4 )
          v7 = TextDirectionHeuristicsCompat.b;
        else
          v7 = TextDirectionHeuristicsCompat.a;
        v8 = v7.a(p0, 0, p0.length());
        v9 = v8;
        if ( !this.n && (v8 || getEntryDir(p0) == 1) )
        {
          v10 = g;
        }
        else if ( this.n && (!v9 || getEntryDir(p0) == -1) )
        {
          v10 = h;
        }
        else
        {
          v10 = "";
        }
        v6.append(v10);
      }
      if ( v5 == this.n )
      {
        v6.append(p0);
      }
      else
      {
        if ( v5 )
          v11 = 8235;
        else
          v11 = 8234;
        v6.append(v11);
        v6.append(p0);
        v6.append(0x202C);
      }
      if ( p2 )
      {
        if ( v5 )
          v12 = TextDirectionHeuristicsCompat.b;
        else
          v12 = TextDirectionHeuristicsCompat.a;
        v13 = v12.a(p0, 0, p0.length());
        v14 = v13;
        if ( !this.n && (v13 || getExitDir(p0) == 1) )
        {
          v15 = g;
        }
        else if ( this.n && (!v14 || getExitDir(p0) == -1) )
        {
          v15 = h;
        }
        else
        {
          v15 = "";
        }
        v6.append(v15);
      }
      return v6.toString();
    }

    private String a(String p0, boolean p1)
    {
      return this.a(p0, this.p, p1);
    }

    private boolean a()
    {
      return this.n;
    }

    private boolean a(String p0)
    {
      return this.p.a(p0, 0, p0.length());
    }

    /* synthetic */ static boolean access$000(java.util.Locale p0)
    {
      return isRtlLocale(p0);
    }

    /* synthetic */ static android.support.v4.text.e access$100()
    {
      return a;
    }

    /* synthetic */ static android.support.v4.text.BidiFormatter access$200()
    {
      return m;
    }

    /* synthetic */ static android.support.v4.text.BidiFormatter access$300()
    {
      return l;
    }

    private String b(String p0)
    {
      return this.a(p0, this.p, true);
    }

    private String b(String p0, android.support.v4.text.e p1)
    {
      boolean v3; // RETVAL
      boolean v4;
      v3 = p1.a(p0, 0, p0.length());
      v4 = v3;
      if ( !this.n && (v3 || getEntryDir(p0) == 1) )
        return g;
      if ( this.n && (!v4 || getEntryDir(p0) == -1) )
        return h;
      return "";
    }

    private boolean b()
    {
      return (this.o & 2) != 0;
    }

    private String c(String p0, android.support.v4.text.e p1)
    {
      return this.a(p0, p1, true);
    }

    private static int getEntryDir(String p0)
    {
      return new android.support.v4.text.BidiFormatter$DirectionalityEstimator(p0, false).a();
    }

    private static int getExitDir(String p0)
    {
      return new android.support.v4.text.BidiFormatter$DirectionalityEstimator(p0, false).b();
    }

    public static android.support.v4.text.BidiFormatter getInstance()
    {
      return new android.support.v4.text.BidiFormatter$Builder().a();
    }

    public static android.support.v4.text.BidiFormatter getInstance(java.util.Locale p0)
    {
      return new android.support.v4.text.BidiFormatter$Builder(p0).a();
    }

    public static android.support.v4.text.BidiFormatter getInstance(boolean p0)
    {
      return new android.support.v4.text.BidiFormatter$Builder(p0).a();
    }

    private static boolean isRtlLocale(java.util.Locale p0)
    {
      return TextUtilsCompat.getLayoutDirectionFromLocale(p0) == 1;
    }

}
