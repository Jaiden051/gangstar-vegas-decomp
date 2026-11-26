// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.hardware.display;

final class a extends android.support.v4.hardware.display.DisplayManagerCompat {
    // Fields
    private final java.lang.Object b;

    // Methods
    public a(android.content.Context p0)
    {
      super();
      this.b = DisplayManagerJellybeanMr1.getDisplayManager(p0);
    }

    public final android.view.Display a(int p0)
    {
      return DisplayManagerJellybeanMr1.getDisplay(this.b, p0);
    }

    public final android.view.Display[] a()
    {
      return DisplayManagerJellybeanMr1.getDisplays(this.b);
    }

    public final android.view.Display[] a(String p0)
    {
      return DisplayManagerJellybeanMr1.getDisplays(this.b, p0);
    }

}
