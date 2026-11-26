// Decompiled from classes.dex (SourceFile: TimeUtils.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.util;

public class TimeUtils {
    // Fields
    public static int a;
    private static int b;
    private static int c;
    private static int d;
    private static final java.lang.Object e;
    private static char[] f;

    // Methods
    static
    {
      e = new Object();
      f = new char[24];
    }

    public TimeUtils()
    {
      super();
    }

    private static int accumField(int p0, int p1, boolean p2, int p3)
    {
      if ( p0 > 99 || p2 && p3 >= 3 )
        return p1 + 3;
      if ( p0 > 9 || p2 && p3 >= 2 )
        return p1 + 2;
      if ( p2 || p0 > 0 )
        return p1 + 1;
      return 0;
    }

    public static void formatDuration(long p0, long p2, java.io.PrintWriter p4)
    {
      if ( p0 != 0 )
        formatDuration(p0 - p2, p4, 0);
      else
        p4.print("--");
    }

    public static void formatDuration(long p0, java.io.PrintWriter p2)
    {
      formatDuration(p0, p2, 0);
    }

    public static void formatDuration(long p0, java.io.PrintWriter p2, int p3)
    {
      Object v3;
      v3 = e;
      synchronized ( v3 )
      {
        p2.print(new String(f, 0, formatDurationLocked(p0, p3)));
      }
    }

    public static void formatDuration(long p0, StringBuilder p2)
    {
      Object v2;
      v2 = e;
      synchronized ( v2 )
      {
        p2.append(f, 0, formatDurationLocked(p0, 0));
      }
    }

    private static int formatDurationLocked(long p0, int p2)
    {
      char[] v2;
      short v5;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;
      int v11;
      int v12;
      int v13;
      int v14;
      int v15;
      int v16;
      int v17;
      int v18;
      int v19;
      int v20; // RETVAL
      int v21;
      int i;
      int v23;
      int v24; // RETVAL
      int v25;
      int v26; // RETVAL
      int v27;
      int v28; // RETVAL
      int v29;
      int v30; // RETVAL
      int v31;
      int v32; // RETVAL
    
      if ( f.length < p2 )
        f = new char[p2];
      v2 = f;
      if ( p0 != 0 )
      {
        if ( p0 <= 0 )
        {
          p0 = -p0;
          v5 = 45;
        }
        else
        {
          v5 = 43;
        }
        v6 = (int)(p0 % 1000);
        v7 = (int)Math.floor((double)(p0 / 1000));
        v8 = 0;
        v9 = 0;
        v10 = 0;
        if ( v7 > 86400 )
        {
          v8 = v7 / 86400;
          v7 %= 86400;
        }
        if ( v7 > 3600 )
        {
          v9 = v7 / 3600;
          v7 %= 3600;
        }
        v11 = v9;
        v12 = v7;
        if ( v7 > 60 )
        {
          v10 = v7 / 60;
          v12 = v7 % 60;
        }
        v13 = v10;
        v14 = v12;
        if ( p2 != 0 )
        {
          v15 = accumField(v8, 1, false, 0);
          v16 = v15 + accumField(v11, 1, v15 > 0, 2);
          v17 = v16 + accumField(v10, 1, v16 > 0, 2);
          v18 = v17 + accumField(v12, 1, v17 > 0, 2);
          if ( v18 <= 0 )
            v19 = 0;
          else
            v19 = 3;
          v20 = accumField(v6, 2, true, v19);
          v21 = 0;
          for ( i = v20 + 1 + v18; i < p2; ++i )
            v2[v21++] = 0x20;
        }
        else
        {
          v21 = 0;
        }
        v2[v21] = (char)v5;
        v23 = v21 + 1;
        v24 = printField(v2, v8, 'd', v23, false, 0);
        if ( p2 != 0 )
          v25 = 2;
        else
          v25 = 0;
        v26 = printField(v2, v11, 'h', v24, v24 != v23, v25);
        if ( p2 != 0 )
          v27 = 2;
        else
          v27 = 0;
        v28 = printField(v2, v13, 'm', v26, v26 != v23, v27);
        if ( p2 != 0 )
          v29 = 2;
        else
          v29 = 0;
        v30 = printField(v2, v14, 's', v28, v28 != v23, v29);
        if ( p2 == 0 || v30 == v23 )
          v31 = 0;
        else
          v31 = 3;
        v32 = printField(v2, v6, 'm', v30, true, v31);
        v2[v32] = 0x73;
        return v32 + 1;
      }
      else
      {
        while ( p2 - 1 > 0 )
          v2[0] = 0x20;
        v2[0] = 0x30;
        return 1;
      }
    }

    private static int printField(char[] p0, int p1, char p2, int p3, boolean p4, int p5)
    {
      int v6;
      int v7;
      int v8;
      if ( p4 || p1 > 0 )
      {
        if ( p4 && p5 >= 3 || p1 > 99 )
        {
          p0[p3] = (char)(p1 / 100 + 48);
          v6 = p3 + 1;
          v7 = p1 % 100;
        }
        else
        {
          v6 = p3;
          v7 = p1;
        }
        if ( p4 && p5 >= 2 || v7 > 9 || p3 != v6 )
        {
          p0[v6++] = (char)(v7 / 10 + 48);
          v7 %= 10;
        }
        p0[v6] = (char)(v7 + 48);
        v8 = v6 + 1;
        p0[v8] = p2;
        return v8 + 1;
      }
      return p3;
    }

}
