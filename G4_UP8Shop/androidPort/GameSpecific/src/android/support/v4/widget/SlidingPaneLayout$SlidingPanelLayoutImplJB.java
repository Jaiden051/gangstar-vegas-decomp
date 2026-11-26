// Decompiled from classes.dex (SourceFile: SlidingPaneLayout$SlidingPanelLayoutImplJB.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

import android.util.Log;
class SlidingPaneLayout$SlidingPanelLayoutImplJB extends android.support.v4.widget.SlidingPaneLayout$SlidingPanelLayoutImplBase {
    // Fields
    private java.lang.reflect.Method mGetDisplayList;
    private java.lang.reflect.Field mRecreateDisplayList;

    // Methods
    SlidingPaneLayout$SlidingPanelLayoutImplJB()
    {
      super();
      try
      {
        this.mGetDisplayList = android.view.View.class.getDeclaredMethod("getDisplayList", null);
      }
      catch ( NoSuchMethodException v1 )
      {
        Log.e("SlidingPaneLayout", "Couldn't fetch getDisplayList method; dimming won't work right.", v1);
      }
      try
      {
        this.mRecreateDisplayList = android.view.View.class.getDeclaredField("mRecreateDisplayList");
        this.mRecreateDisplayList.setAccessible(true);
      }
      catch ( NoSuchFieldException v2 )
      {
        Log.e("SlidingPaneLayout", "Couldn't fetch mRecreateDisplayList field; dimming will be slow.", v2);
      }
    }

    public void invalidateChildRegion(
            android.support.v4.widget.SlidingPaneLayout p0,
            android.view.View p1)
    {
      if ( this.mGetDisplayList != null && this.mRecreateDisplayList != null )
      {
        try
        {
          this.mRecreateDisplayList.setBoolean(p1, true);
          this.mGetDisplayList.invoke(p1, null);
        }
        catch ( Exception v3 )
        {
          Log.e("SlidingPaneLayout", "Error refreshing display list state", v3);
        }
        super.invalidateChildRegion(p0, p1);
        return;
      }
      p1.invalidate();
    }

}
