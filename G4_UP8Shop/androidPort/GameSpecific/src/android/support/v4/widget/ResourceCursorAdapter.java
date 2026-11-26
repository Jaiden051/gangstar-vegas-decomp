// Decompiled from classes.dex (SourceFile: ResourceCursorAdapter.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

public abstract class ResourceCursorAdapter extends android.support.v4.widget.CursorAdapter {
    // Fields
    private int mDropDownLayout;
    private android.view.LayoutInflater mInflater;
    private int mLayout;

    // Methods
    public ResourceCursorAdapter(android.content.Context p0, int p1, android.database.Cursor p2)
    {
      super(p0, p2);
      this.mDropDownLayout = p1;
      this.mLayout = p1;
      this.mInflater = (android.view.LayoutInflater)p0.getSystemService("layout_inflater");
    }

    public ResourceCursorAdapter(android.content.Context p0, int p1, android.database.Cursor p2, int p3)
    {
      super(p0, p2, p3);
      this.mDropDownLayout = p1;
      this.mLayout = p1;
      this.mInflater = (android.view.LayoutInflater)p0.getSystemService("layout_inflater");
    }

    public ResourceCursorAdapter(android.content.Context p0, int p1, android.database.Cursor p2, boolean p3)
    {
      super(p0, p2, p3);
      this.mDropDownLayout = p1;
      this.mLayout = p1;
      this.mInflater = (android.view.LayoutInflater)p0.getSystemService("layout_inflater");
    }

    public android.view.View newDropDownView(
            android.content.Context p0,
            android.database.Cursor p1,
            android.view.ViewGroup p2)
    {
      return this.mInflater.inflate(this.mDropDownLayout, p2, false);
    }

    public android.view.View newView(
            android.content.Context p0,
            android.database.Cursor p1,
            android.view.ViewGroup p2)
    {
      return this.mInflater.inflate(this.mLayout, p2, false);
    }

    public void setDropDownViewResource(int p0)
    {
      this.mDropDownLayout = p0;
    }

    public void setViewResource(int p0)
    {
      this.mLayout = p0;
    }

}
