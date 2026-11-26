// Decompiled from classes.dex (SourceFile: ListViewAutoScrollHelper.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

public class ListViewAutoScrollHelper extends android.support.v4.widget.AutoScrollHelper {
    // Fields
    private final android.widget.ListView mTarget;

    // Methods
    public ListViewAutoScrollHelper(android.widget.ListView p0)
    {
      super(p0);
      this.mTarget = p0;
    }

    public boolean canTargetScrollHorizontally(int p0)
    {
      return false;
    }

    public boolean canTargetScrollVertically(int p0)
    {
      boolean v2;
      android.widget.ListView mTarget;
      int Count;
      int ChildCount;
      int FirstVisiblePosition; // RETVAL
    
      v2 = false;
      mTarget = this.mTarget;
      Count = mTarget.getCount();
      ChildCount = mTarget.getChildCount();
      FirstVisiblePosition = mTarget.getFirstVisiblePosition();
      if ( p0 > 0 )
      {
        if ( FirstVisiblePosition + ChildCount >= Count
          && mTarget.getChildAt(ChildCount - 1).getBottom() <= mTarget.getHeight() )
        {
          return v2;
        }
        return true;
      }
      if ( p0 < 0 && (FirstVisiblePosition > 0 || mTarget.getChildAt(0).getTop() < 0) )
        return true;
      return v2;
    }

    public void scrollTargetBy(int p0, int p1)
    {
      android.widget.ListView mTarget;
      int FirstVisiblePosition;
      android.view.View ChildAt; // RETVAL
    
      mTarget = this.mTarget;
      FirstVisiblePosition = mTarget.getFirstVisiblePosition();
      if ( FirstVisiblePosition != -1 )
      {
        ChildAt = mTarget.getChildAt(0);
        if ( ChildAt != null )
          mTarget.setSelectionFromTop(FirstVisiblePosition, ChildAt.getTop() - p1);
      }
    }

}
