// Decompiled from classes.dex (SourceFile: DisplayManagerJellybeanMr1.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.hardware.display;

final class DisplayManagerJellybeanMr1 {
    // Methods
    DisplayManagerJellybeanMr1()
    {
      super();
    }

    public static android.view.Display getDisplay(Object p0, int p1)
    {
      return ((android.hardware.display.DisplayManager)p0).getDisplay(p1);
    }

    public static Object getDisplayManager(android.content.Context p0)
    {
      return p0.getSystemService("display");
    }

    public static android.view.Display[] getDisplays(Object p0)
    {
      return ((android.hardware.display.DisplayManager)p0).getDisplays();
    }

    public static android.view.Display[] getDisplays(Object p0, String p1)
    {
      return ((android.hardware.display.DisplayManager)p0).getDisplays(p1);
    }

}
