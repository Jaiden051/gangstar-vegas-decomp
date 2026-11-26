// Decompiled from classes.dex (SourceFile: GL2JNIView$Renderer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

public class GL2JNIView$Renderer implements com.gameloft.android.GAND.GloftGGSS.ab {
    // Fields
    public static android.content.Context a;
    public static com.gameloft.android.GAND.GloftGGSS.GL2JNIView c;
    public static com.gameloft.android.GAND.GloftGGSS.Keyboard d;
    public static int e;
    public static int f;
    public com.gameloft.android.GAND.GloftGGSS.GL2JNIView b;

    // Methods
    static
    {
      a = null;
      c = null;
      d = null;
    }

    public GL2JNIView$Renderer()
    {
      super();
      android.view.Display DefaultDisplay;
      this.b = null;
      DefaultDisplay = Game.az.getWindowManager().getDefaultDisplay();
      e = DefaultDisplay.getWidth();
      f = DefaultDisplay.getHeight();
      GameRenderer.nativeInit(Game.getManufacture(), e, f, Game.aH);
    
    }

    public GL2JNIView$Renderer(android.content.Context p0, com.gameloft.android.GAND.GloftGGSS.GL2JNIView p1)
    {
      super();
      android.view.Display DefaultDisplay;
      this.b = null;
      a = p0;
      DefaultDisplay = Game.az.getWindowManager().getDefaultDisplay();
      e = DefaultDisplay.getWidth();
      f = DefaultDisplay.getHeight();
      GameRenderer.nativeInit(Game.getManufacture(), e, f, Game.aH);
      this.b = p1;
      c = p1;
      d = new com.gameloft.android.GAND.GloftGGSS.Keyboard(a, p1);
    
    }

    private static void onSurfaceLost()
    {
      ;
    }

    public final void a()
    {
      GL2JNIView.g = false;
      GL2JNILib.step();
      GL2JNIView.g = true;
    }

    public final void a(int p0, int p1)
    {
      GL2JNILib.resize(p0, p1);
    }

    public final com.gameloft.android.GAND.GloftGGSS.Keyboard b()
    {
      return d;
    }

    public final void c()
    {
      GL2JNILib.stateChanged(true);
      Game.GetPhoneInfo();
    }

}
