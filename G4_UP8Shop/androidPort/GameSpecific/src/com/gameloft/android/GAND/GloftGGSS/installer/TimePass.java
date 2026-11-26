// Decompiled from classes.dex (SourceFile: TimePass.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer;

import android.text.format.Time;
class TimePass {
    // Fields
    public static java.util.HashMap b;
    public static boolean c;
    public java.util.Vector a;
    private boolean d;

    // Methods
    static
    {
      c = false;
    }

    public TimePass(Long p0)
    {
      super();
      this.a = new java.util.Vector();
      this.a.add(p0);
      this.d = false;
    }

    private String a(int p0, int p1)
    {
      Long v3;
      String v4;
      int i;
      Long v6;
      String v7;
      StringBuilder v8;
      String v9;
      v3 = Long.valueOf(0);
      v4 = "";
      for ( i = 0; i < this.a.size(); ++i )
      {
        v6 = Long.valueOf(v3.longValue() + ((Long)this.a.elementAt(i)).longValue());
        if ( i < p0 || i >= p0 + p1 )
          v7 = v4;
        else
          v7 = v4 + "\t" + this.a.elementAt(i) + "\n";
        v4 = v7;
        v3 = v6;
      }
      v8 = new StringBuilder();
      if ( this.a.size() <= 1 )
        v9 = "";
      else
        v9 = "(" + this.a.size() + ") <Average: " + v3.longValue() / this.a.size() + "> ";
      return v8.append(v9).append("<Total Time: ").append(v3).append("> [").append(p0).append(":").append(p0 + p1).append("]\n").append(v4).toString();
    }

    private String a(boolean p0)
    {
      Long v2;
      String v3;
      int i;
      Long v5;
      String v6;
      StringBuilder v7;
      String v8;
      v2 = Long.valueOf(0);
      v3 = "";
      for ( i = 0; i < this.a.size(); ++i )
      {
        v5 = Long.valueOf(v2.longValue() + ((Long)this.a.elementAt(i)).longValue());
        if ( p0 )
          v6 = v3 + "\t" + this.a.elementAt(i) + "\n";
        else
          v6 = v3;
        v3 = v6;
        v2 = v5;
      }
      v7 = new StringBuilder();
      if ( this.a.size() <= 1 )
        v8 = "";
      else
        v8 = "(" + this.a.size() + ") <Average: " + v2.longValue() / this.a.size() + "> ";
      return v7.append(v8).append("<Total Time: ").append(v2).append(">\n").append(v3).toString();
    }

    private void a()
    {
      this.a.clear();
    }

    public final void a(Long p0)
    {
      long v2;
      if ( this.d )
      {
        this.a.add(p0);
        this.d = false;
      }
      else
      {
        v2 = ((Long)this.a.lastElement()).longValue();
        this.a.remove(this.a.size() - 1);
        this.a.add(Long.valueOf(p0.longValue() - v2));
        this.d = true;
      }
    }

}
