// Decompiled from classes.dex (SourceFile: ViewPager$MyAccessibilityDelegate.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

import android.support.v4.view.accessibility.AccessibilityRecordCompat;
class ViewPager$MyAccessibilityDelegate extends android.support.v4.view.AccessibilityDelegateCompat {
    // Fields
    final android.support.v4.view.ViewPager this$0;

    // Methods
    ViewPager$MyAccessibilityDelegate(android.support.v4.view.ViewPager p0)
    {
      super();
      this.this$0 = p0;
    
    }

    private boolean canScroll()
    {
      boolean v1;
      v1 = true;
      if ( ViewPager.access$200(this.this$0) == null || ViewPager.access$200(this.this$0).getCount() <= 1 )
        return false;
      return v1;
    }

    public void onInitializeAccessibilityEvent(
            android.view.View p0,
            android.view.accessibility.AccessibilityEvent p1)
    {
      android.support.v4.view.accessibility.AccessibilityRecordCompat v3;
      super.onInitializeAccessibilityEvent(p0, p1);
      p1.setClassName(android.support.v4.view.ViewPager.class.getName());
      v3 = AccessibilityRecordCompat.obtain();
      v3.setScrollable(this.canScroll());
      if ( p1.getEventType() == 4096 && ViewPager.access$200(this.this$0) != null )
      {
        v3.setItemCount(ViewPager.access$200(this.this$0).getCount());
        v3.setFromIndex(ViewPager.access$300(this.this$0));
        v3.setToIndex(ViewPager.access$300(this.this$0));
      }
    }

    public void onInitializeAccessibilityNodeInfo(
            android.view.View p0,
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat p1)
    {
      super.onInitializeAccessibilityNodeInfo(p0, p1);
      p1.setClassName(android.support.v4.view.ViewPager.class.getName());
      p1.setScrollable(this.canScroll());
      if ( this.this$0.canScrollHorizontally(1) )
        p1.addAction(4096);
      if ( this.this$0.canScrollHorizontally(-1) )
        p1.addAction(0x2000);
    }

    public boolean performAccessibilityAction(
            android.view.View p0,
            int p1,
            android.os.Bundle p2)
    {
      boolean v4;
      v4 = true;
      if ( !super.performAccessibilityAction(p0, p1, p2) )
      {
        switch ( p1 )
        {
          case 0x1000:
            if ( this.this$0.canScrollHorizontally(1) )
              this.this$0.setCurrentItem(ViewPager.access$300(this.this$0) + 1);
            else
              v4 = false;
            break;
          case 0x2000:
            if ( this.this$0.canScrollHorizontally(-1) )
              this.this$0.setCurrentItem(ViewPager.access$300(this.this$0) - 1);
            else
              v4 = false;
            break;
          default:
            v4 = false;
            break;
        }
      }
      return v4;
    }

}
