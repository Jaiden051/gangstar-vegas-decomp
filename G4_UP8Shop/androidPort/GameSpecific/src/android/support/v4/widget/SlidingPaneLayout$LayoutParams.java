// Decompiled from classes.dex (SourceFile: SlidingPaneLayout$LayoutParams.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

public class SlidingPaneLayout$LayoutParams extends android.view.ViewGroup.MarginLayoutParams {
    // Fields
    private static final int[] ATTRS;
    android.graphics.Paint dimPaint;
    boolean dimWhenOffset;
    boolean slideable;
    public float weight;

    // Methods
    static
    {
      int[] v0;
      v0 = new int[1];
      v0[0] = 16843137;
      ATTRS = (int[])v0;
    }

    public SlidingPaneLayout$LayoutParams()
    {
      super(-1, -1);
      this.weight = 0.0f;
    }

    public SlidingPaneLayout$LayoutParams(int p0, int p1)
    {
      super(p0, p1);
      this.weight = 0.0f;
    }

    public SlidingPaneLayout$LayoutParams(android.content.Context p0, android.util.AttributeSet p1)
    {
      super(p0, p1);
      android.content.res.TypedArray v3;
      this.weight = 0.0f;
      v3 = p0.obtainStyledAttributes(p1, ATTRS);
      this.weight = v3.getFloat(0, 0.0f);
      v3.recycle();
    
    }

    public SlidingPaneLayout$LayoutParams(android.support.v4.widget.SlidingPaneLayout$LayoutParams p0)
    {
      super(p0);
      this.weight = 0.0f;
      this.weight = p0.weight;
    }

    public SlidingPaneLayout$LayoutParams(android.view.ViewGroup.LayoutParams p0)
    {
      super(p0);
      this.weight = 0.0f;
    }

    public SlidingPaneLayout$LayoutParams(android.view.ViewGroup.MarginLayoutParams p0)
    {
      super(p0);
      this.weight = 0.0f;
    }

}
