// Decompiled from classes.dex (SourceFile: SlidingPaneLayout$DisableLayerRunnable.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

import android.support.v4.view.ViewCompat;
class SlidingPaneLayout$DisableLayerRunnable implements java.lang.Runnable {
    // Fields
    final android.view.View mChildView;
    final android.support.v4.widget.SlidingPaneLayout this$0;

    // Methods
    SlidingPaneLayout$DisableLayerRunnable(android.support.v4.widget.SlidingPaneLayout p0, android.view.View p1)
    {
      super();
      this.this$0 = p0;
      this.mChildView = p1;
    
    }

    public void run()
    {
      if ( this.mChildView.getParent() == this.this$0 )
      {
        ViewCompat.setLayerType(this.mChildView, 0, null);
        SlidingPaneLayout.access$900(this.this$0, this.mChildView);
      }
      SlidingPaneLayout.access$1000(this.this$0).remove(this);
    }

}
