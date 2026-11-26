// Decompiled from classes.dex (SourceFile: ViewConfigurationCompat$BaseViewConfigurationVersionImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class ViewConfigurationCompat$BaseViewConfigurationVersionImpl implements android.support.v4.view.ViewConfigurationCompat$ViewConfigurationVersionImpl {
    // Methods
    ViewConfigurationCompat$BaseViewConfigurationVersionImpl()
    {
      super();
    }

    public int getScaledPagingTouchSlop(
            android.view.ViewConfiguration p0)
    {
      return p0.getScaledTouchSlop();
    }

}
