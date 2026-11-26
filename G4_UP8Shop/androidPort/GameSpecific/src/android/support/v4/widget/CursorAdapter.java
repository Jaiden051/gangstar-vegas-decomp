// Decompiled from classes.dex (SourceFile: CursorAdapter.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

public abstract class CursorAdapter extends android.widget.BaseAdapter implements android.support.v4.widget.CursorFilter$CursorFilterClient, android.widget.Filterable {
    // Fields
    public static int FLAG_AUTO_REQUERY;
    public static int FLAG_REGISTER_CONTENT_OBSERVER;
    protected boolean mAutoRequery;
    protected android.support.v4.widget.CursorAdapter$ChangeObserver mChangeObserver;
    protected android.content.Context mContext;
    protected android.database.Cursor mCursor;
    protected android.support.v4.widget.CursorFilter mCursorFilter;
    protected android.database.DataSetObserver mDataSetObserver;
    protected boolean mDataValid;
    protected android.widget.FilterQueryProvider mFilterQueryProvider;
    protected int mRowIDColumn;

    // Methods
    public CursorAdapter(android.content.Context p0, android.database.Cursor p1)
    {
      super();
      this.init(p0, p1, 1);
    }

    public CursorAdapter(android.content.Context p0, android.database.Cursor p1, int p2)
    {
      super();
      this.init(p0, p1, p2);
    }

    public CursorAdapter(android.content.Context p0, android.database.Cursor p1, boolean p2)
    {
      super();
      int v4;
      if ( p2 )
        v4 = 1;
      else
        v4 = 2;
      this.init(p0, p1, v4);
    
    }

    public abstract void bindView(android.view.View p0, android.content.Context p1, android.database.Cursor p2);

    public void changeCursor(android.database.Cursor p0)
    {
      android.database.Cursor v2; // RETVAL
    
      v2 = this.swapCursor(p0);
      if ( v2 != null )
        v2.close();
    }

    public CharSequence convertToString(android.database.Cursor p0)
    {
      if ( p0 != null )
        return p0.toString();
      else
        return "";
    }

    public int getCount()
    {
      if ( this.mDataValid && this.mCursor != null )
        return this.mCursor.getCount();
      else
        return 0;
    }

    public android.database.Cursor getCursor()
    {
      return this.mCursor;
    }

    public android.view.View getDropDownView(int p0, android.view.View p1, android.view.ViewGroup p2)
    {
      if ( !this.mDataValid )
        return null;
      this.mCursor.moveToPosition(p0);
      if ( p1 == null )
        p1 = this.newDropDownView(this.mContext, this.mCursor, p2);
      this.bindView(p1, this.mContext, this.mCursor);
      return p1;
    }

    public android.widget.Filter getFilter()
    {
      if ( this.mCursorFilter == null )
        this.mCursorFilter = new android.support.v4.widget.CursorFilter(this);
      return this.mCursorFilter;
    }

    public android.widget.FilterQueryProvider getFilterQueryProvider()
    {
      return this.mFilterQueryProvider;
    }

    public Object getItem(int p0)
    {
      if ( !this.mDataValid || this.mCursor == null )
        return null;
      this.mCursor.moveToPosition(p0);
      return this.mCursor;
    }

    public long getItemId(int p0)
    {
      long v2;
      v2 = 0;
      if ( this.mDataValid && this.mCursor != null && this.mCursor.moveToPosition(p0) )
        return this.mCursor.getLong(this.mRowIDColumn);
      return v2;
    }

    public android.view.View getView(int p0, android.view.View p1, android.view.ViewGroup p2)
    {
      if ( !this.mDataValid )
        throw new IllegalStateException("this should only be called when the cursor is valid");
      if ( !this.mCursor.moveToPosition(p0) )
        throw new IllegalStateException("couldn't move cursor to position " + p0);
      if ( p1 == null )
        p1 = this.newView(this.mContext, this.mCursor, p2);
      this.bindView(p1, this.mContext, this.mCursor);
      return p1;
    }

    public boolean hasStableIds()
    {
      return true;
    }

    void init(android.content.Context p0, android.database.Cursor p1, int p2)
    {
      boolean v4;
      int ColumnIndexOrThrow;
      v4 = true;
      if ( (p2 & 1) == 1 )
      {
        p2 = (p2 | 2);
        this.mAutoRequery = true;
      }
      else
      {
        this.mAutoRequery = false;
      }
      if ( p1 == null )
        v4 = false;
      this.mCursor = p1;
      this.mDataValid = v4;
      this.mContext = p0;
      if ( v4 )
        ColumnIndexOrThrow = p1.getColumnIndexOrThrow("_id");
      else
        ColumnIndexOrThrow = -1;
      this.mRowIDColumn = ColumnIndexOrThrow;
      if ( (p2 & 2) == 2 )
      {
        this.mChangeObserver = new android.support.v4.widget.CursorAdapter$ChangeObserver(this);
        this.mDataSetObserver = new android.support.v4.widget.CursorAdapter$MyDataSetObserver(this, null);
      }
      else
      {
        this.mChangeObserver = null;
        this.mDataSetObserver = null;
      }
      if ( v4 )
      {
        if ( this.mChangeObserver != null )
          p1.registerContentObserver(this.mChangeObserver);
        if ( this.mDataSetObserver != null )
          p1.registerDataSetObserver(this.mDataSetObserver);
      }
    }

    protected void init(android.content.Context p0, android.database.Cursor p1, boolean p2)
    {
      int v4;
      if ( p2 )
        v4 = 1;
      else
        v4 = 2;
      this.init(p0, p1, v4);
    }

    public android.view.View newDropDownView(
            android.content.Context p0,
            android.database.Cursor p1,
            android.view.ViewGroup p2)
    {
      return this.newView(p0, p1, p2);
    }

    public abstract android.view.View newView(android.content.Context p0, android.database.Cursor p1, android.view.ViewGroup p2);

    protected void onContentChanged()
    {
      if ( this.mAutoRequery && this.mCursor != null && !this.mCursor.isClosed() )
        this.mDataValid = this.mCursor.requery();
    }

    public android.database.Cursor runQueryOnBackgroundThread(CharSequence p0)
    {
      if ( this.mFilterQueryProvider != null )
        return this.mFilterQueryProvider.runQuery(p0);
      else
        return this.mCursor;
    }

    public void setFilterQueryProvider(android.widget.FilterQueryProvider p0)
    {
      this.mFilterQueryProvider = p0;
    }

    public android.database.Cursor swapCursor(android.database.Cursor p0)
    {
      android.database.Cursor mCursor;
      if ( p0 == this.mCursor )
        return null;
      mCursor = this.mCursor;
      if ( mCursor != null )
      {
        if ( this.mChangeObserver != null )
          mCursor.unregisterContentObserver(this.mChangeObserver);
        if ( this.mDataSetObserver != null )
          mCursor.unregisterDataSetObserver(this.mDataSetObserver);
      }
      this.mCursor = p0;
      if ( p0 != null )
      {
        if ( this.mChangeObserver != null )
          p0.registerContentObserver(this.mChangeObserver);
        if ( this.mDataSetObserver != null )
          p0.registerDataSetObserver(this.mDataSetObserver);
        this.mRowIDColumn = p0.getColumnIndexOrThrow("_id");
        this.mDataValid = true;
        this.notifyDataSetChanged();
      }
      else
      {
        this.mRowIDColumn = -1;
        this.mDataValid = false;
        this.notifyDataSetInvalidated();
      }
      return mCursor;
    }

}
