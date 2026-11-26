// Decompiled from classes.dex (SourceFile: SimpleCursorAdapter.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

import android.net.Uri;
public class SimpleCursorAdapter extends android.support.v4.widget.ResourceCursorAdapter {
    // Fields
    private android.support.v4.widget.SimpleCursorAdapter$CursorToStringConverter mCursorToStringConverter;
    protected int[] mFrom;
    java.lang.String[] mOriginalFrom;
    private int mStringConversionColumn;
    protected int[] mTo;
    private android.support.v4.widget.SimpleCursorAdapter$ViewBinder mViewBinder;

    // Methods
    public SimpleCursorAdapter(android.content.Context p0, int p1, android.database.Cursor p2, String[] p3, int[] p4)
    {
      super(p0, p1, p2);
      this.mStringConversionColumn = -1;
      this.mTo = (int[])p4;
      this.mOriginalFrom = p3;
      this.findColumns(p3);
    }

    public SimpleCursorAdapter(
            android.content.Context p0,
            int p1,
            android.database.Cursor p2,
            String[] p3,
            int[] p4,
            int p5)
    {
      super(p0, p1, p2, p5);
      this.mStringConversionColumn = -1;
      this.mTo = (int[])p4;
      this.mOriginalFrom = p3;
      this.findColumns(p3);
    }

    private void findColumns(String[] p0)
    {
      int v2;
      int i;
      if ( this.mCursor != null )
      {
        v2 = p0.length;
        if ( this.mFrom == null || this.mFrom.length != v2 )
          this.mFrom = new int[v2];
        for ( i = 0; i < v2; ++i )
          this.mFrom[i] = this.mCursor.getColumnIndexOrThrow(p0[i]);
      }
      else
      {
        this.mFrom = null;
      }
    }

    public void bindView(android.view.View p0, android.content.Context p1, android.database.Cursor p2)
    {
      android.support.v4.widget.SimpleCursorAdapter$ViewBinder mViewBinder;
      int v5;
      int[] mFrom;
      int[] mTo;
      int i;
      android.view.View ViewById; // RETVAL
      Object v10;
      String String;
      mViewBinder = this.mViewBinder;
      v5 = this.mTo.length;
      mFrom = this.mFrom;
      mTo = this.mTo;
      for ( i = 0; i < v5; ++i )
      {
        ViewById = p0.findViewById(mTo[i]);
        v10 = ViewById;
        if ( ViewById != null && (mViewBinder == null || !mViewBinder.setViewValue(ViewById, p2, mFrom[i])) )
        {
          String = p2.getString(mFrom[i]);
          if ( String == null )
            String = "";
          if ( v10 instanceof android.widget.TextView )
          {
            this.setViewText((android.widget.TextView)v10, String);
          }
          else
          {
            if ( !(v10 instanceof android.widget.ImageView) )
              throw new IllegalStateException(v10.getClass().getName()
                                            + " is not a  view that can be bounds by this SimpleCursorAdapter");
            this.setViewImage((android.widget.ImageView)v10, String);
          }
        }
      }
    }

    public void changeCursorAndColumns(android.database.Cursor p0, String[] p1, int[] p2)
    {
      this.mOriginalFrom = p1;
      this.mTo = (int[])p2;
      super.changeCursor(p0);
      this.findColumns(this.mOriginalFrom);
    }

    public CharSequence convertToString(android.database.Cursor p0)
    {
      if ( this.mCursorToStringConverter != null )
        return this.mCursorToStringConverter.convertToString(p0);
      if ( this.mStringConversionColumn < 0 )
        return super.convertToString(p0);
      return p0.getString(this.mStringConversionColumn);
    }

    public android.support.v4.widget.SimpleCursorAdapter$CursorToStringConverter getCursorToStringConverter()
    {
      return this.mCursorToStringConverter;
    }

    public int getStringConversionColumn()
    {
      return this.mStringConversionColumn;
    }

    public android.support.v4.widget.SimpleCursorAdapter$ViewBinder getViewBinder()
    {
      return this.mViewBinder;
    }

    public void setCursorToStringConverter(
            android.support.v4.widget.SimpleCursorAdapter$CursorToStringConverter p0)
    {
      this.mCursorToStringConverter = p0;
    }

    public void setStringConversionColumn(int p0)
    {
      this.mStringConversionColumn = p0;
    }

    public void setViewBinder(android.support.v4.widget.SimpleCursorAdapter$ViewBinder p0)
    {
      this.mViewBinder = p0;
    }

    public void setViewImage(android.widget.ImageView p0, String p1)
    {
      try
      {
        p0.setImageResource(Integer.parseInt(p1));
      }
      catch ( NumberFormatException e )
      {
        p0.setImageURI(Uri.parse(p1));
      }
    }

    public void setViewText(android.widget.TextView p0, String p1)
    {
      p0.setText(p1);
    }

    public android.database.Cursor swapCursor(android.database.Cursor p0)
    {
      android.database.Cursor result; // RETVAL
    
      result = super.swapCursor(p0);
      this.findColumns(this.mOriginalFrom);
      return result;
    }

}
