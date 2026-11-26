// Decompiled from classes.dex (SourceFile: CursorAdapter$MyDataSetObserver.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

class CursorAdapter$MyDataSetObserver extends android.database.DataSetObserver {
    // Fields
    final android.support.v4.widget.CursorAdapter this$0;

    // Methods
    private CursorAdapter$MyDataSetObserver(android.support.v4.widget.CursorAdapter p0)
    {
      super();
      this.this$0 = p0;
    
    }

    /* synthetic */ CursorAdapter$MyDataSetObserver(
            android.support.v4.widget.CursorAdapter p0,
            android.support.v4.widget.CursorAdapter$1 p1)
    {
      this(p0);
    }

    public void onChanged()
    {
      this.this$0.mDataValid = true;
      this.this$0.notifyDataSetChanged();
    }

    public void onInvalidated()
    {
      this.this$0.mDataValid = false;
      this.this$0.notifyDataSetInvalidated();
    }

}
