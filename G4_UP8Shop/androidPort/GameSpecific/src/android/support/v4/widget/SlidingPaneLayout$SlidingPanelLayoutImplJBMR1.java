// Decompiled from classes.dex (SourceFile: SlidingPaneLayout$SlidingPanelLayoutImplJBMR1.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

import android.support.v4.view.ViewCompat;
class SlidingPaneLayout$SlidingPanelLayoutImplJBMR1 extends android.support.v4.widget.SlidingPaneLayout$SlidingPanelLayoutImplBase {
    // Methods
    SlidingPaneLayout$SlidingPanelLayoutImplJBMR1()
    {
      super();
    }

    public void invalidateChildRegion(
            android.support.v4.widget.SlidingPaneLayout p0,
            android.view.View p1)
    {
      ViewCompat.setLayerPaint(
        p1,
        ((android.support.v4.widget.SlidingPaneLayout$LayoutParams)p1.getLayoutParams()).dimPaint);
    }

}
