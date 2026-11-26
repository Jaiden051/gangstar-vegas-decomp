// Decompiled from classes.dex (SourceFile: Keyboard.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

public final class Keyboard {
    // Fields
    public static java.lang.String m;
    public static byte[] n;
    java.lang.String a;
    boolean b;
    boolean c;
    boolean d;
    int e;
    int f;
    int g;
    int h;
    int i;
    android.content.Context j;
    com.gameloft.android.GAND.GloftGGSS.GL2JNIView k;
    java.lang.String l;

    // Methods
    public Keyboard(android.content.Context p0, com.gameloft.android.GAND.GloftGGSS.GL2JNIView p1)
    {
      super();
      this.a = "";
      this.d = false;
      this.l = "";
      this.j = p0;
      this.k = p1;
      this.b = false;
      this.c = false;
      this.i = 250;
      this.e = 0;
      this.f = 0;
      this.g = 100;
      this.h = 50;
      n = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz 1234567890.#$&*_-+/\\|".getBytes();
    }

    private void a(int p0)
    {
      this.i = p0;
    }

    private void e()
    {
      this.a = "";
    }

    private void f()
    {
      this.a();
      GL2JNILib.onKeyboardFinish(this.l, 0);
    }

    private static void onResume()
    {
      ;
    }

    public final void a()
    {
      this.b = false;
      this.c = true;
      if ( Game.az != null )
        Game.az.bt.sendEmptyMessage(3);
    }

    public final void a(int p0, int p1)
    {
      if ( p1 == 66 || p1 == 4 || p1 == 82 || p1 == 84 )
      {
        if ( p1 != 82 )
        {
          this.c = p1 != 66;
          if ( this.c )
          {
            GL2JNILib.onKeyboardFinish(this.l, 0);
          }
          else
          {
            if ( this.a == "" )
              this.a = this.l;
            GL2JNILib.onKeyboardFinish(this.a, 0);
          }
          this.a();
        }
      }
      else if ( p1 == 67 )
      {
        if ( this.a.length() > 0 )
          this.a = this.a.substring(0, this.a.length() - 1);
      }
      else
      {
        this.a.length();
      }
    }

    public final void a(String p0)
    {
      this.a = p0;
      if ( Game.az != null )
        Game.az.bt.sendEmptyMessage(4);
    }

    public final void a(String p0, int p1, boolean p2, int p3, int p4, int p5, int p6)
    {
      if ( !this.b )
      {
        this.b = true;
        this.c = false;
        this.i = p1;
      }
      this.e = p3;
      this.f = p4;
      this.g = p5;
      this.h = p6;
      this.d = p2;
      if ( Game.az != null )
        Game.az.bt.sendEmptyMessage(2);
      this.a(p0);
      this.l = new String(p0);
    }

    public final boolean b()
    {
      return this.c;
    }

    public final boolean c()
    {
      return this.b;
    }

    public final String d()
    {
      return this.a;
    }

}
