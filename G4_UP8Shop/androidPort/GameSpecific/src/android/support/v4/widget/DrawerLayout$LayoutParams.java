// Decompiled from classes.dex (SourceFile: DrawerLayout$LayoutParams.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

public class DrawerLayout$LayoutParams extends android.view.ViewGroup.MarginLayoutParams {
    // Fields
    public int gravity;
    boolean isPeeking;
    boolean knownOpen;
    float onScreen;

    // Methods
    public DrawerLayout$LayoutParams(int p0, int p1)
    {
      super(p0, p1);
      this.gravity = 0;
    }

    public DrawerLayout$LayoutParams(int p0, int p1, int p2)
    {
      this(p0, p1);
      this.gravity = p2;
    }

    public DrawerLayout$LayoutParams(android.content.Context p0, android.util.AttributeSet p1)
    {
      super(p0, p1);
      android.content.res.TypedArray v3;
      this.gravity = 0;
      v3 = p0.obtainStyledAttributes(p1, DrawerLayout.access$100());
      this.gravity = v3.getInt(0, 0);
      v3.recycle();
    
    }

    public DrawerLayout$LayoutParams(android.support.v4.widget.DrawerLayout$LayoutParams p0)
    {
      super(p0);
      this.gravity = 0;
      this.gravity = p0.gravity;
    }

    public DrawerLayout$LayoutParams(android.view.ViewGroup.LayoutParams p0)
    {
      super(p0);
      this.gravity = 0;
    }

    public DrawerLayout$LayoutParams(android.view.ViewGroup.MarginLayoutParams p0)
    {
      super(p0);
      this.gravity = 0;
    }

}
