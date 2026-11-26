// Decompiled from classes.dex (SourceFile: AutoScrollHelper$ScrollAnimationRunnable.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

import android.support.v4.view.ViewCompat;
class AutoScrollHelper$ScrollAnimationRunnable implements java.lang.Runnable {
    // Fields
    final android.support.v4.widget.AutoScrollHelper this$0;

    // Methods
    private AutoScrollHelper$ScrollAnimationRunnable(android.support.v4.widget.AutoScrollHelper p0)
    {
      super();
      this.this$0 = p0;
    
    }

    /* synthetic */ AutoScrollHelper$ScrollAnimationRunnable(
            android.support.v4.widget.AutoScrollHelper p0,
            android.support.v4.widget.AutoScrollHelper$1 p1)
    {
      this(p0);
    }

    public void run()
    {
      android.support.v4.widget.AutoScrollHelper$ClampedScroller v1;
      if ( AutoScrollHelper.access$100(this.this$0) )
      {
        if ( AutoScrollHelper.access$200(this.this$0) )
        {
          AutoScrollHelper.access$202(this.this$0, false);
          AutoScrollHelper.access$300(this.this$0).start();
        }
        v1 = AutoScrollHelper.access$300(this.this$0);
        if ( !v1.isFinished() && AutoScrollHelper.access$400(this.this$0) )
        {
          if ( AutoScrollHelper.access$500(this.this$0) )
          {
            AutoScrollHelper.access$502(this.this$0, false);
            AutoScrollHelper.access$600(this.this$0);
          }
          v1.computeScrollDelta();
          this.this$0.scrollTargetBy(v1.getDeltaX(), v1.getDeltaY());
          ViewCompat.postOnAnimation(AutoScrollHelper.access$700(this.this$0), (Runnable)this);
        }
        else
        {
          AutoScrollHelper.access$102(this.this$0, false);
        }
      }
    }

}
