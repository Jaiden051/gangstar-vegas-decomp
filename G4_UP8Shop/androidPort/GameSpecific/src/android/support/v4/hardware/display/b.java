// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.hardware.display;

final class b extends android.support.v4.hardware.display.DisplayManagerCompat {
    // Fields
    private final android.view.WindowManager b;

    // Methods
    public b(android.content.Context p0)
    {
      super();
      this.b = (android.view.WindowManager)p0.getSystemService("window");
    }

    public final android.view.Display a(int p0)
    {
      android.view.Display DefaultDisplay;
      DefaultDisplay = this.b.getDefaultDisplay();
      if ( DefaultDisplay.getDisplayId() != p0 )
        return null;
      return DefaultDisplay;
    }

    public final android.view.Display[] a()
    {
      android.view.Display[] v1;
      v1 = new android.view.Display[1];
      v1[0] = this.b.getDefaultDisplay();
      return (android.view.Display[])v1;
    }

    public final android.view.Display[] a(String p0)
    {
      android.view.Display[] v2;
      if ( p0 != null )
        return new android.view.Display[0];
      v2 = new android.view.Display[1];
      v2[0] = this.b.getDefaultDisplay();
      return (android.view.Display[])v2;
    }

}
