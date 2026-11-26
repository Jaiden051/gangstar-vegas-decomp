// Decompiled from classes.dex (SourceFile: ExploreByTouchHelper$ExploreByTouchNodeProvider.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

class ExploreByTouchHelper$ExploreByTouchNodeProvider extends android.support.v4.view.accessibility.AccessibilityNodeProviderCompat {
    // Fields
    final android.support.v4.widget.ExploreByTouchHelper this$0;

    // Methods
    private ExploreByTouchHelper$ExploreByTouchNodeProvider(android.support.v4.widget.ExploreByTouchHelper p0)
    {
      super();
      this.this$0 = p0;
    
    }

    /* synthetic */ ExploreByTouchHelper$ExploreByTouchNodeProvider(
            android.support.v4.widget.ExploreByTouchHelper p0,
            android.support.v4.widget.ExploreByTouchHelper$1 p1)
    {
      this(p0);
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat createAccessibilityNodeInfo(
            int p0)
    {
      return ExploreByTouchHelper.access$100(this.this$0, p0);
    }

    public boolean performAction(int p0, int p1, android.os.Bundle p2)
    {
      return ExploreByTouchHelper.access$200(this.this$0, p0, p1, p2);
    }

}
