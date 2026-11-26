// Decompiled from classes.dex (SourceFile: ViewConfigurationCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

import android.os.Build;
public class ViewConfigurationCompat {
    // Fields
    static final android.support.v4.view.ViewConfigurationCompat$ViewConfigurationVersionImpl IMPL;

    // Methods
    static
    {
      if ( Build.VERSION.SDK_INT < 11 )
        IMPL = (android.support.v4.view.ViewConfigurationCompat$ViewConfigurationVersionImpl)new android.support.v4.view.ViewConfigurationCompat$BaseViewConfigurationVersionImpl();
      else
        IMPL = (android.support.v4.view.ViewConfigurationCompat$ViewConfigurationVersionImpl)new android.support.v4.view.ViewConfigurationCompat$FroyoViewConfigurationVersionImpl();
    }

    public ViewConfigurationCompat()
    {
      super();
    }

    public static int getScaledPagingTouchSlop(android.view.ViewConfiguration p0)
    {
      return IMPL.getScaledPagingTouchSlop(p0);
    }

}
