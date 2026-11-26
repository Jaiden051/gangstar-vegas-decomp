// Decompiled from classes.dex (SourceFile: SlidingPaneLayout$SlidingPanelLayoutImplBase.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

import android.support.v4.view.ViewCompat;
class SlidingPaneLayout$SlidingPanelLayoutImplBase implements android.support.v4.widget.SlidingPaneLayout$SlidingPanelLayoutImpl {
    // Methods
    SlidingPaneLayout$SlidingPanelLayoutImplBase()
    {
      super();
    }

    public void invalidateChildRegion(
            android.support.v4.widget.SlidingPaneLayout p0,
            android.view.View p1)
    {
      ViewCompat.postInvalidateOnAnimation(p0, p1.getLeft(), p1.getTop(), p1.getRight(), p1.getBottom());
    }

}
