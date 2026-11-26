// Decompiled from classes.dex (SourceFile: CursorFilter.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

class CursorFilter extends android.widget.Filter {
    // Fields
    android.support.v4.widget.CursorFilter$CursorFilterClient mClient;

    // Methods
    CursorFilter(android.support.v4.widget.CursorFilter$CursorFilterClient p0)
    {
      super();
      this.mClient = p0;
    }

    public CharSequence convertResultToString(Object p0)
    {
      return this.mClient.convertToString((android.database.Cursor)p0);
    }

    protected android.widget.Filter.FilterResults performFiltering(CharSequence p0)
    {
      android.database.Cursor v2; // RETVAL
      Object v3;
      android.widget.Filter.FilterResults v4;
      v2 = this.mClient.runQueryOnBackgroundThread(p0);
      v3 = v2;
      v4 = new android.widget.Filter.FilterResults();
      if ( v2 != null )
      {
        v4.count = v2.getCount();
        v4.values = v3;
      }
      else
      {
        v4.count = 0;
        v4.values = null;
      }
      return v4;
    }

    protected void publishResults(CharSequence p0, android.widget.Filter.FilterResults p1)
    {
      android.database.Cursor Cursor; // RETVAL
    
      Cursor = this.mClient.getCursor();
      if ( p1.values != null && p1.values != Cursor )
        this.mClient.changeCursor((android.database.Cursor)p1.values);
    }

}
