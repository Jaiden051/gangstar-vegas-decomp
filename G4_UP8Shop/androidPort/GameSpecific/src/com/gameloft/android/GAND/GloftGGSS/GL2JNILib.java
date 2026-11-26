// Decompiled from classes.dex (SourceFile: GL2JNILib.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import com.gameloft.glads.GLAds;
public class GL2JNILib {
    // Fields
    static java.lang.String a;
    public static int b;
    public static int c;
    public static int d;
    public static int e;
    public static int f;

    // Methods
    static
    {
      b = 16;
      c = 16;
      d = 0;
      e = 0;
      f = 0;
    }

    public GL2JNILib()
    {
      super();
    }

    public static native void accelerometerEvent(float p0, float p1, float p2);

    public static void createView()
    {
      Game.az.aA = new com.gameloft.android.GAND.GloftGGSS.GL2JNIView(Game.az.getApplication(), false);
      Game.az.r = new android.widget.RelativeLayout(Game.az);
      Game.az.r.addView(Game.az.q);
      Game.az.r.addView(Game.az.aA);
      GLAds.setParentView(Game.az.r);
      Game.az.setContentView(Game.az.r);
    }

    public static native void destroy();

    public static void enableAccelerometer(boolean p0, float p1)
    {
      ;
    }

    private static void ensurePathExists(String p0)
    {
      try
      {
        new java.io.File(p0).mkdirs();
      }
      catch ( Exception v1 )
      {
        v1.printStackTrace();
      }
    }

    public static com.gameloft.android.GAND.GloftGGSS.Keyboard getKeyboard()
    {
      return GL2JNIView$Renderer.d;
    }

    public static byte[] getKeyboardText()
    {
      byte[] v0;
      v0 = new byte[1];
      v0[0] = 0;
      if ( GL2JNIView$Renderer.d != null )
        return GL2JNIView$Renderer.d.a.trim().getBytes();
      return (byte[])v0;
    }

    public static native int getNumExtraContext();

    public static byte[] getResource(String p0)
    {
      java.io.DataInputStream v1;
      byte[] v2;
      try
      {
        if ( p0.startsWith(".") )
          p0 = p0.substring(1);
        v1 = new java.io.DataInputStream(com.gameloft.android.GAND.GloftGGSS.GL2JNILib.class.getResourceAsStream(p0));
        System.out.print("getResource " + p0 + ": " + v1.available() + " bytes");
        v2 = new byte[v1.available()];
        v1.readFully(v2);
        v1.close();
        return (byte[])v2;
      }
      catch ( java.io.IOException v4 )
      {
        v4.printStackTrace();
        return null;
      }
    }

    public static native void getViewSettings();

    public static native void init();

    public static native void initGL();

    public static int isKeyboardRequired()
    {
      int v0;
      v0 = 0;
      if ( GL2JNIView$Renderer.d != null )
        return GL2JNIView$Renderer.d.b ? 1 : 0;
      return v0;
    }

    public static int isReturnkeyboard()
    {
      int v0;
      v0 = 0;
      if ( GL2JNIView$Renderer.d != null )
        return GL2JNIView$Renderer.d.c ? 1 : 0;
      return v0;
    }

    public static native void keyboardKeyPressed(char p0, int p1);

    public static native void onKeyboardFinish(java.lang.String p0, int p1);

    public static native void orientationChanged(int p0);

    public static native void pause();

    public static native void resize(int p0, int p1);

    public static native void resume();

    public static boolean setCurrentContext(int p0)
    {
      return Game.az.aA.a(p0);
    }

    public static void setKeyboard(int p0, String p1, int p2, int p3, int p4, int p5, int p6)
    {
      com.gameloft.android.GAND.GloftGGSS.Keyboard v7;
      if ( GL2JNIView$Renderer.d != null )
      {
        if ( p0 != 0 )
        {
          v7 = GL2JNIView$Renderer.d;
          if ( !v7.b )
          {
            v7.b = true;
            v7.c = false;
            v7.i = p2;
          }
          v7.e = p3;
          v7.f = p4;
          v7.g = p5;
          v7.h = p6;
          v7.d = p0 == 2;
          if ( Game.az != null )
            Game.az.bt.sendEmptyMessage(2);
          v7.a(p1);
          v7.l = new String(p1);
        }
        else
        {
          GL2JNIView$Renderer.d.a();
        }
      }
    }

    public static void setKeyboardText(String p0)
    {
      if ( GL2JNIView$Renderer.d != null )
        GL2JNIView$Renderer.d.a(p0);
    }

    public static native void setNumExtraContext(int p0);

    public static native void setPaths(java.lang.String p0, java.lang.String p1, java.lang.String p2);

    public static void setResourcePath(String p0)
    {
      a = p0;
    }

    public static void setViewSettings(int p0, int p1, int p2, int p3, int p4)
    {
      b = p0;
      c = p1;
      d = p2;
      e = p3;
      f = p4;
    }

    public static void setupPaths()
    {
      ;
    }

    public static native void stateChanged(boolean p0);

    public static native void step();

    public static native void systemTimeChanged();

    public static native void touchEvent(int p0, int p1, int p2, int p3);

}
