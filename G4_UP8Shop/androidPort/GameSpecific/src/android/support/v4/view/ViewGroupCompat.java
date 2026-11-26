// Decompiled from classes.dex (SourceFile: ViewGroupCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

import android.os.Build;
public class ViewGroupCompat {
    // Fields
    static final android.support.v4.view.ViewGroupCompat$ViewGroupCompatImpl IMPL;
    public static int LAYOUT_MODE_CLIP_BOUNDS;
    public static int LAYOUT_MODE_OPTICAL_BOUNDS;

    // Methods
    static
    {
      int v0;
      v0 = Build.VERSION.SDK_INT;
      if ( v0 < 18 )
      {
        if ( v0 < 14 )
        {
          if ( v0 < 11 )
            IMPL = (android.support.v4.view.ViewGroupCompat$ViewGroupCompatImpl)new android.support.v4.view.ViewGroupCompat$ViewGroupCompatStubImpl();
          else
            IMPL = (android.support.v4.view.ViewGroupCompat$ViewGroupCompatImpl)new android.support.v4.view.ViewGroupCompat$ViewGroupCompatHCImpl();
        }
        else
        {
          IMPL = (android.support.v4.view.ViewGroupCompat$ViewGroupCompatImpl)new android.support.v4.view.ViewGroupCompat$ViewGroupCompatIcsImpl();
        }
      }
      else
      {
        IMPL = (android.support.v4.view.ViewGroupCompat$ViewGroupCompatImpl)new android.support.v4.view.ViewGroupCompat$ViewGroupCompatJellybeanMR2Impl();
      }
    }

    private ViewGroupCompat()
    {
      super();
    }

    public static int getLayoutMode(android.view.ViewGroup p0)
    {
      return IMPL.getLayoutMode(p0);
    }

    public static boolean onRequestSendAccessibilityEvent(
            android.view.ViewGroup p0,
            android.view.View p1,
            android.view.accessibility.AccessibilityEvent p2)
    {
      return IMPL.onRequestSendAccessibilityEvent(p0, p1, p2);
    }

    public static void setLayoutMode(android.view.ViewGroup p0, int p1)
    {
      IMPL.setLayoutMode(p0, p1);
    }

    public static void setMotionEventSplittingEnabled(android.view.ViewGroup p0, boolean p1)
    {
      IMPL.setMotionEventSplittingEnabled(p0, p1);
    }

}
