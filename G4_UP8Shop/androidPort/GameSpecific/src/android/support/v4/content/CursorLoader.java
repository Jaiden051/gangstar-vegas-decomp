// Decompiled from classes.dex (SourceFile: CursorLoader.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.content;

import java.util.Arrays;
public class CursorLoader extends android.support.v4.content.AsyncTaskLoader {
    // Fields
    android.database.Cursor mCursor;
    final android.support.v4.content.Loader$ForceLoadContentObserver mObserver;
    java.lang.String[] mProjection;
    java.lang.String mSelection;
    java.lang.String[] mSelectionArgs;
    java.lang.String mSortOrder;
    android.net.Uri mUri;

    // Methods
    public CursorLoader(android.content.Context p0)
    {
      super(p0);
      this.mObserver = new android.support.v4.content.Loader$ForceLoadContentObserver(this);
    }

    public CursorLoader(android.content.Context p0, android.net.Uri p1, String[] p2, String p3, String[] p4, String p5)
    {
      super(p0);
      this.mObserver = new android.support.v4.content.Loader$ForceLoadContentObserver(this);
      this.mUri = p1;
      this.mProjection = p2;
      this.mSelection = p3;
      this.mSelectionArgs = p4;
      this.mSortOrder = p5;
    }

    public void deliverResult(android.database.Cursor p0)
    {
      android.database.Cursor mCursor;
      if ( this.isReset() )
      {
        if ( p0 != null )
          p0.close();
      }
      else
      {
        mCursor = this.mCursor;
        this.mCursor = p0;
        if ( this.isStarted() )
          super.deliverResult(p0);
        if ( mCursor != null && mCursor != p0 && !mCursor.isClosed() )
          mCursor.close();
      }
    }

    /* bridge */ public void deliverResult(Object p0)
    {
      this.deliverResult/* void */((android.database.Cursor)p0);
    }

    public void dump(String p0, java.io.FileDescriptor p1, java.io.PrintWriter p2, String[] p3)
    {
      super.dump(p0, p1, p2, p3);
      p2.print(p0);
      p2.print("mUri=");
      p2.println(this.mUri);
      p2.print(p0);
      p2.print("mProjection=");
      p2.println(Arrays.toString(this.mProjection));
      p2.print(p0);
      p2.print("mSelection=");
      p2.println(this.mSelection);
      p2.print(p0);
      p2.print("mSelectionArgs=");
      p2.println(Arrays.toString(this.mSelectionArgs));
      p2.print(p0);
      p2.print("mSortOrder=");
      p2.println(this.mSortOrder);
      p2.print(p0);
      p2.print("mCursor=");
      p2.println(this.mCursor);
      p2.print(p0);
      p2.print("mContentChanged=");
      p2.println(this.mContentChanged);
    }

    public String[] getProjection()
    {
      return this.mProjection;
    }

    public String getSelection()
    {
      return this.mSelection;
    }

    public String[] getSelectionArgs()
    {
      return this.mSelectionArgs;
    }

    public String getSortOrder()
    {
      return this.mSortOrder;
    }

    public android.net.Uri getUri()
    {
      return this.mUri;
    }

    public android.database.Cursor loadInBackground()
    {
      android.database.Cursor v1; // RETVAL
      android.database.Cursor v2;
      v1 = this.getContext().getContentResolver().query(this.mUri, this.mProjection, this.mSelection, this.mSelectionArgs, this.mSortOrder);
      v2 = v1;
      if ( v1 != null )
      {
        v1.getCount();
        v2.registerContentObserver(this.mObserver);
      }
      return v2;
    }



    public void onCanceled(android.database.Cursor p0)
    {
      if ( p0 != null && !p0.isClosed() )
        p0.close();
    }

    /* bridge */ public void onCanceled(Object p0)
    {
      this.onCanceled/* void */((android.database.Cursor)p0);
    }

    protected void onReset()
    {
      super.onReset();
      this.onStopLoading();
      if ( this.mCursor != null && !this.mCursor.isClosed() )
        this.mCursor.close();
      this.mCursor = null;
    }

    protected void onStartLoading()
    {
      if ( this.mCursor != null )
        this.deliverResult(this.mCursor);
      if ( this.takeContentChanged() || this.mCursor == null )
        this.forceLoad();
    }

    protected void onStopLoading()
    {
      this.cancelLoad();
    }

    public void setProjection(String[] p0)
    {
      this.mProjection = p0;
    }

    public void setSelection(String p0)
    {
      this.mSelection = p0;
    }

    public void setSelectionArgs(String[] p0)
    {
      this.mSelectionArgs = p0;
    }

    public void setSortOrder(String p0)
    {
      this.mSortOrder = p0;
    }

    public void setUri(android.net.Uri p0)
    {
      this.mUri = p0;
    }

}
