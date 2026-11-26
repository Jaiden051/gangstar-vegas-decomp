// Decompiled from classes.dex (SourceFile: NoSaveStateFrameLayout.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

class NoSaveStateFrameLayout extends android.widget.FrameLayout {
    // Methods
    private NoSaveStateFrameLayout(android.content.Context p0)
    {
      super(p0);
    }

    static android.view.ViewGroup wrap(android.view.View p0)
    {
      android.support.v4.app.NoSaveStateFrameLayout v1;
      android.view.ViewGroup.LayoutParams LayoutParams; // RETVAL
    
      v1 = new android.support.v4.app.NoSaveStateFrameLayout(p0.getContext());
      LayoutParams = p0.getLayoutParams();
      if ( LayoutParams != null )
        v1.setLayoutParams(LayoutParams);
      p0.setLayoutParams(new android.widget.FrameLayout.LayoutParams(-1, -1));
      v1.addView(p0);
      return v1;
    }

    protected void dispatchRestoreInstanceState(android.util.SparseArray<android.os.Parcelable> p0)
    {
      this.dispatchThawSelfOnly(p0);
    }

    protected void dispatchSaveInstanceState(android.util.SparseArray<android.os.Parcelable> p0)
    {
      this.dispatchFreezeSelfOnly(p0);
    }

}
