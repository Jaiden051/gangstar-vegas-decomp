// Decompiled from classes.dex (SourceFile: ViewPager$LayoutParams.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

public class ViewPager$LayoutParams extends android.view.ViewGroup.LayoutParams {
    // Fields
    int childIndex;
    public int gravity;
    public boolean isDecor;
    boolean needsMeasure;
    int position;
    float widthFactor;

    // Methods
    public ViewPager$LayoutParams()
    {
      super(-1, -1);
      this.widthFactor = 0.0f;
    }

    public ViewPager$LayoutParams(android.content.Context p0, android.util.AttributeSet p1)
    {
      super(p0, p1);
      android.content.res.TypedArray v3;
      this.widthFactor = 0.0f;
      v3 = p0.obtainStyledAttributes(p1, ViewPager.access$400());
      this.gravity = v3.getInteger(0, 48);
      v3.recycle();
    
    }

}
